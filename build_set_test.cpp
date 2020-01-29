#include "isl_utils.h"

#include <regex>
#include <cassert>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>

#include "algorithm.h"

using namespace dbhc;
using namespace std;

template<typename T>
T pick(const std::vector<T>& s) {
  return *(begin(s));
}

template<typename T>
T pick(const std::set<T>& s) {
  return *(begin(s));
}

std::string sep_list(const std::vector<std::string>& strs, const std::string& ldelim, const std::string& rdelim, const std::string& sep) {
  string res = ldelim;

  if (strs.size() > 0) {
    for (size_t i = 0; i < strs.size(); i++) {
      res += strs[i];
      if (strs.size() > 1 && i < strs.size() - 1) {
        res += sep;
      }
    }
  }
  res += rdelim;

  return res;
}

std::string comma_list(const std::vector<std::string>& strs) {
  return sep_list(strs, "", "", ", ");
}

class UBuffer {
  public:
    struct isl_ctx* ctx;
    isl_space* space;
    isl_space* map_space;
    string name;

    std::map<string, bool> isIn;
    std::map<string, isl_set*> domain;
    std::map<string, isl_map*> access_map;
    std::map<string, isl_union_map*> schedule;
    std::map<string, vector<string> > port_bundles;

    std::map<string, int> varInds;

    std::vector<string> physical_addr_vars;
    std::vector<string> writer_vars;
    std::vector<string> reader_vars;

    // Map from writer vars to logical addr vars
    map<string, isl_map*> write_funcs;

    // Map from reader vars to logical addr vars
    map<string, isl_map*> read_funcs;
    
    isl_map* physical_address_mapping;

    int port_widths;

    UBuffer() : port_widths(32) {}

    int port_width(const std::string& port_name) {
      return port_widths;
    }

    std::string port_type_string() {
      if (port_widths == 32) {
        return "int";
      }
      return "hw_uint<" + to_string(port_widths) + ">";
    }
    std::string port_type_string(const std::string& name) {
      if (port_width(name) == 32) {
        return "int";
      }
      return "hw_uint<" + to_string(port_width(name)) + ">";
    }

    int port_bundle_width(const std::string& bundle_name) {
      //cout << "Getting width of bundle: " << bundle_name << endl;
      int len = 0;
      for (auto pt : map_find(bundle_name, port_bundles)) {
        len += port_width(pt);
      }

      return len;
    }

    std::string bundle_type_string(const std::string& bundle_name) {
      int len = 0;
      for (auto pt : map_find(bundle_name, port_bundles)) {
        len += port_width(pt);
      }

      if (len == 32) {
        return "int";
      }
      return "hw_uint<" + to_string(len) + ">";
    }

    std::string bundle_stream(const std::string& bundle_name) {
      bool input_bundle = isIn.at(pick(port_bundles.at(bundle_name)));
      string bundle_type_str = bundle_type_string(bundle_name);
      return string(input_bundle ? "Input" : "Output") + "Stream<" + bundle_type_str + " >& " + bundle_name;
    }

    isl_union_map* global_schedule() {
      umap* s = isl_union_map_read_from_str(ctx, "{ }");
      for (auto other : schedule) {
        //s = unn(s, isl_union_map_from_map(cpy(other.second)));
        s = unn(s, (cpy(other.second)));
      }

      return s;
    }

    bool is_out_pt(const std::string& name) const {
      return !isIn.at(name);
    }

    void add_out_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_union_map* sched) {
      domain[name] = dm;
      access_map[name] = access;
      schedule[name] = (sched);
      isIn[name] = false;
    }

    void add_in_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_union_map* sched) {
      domain[name] = dm;
      access_map[name] = access;
      schedule[name] = (sched);
      isIn[name] = true;
    }
    
    void add_out_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_map* sched) {
      domain[name] = dm;
      access_map[name] = access;
      schedule[name] = to_umap(sched);
      isIn[name] = false;
    }

    void add_in_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_map* sched) {
      domain[name] = dm;
      access_map[name] = access;
      schedule[name] = to_umap(sched);
      isIn[name] = true;
    }

    void add_out_pt(const std::string& name,
        const std::string& dm,
        const std::string& access,
        const std::string& sched) {
      add_pt(name, dm, access, sched);
      isIn[name] = false;
    }

    void add_in_pt(const std::string& name,
        const std::string& dm,
        const std::string& access,
        const std::string& sched) {
      add_pt(name, dm, access, sched);
      isIn[name] = true;
    }

    void add_pt(const std::string& name,
        const std::string& dm,
        const std::string& access,
        const std::string& sched) {
      domain[name] =
        isl_set_read_from_str(ctx, dm.c_str());
      access_map[name] =
        isl_map_read_from_str(ctx, access.c_str());
      schedule[name] =
        isl_union_map_read_from_str(ctx, sched.c_str());
    }

    vector<string> get_in_bundles() const {
      vector<string> outpts;
      for (auto m : port_bundles) {
        if (!is_out_pt(pick(m.second))) {
          outpts.push_back(m.first);
        }
      }
      return outpts;
    }

    vector<string> get_in_ports() const {
      vector<string> outpts;
      for (auto m : isIn) {
        if (m.second) {
          outpts.push_back(m.first);
        }
      }
      return outpts;
    }

    vector<string> get_out_ports() const {
      vector<string> outpts;
      for (auto m : isIn) {
        if (!m.second) {
          outpts.push_back(m.first);
        }
      }
      return outpts;
    }

    string get_in_port() const {
      for (auto m : isIn) {
        if (m.second) {
          return m.first;
        }
      }
      assert(false);
    }

};

isl_stat get_const(isl_set* s, isl_qpolynomial* qp, void* user) {
  vector<int>* vals = (vector<int>*) user;
  //cout << "getting piece" << endl;
  print(isl_qpolynomial_get_ctx(qp), qp);
  print(isl_set_get_ctx(s), s);

  isl_val* v = isl_qpolynomial_get_constant_val(qp);
  print(isl_val_get_ctx(v), v);
  long vs = isl_val_get_num_si(v);
  //cout << "value = " << vs << endl;
  if (vals->size() == 0 ||
      vals->back() != vs) {
    vals->push_back(vs);
  }
  return isl_stat_ok;
}

int check_value_dd(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto ctx = buf.ctx;
  //isl_map* sched = buf.schedule.at(write_port);
  umap* sched = buf.schedule.at(write_port);
  assert(sched != nullptr);
  
  auto WritesAfterWrite = lex_lt(sched, sched);

  assert(WritesAfterWrite != nullptr);

  auto port0WritesInv =
    inv(buf.access_map.at(write_port));

  auto WriteThatProducesReadData =
    dot(buf.access_map.at(read_port), port0WritesInv);

  auto WritesBeforeRead =
    lex_gt(buf.schedule.at(read_port), buf.schedule.at(write_port));

  auto WritesAfterProduction = dot(WriteThatProducesReadData, WritesAfterWrite);

  auto WritesBtwn = its(WritesAfterProduction, WritesBeforeRead);

  auto c = card(WritesBtwn);
  
  //cout << "Cardinality..." << endl;
  //print(ctx, c);

  //cout << "Cardinality after simpification..." << endl;
  //print(ctx, isl_pw_qpolynomial_fold_coalesce(cpy(c)));
  //auto s = isl_pw_qpolynomial_n_piece(c);
  //cout << "s = " << s << endl;

  //assert(s <= 1);

  assert(false);
  return 0;
  //if (s == 0) {
    //return 0;
  //} else {
    //vector<int> nums;
    //void* user = (void*) &nums;
    //isl_pw_qpolynomial_foreach_lifted_piece(c, get_const, user);
    ////assert(nums.size() == 1);
    //return nums[0];
  //}
}

std::string ReplaceString(std::string subject, const std::string& search,
                          const std::string& replace) {
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != std::string::npos) {
         subject.replace(pos, search.length(), replace);
         pos += replace.length();
    }
    return subject;
}

string codegen_c_constraint(isl_constraint* c) {

  string resstr;
  stringstream ss(resstr);
  isl_space* s = get_space(c);
  if (isl_space_is_map(s)) {
    int ndims = isl_space_dim(s, isl_dim_in);
    for (int i = 0; i < ndims; i++) {
      //ss << str(isl_constraint_get_coefficient_val(c, isl_dim_in, i)) << "*" << "i_" << i << " + ";
      ss << str(isl_constraint_get_coefficient_val(c, isl_dim_in, i)) << "*" << str(isl_space_get_dim_id(s, isl_dim_out, i)) << " + ";
    }
    {
      int ndims = isl_space_dim(s, isl_dim_out);
      for (int i = 0; i < ndims; i++) {
        ss << str(isl_constraint_get_coefficient_val(c, isl_dim_in, i)) << "*" << str(isl_space_get_dim_id(s, isl_dim_out, i)) << " + ";
        //ss << str(isl_constraint_get_coefficient_val(c, isl_dim_out, i)) << "*" << "i_" << i << "_p" << " + ";
          //<< str(isl_space_get_dim_id(s, isl_dim_out, i)) << "_p" << " + ";
      }
    }
  } else {
    assert(isl_space_is_set(s));
    for (int i = 0; i < num_dims(s); i++) {
      //ss << str(isl_constraint_get_coefficient_val(c, isl_dim_set, i)) << "*" << "i_" << i << " + ";
      ss << str(isl_constraint_get_coefficient_val(c, isl_dim_set, i)) << "*" << str(isl_space_get_dim_id(s, isl_dim_set, i)) << " + ";
    }
  }

  ss << str(isl_constraint_get_constant_val(c)) << " ";
  if (isl_constraint_is_equality(c)) {
    ss << " == " << "0";
  } else {
    ss << " >= " << "0";
  }
  return ss.str();
}

isl_stat codegen_constraint(isl_constraint* c, void* user) {

  // TODO: Update to get DIV!!!
  vector<string>& code_holder = *((vector<string>*) user);
  string cc = codegen_c_constraint(c);
  code_holder.push_back(cc);
  return isl_stat_ok;
}

isl_stat bset_codegen_c(isl_basic_set* m, void* user) {
  isl_basic_set_foreach_constraint(m, codegen_constraint, user);
  return isl_stat_ok;
}

isl_stat bmap_codegen_c(isl_basic_map* m, void* user) {
  //isl_basic_set* s = domain(m);
  //vector<string>& code_holder = *((vector<string>*) user);
  //string code = "";
  //cout << "\t BASIC MAP" << endl;
  //code_holder.push_back(code);
  isl_basic_map_foreach_constraint(m, codegen_constraint, user);
  //isl_basic_set_foreach_constraint(s, codegen_constraint, user);

  return isl_stat_ok;
}

std::string codegen_c(isl_set* s) {
  //cout << "Generating code for set..." << endl;
  //auto ctx = isl_set_get_ctx(s);
  //print(ctx, s);

  //isl_printer *p;
  //p = isl_printer_to_str(ctx);

  //cout << "Set print string..." << endl;

  //p = isl_printer_set_output_format(p, ISL_FORMAT_C);
  
  //cout << "set output format..." << endl;
  
  //p = isl_printer_print_set(p, cpy(s));
  
  //cout << "Built printer..." << endl;

  //char* rs = isl_printer_get_str(p);
  //string r(rs);
  //isl_printer_free(p);
  //free(rs);

  //cout << "Done..." << endl;

  //return r;
  
  vector<string> code_holder;
  isl_set_foreach_basic_set(s, bset_codegen_c, &code_holder);
  return sep_list(code_holder, "(", ")", " && ");
}

isl_stat return_piece(isl_set* domain, isl_qpolynomial* val, void* user) {
  vector<pair<isl_set*, isl_qpolynomial*> >* v = (vector<pair<isl_set*, isl_qpolynomial*> >*) user;
  v->push_back({domain, val});
  return isl_stat_ok;
}

vector<pair<isl_set*, isl_qpolynomial*> >
get_pieces(isl_pw_qpolynomial* p) {
  vector<pair<isl_set*, isl_qpolynomial*> > terms;
  isl_pw_qpolynomial_foreach_piece(p, return_piece, &terms);
  return terms;
}

isl_stat get_pw_qpolynomial_fold(isl_pw_qpolynomial_fold* qp, void* user) {
  vector<isl_pw_qpolynomial_fold*>* v = (vector<isl_pw_qpolynomial_fold*>*) user;
  v->push_back(qp);

  return isl_stat_ok;
}

isl_stat get_pw_qpolynomial(isl_pw_qpolynomial* qp, void* user) {
  vector<isl_pw_qpolynomial*>* v = (vector<isl_pw_qpolynomial*>*) user;
  v->push_back(qp);

  return isl_stat_ok;
}

isl_stat return_pieces(isl_pw_qpolynomial* qp, void* user) {
  vector<pair<isl_set*, isl_qpolynomial*> >* v = (vector<pair<isl_set*, isl_qpolynomial*> >*) user;
  auto pieces = get_pieces(qp);
  for (auto p : pieces) {
    v->push_back(p);
  }

  return isl_stat_ok;
}

vector<pair<isl_set*, isl_qpolynomial*> >
get_pieces(isl_union_pw_qpolynomial* p) {
  vector<pair<isl_set*, isl_qpolynomial*> > terms;
  isl_union_pw_qpolynomial_foreach_pw_qpolynomial(p, return_pieces, &terms);
  return terms;
}

vector<isl_pw_qpolynomial_fold*>
get_polynomial_folds(isl_union_pw_qpolynomial_fold* p) {
  vector<isl_pw_qpolynomial_fold*> terms;
  isl_union_pw_qpolynomial_fold_foreach_pw_qpolynomial_fold(p, get_pw_qpolynomial_fold, &terms);
  return terms;
}

vector<isl_pw_qpolynomial*>
get_polynomials(isl_union_pw_qpolynomial* p) {
  vector<isl_pw_qpolynomial*> terms;
  isl_union_pw_qpolynomial_foreach_pw_qpolynomial(p, get_pw_qpolynomial, &terms);
  return terms;
}

isl_stat return_term(isl_term* t, void* user) {
  vector<isl_term*>* v = (vector<isl_term*>*) user;
  v->push_back(t);
  return isl_stat_ok;
}

vector<isl_term*> get_terms(isl_qpolynomial* qp) {
  vector<isl_term*> terms;
  isl_qpolynomial_foreach_term(qp, return_term, &terms);
  return terms;
}

std::string codegen_c(isl_term* t) {
  //cout << "\tterm dim = " << isl_term_dim(t, isl_dim_set) << endl;
  vector<string> exps;
  for (int i = 0; i < isl_term_dim(t, isl_dim_set); i++) {
    int exp = isl_term_get_exp(t, isl_dim_set, i);
    //if (exp != 0) {
    exps.push_back("pow(i_" + to_string(i) + ", " + to_string(exp) + ")");
    //cout << "Aff " << i << ": " << str(div) << endl;
    //} else {
      //exps.push_back("1");
    //}
  }

  //isl_aff* div = isl_term_get_div(t, 0);
  //cout << "Aff " << ": " << str(div) << endl;

  return "(" + str(isl_term_get_coefficient_val(t)) + "*" + sep_list(exps, "", "", "*") + ")";
}

std::string codegen_c(isl_qpolynomial* qp) {
  auto ctx = isl_qpolynomial_get_ctx(qp);
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_set_output_format(p, ISL_FORMAT_C);
  p = isl_printer_print_qpolynomial(p, cpy(qp));

  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  string r(rs);
  free(rs);
  return r;
}

isl_stat codegen_domain(isl_set* domain, isl_qpolynomial* qp, void* user) {
  vector<string>& code_holder = *((vector<string>*) user);
  code_holder.push_back(codegen_c(domain));
  return isl_stat_ok;
}

isl_stat codegen_value(isl_set* domain, isl_qpolynomial* qp, void* user) {
  vector<string>& code_holder = *((vector<string>*) user);
  code_holder.push_back(codegen_c(qp));
  return isl_stat_ok;
}

std::string codegen_c(isl_union_pw_qpolynomial* pqp) {

  auto ct = ctx(pqp);
  isl_printer *p;
  p = isl_printer_to_str(ct);
  p = isl_printer_set_output_format(p, ISL_FORMAT_C);
  p = isl_printer_print_union_pw_qpolynomial(p, cpy(pqp));

  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  string r(rs);
  free(rs);
  return r;
}

std::string codegen_c(isl_pw_qpolynomial* pqp) {

  auto ctx = isl_pw_qpolynomial_get_ctx(pqp);
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_set_output_format(p, ISL_FORMAT_C);
  p = isl_printer_print_pw_qpolynomial(p, cpy(pqp));

  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  string r(rs);
  free(rs);
  return r;

  //vector<string> code_holder;
  //isl_pw_qpolynomial_foreach_lifted_piece(p, codegen_domain, (void*)(&code_holder));

  //vector<string> val_holder;
  //isl_pw_qpolynomial_foreach_lifted_piece(p, codegen_value, (void*)(&val_holder));

  //assert(code_holder.size() == val_holder.size());
  //string res = "0";
  //for (size_t i = 0; i < code_holder.size(); i++) {
    //string cond = code_holder[i];
    //string val = val_holder[i];
    //res = "(" + cond + " ? " + val + " : " + res + ")";
  //}
  //return res;

  ////vector<string> code_holder;
  ////isl_set_foreach_basic_set(s, bset_codegen_c, &code_holder);
  ////return sep_list(code_holder, "(", ")", " && ");
}

isl_stat map_codegen_c(isl_map* m, void* user) {
  //cout << "Visiting map..." << endl;
  //print(isl_map_get_ctx(m), m);
  //cout << "Cardinality of this map..." << endl;
  auto cardm = card(m);
  //print(isl_map_get_ctx(m), cardm);

  vector<string>& code_holder = *((vector<string>*) user);
  isl_pw_qpolynomial_foreach_lifted_piece(cardm, codegen_domain, (void*)(&code_holder));
  
  //isl_map_foreach_basic_map(m, bmap_codegen_c, (void*)(&code_holder));
  return isl_stat_ok;
}

isl_stat umap_codegen_c_comp(isl_map* m, void* user) {
  map<string, string>& mc = *((map<string, string>*) user);
  mc[range_name(get_space(m))] = str(m);
  //for (auto r : mc) {
    //cout << "\t" << r.first << ": " << r.second << endl;
  //}

  vector<string> holder;
  map_codegen_c(m, &holder);
  mc[range_name(get_space(m))] = sep_list(holder, "(", ")", " || ");

  return isl_stat_ok;
}

map<string, string> umap_codegen_c(umap* const um) {
  map<string, string> cm;
  isl_union_map_foreach_map(um, umap_codegen_c_comp, (void*) (&cm));
  return cm;
}

isl_union_pw_qpolynomial* compute_dd(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto ctx = buf.ctx;
  isl_union_map* sched = buf.schedule.at(write_port);
  assert(sched != nullptr);
  
  auto WritesAfterWrite = lex_lt(sched, sched);

  assert(WritesAfterWrite != nullptr);

  auto port0WritesInv =
    inv(buf.access_map.at(write_port));


  assert(port0WritesInv != nullptr);

  auto WritesBeforeRead =
    lex_gt(buf.schedule.at(read_port), buf.schedule.at(write_port));

  assert(WritesBeforeRead != nullptr);
  //cout << "WritesBeforeRead = " << str(WritesBeforeRead) << endl;

  auto WriteThatProducesReadData =
    its(dot(buf.access_map.at(read_port), port0WritesInv), WritesBeforeRead);

  //cout << "----Writes that produces read data: " << endl;
  //cout << "\t" << str(WriteThatProducesReadData) << endl;

  auto time_to_event = inv(sched);
  auto LastWriteBeforeRead =
    dot(lexmax(dot(WriteThatProducesReadData, sched)), time_to_event);

  //cout << "----Last Write that produce read data before read: " << endl;
  //cout << "\t" << str(LastWriteBeforeRead) << endl;

  WriteThatProducesReadData = LastWriteBeforeRead;
  //auto lex_max_events =
    //dot(lexmax(dot(src_map, sched)), time_to_event);

  //cout << "----Writes before read: " << endl;
  //cout << "\t" << str(WritesBeforeRead) << endl;

  auto WritesAfterProduction = dot(WriteThatProducesReadData, WritesAfterWrite);

  //cout << "----Writes after production: " << endl;
  //cout << "\t" << str(WritesAfterProduction) << endl;

  auto WritesBtwn = its(WritesAfterProduction, WritesBeforeRead);

  //cout << "----WritesBtwn" << endl;
  //print(ctx, WritesBtwn);

  auto c = card(WritesBtwn);
  return c;
}

int compute_dd_lower_bound(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto c = compute_dd(buf, read_port, write_port);
  int tight;
  int* b = &tight;
  auto bound = isl_union_pw_qpolynomial_bound(c, isl_fold_min, b);
  auto folds  = get_polynomial_folds(bound);
  int bint;
  if (folds.size() == 0) {
    bint = 0;
  } else {
    assert(folds.size() == 1);
    bint = stoi(codegen_c(folds[0]));
  }
  return bint;
}

int compute_dd_bound(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto c = compute_dd(buf, read_port, write_port);
  int tight;
  int* b = &tight;
  auto bound = isl_union_pw_qpolynomial_bound(c, isl_fold_max, b);
  auto folds  = get_polynomial_folds(bound);
  int bint;
  if (folds.size() == 0) {
    bint = 0;
  } else {
    assert(folds.size() == 1);
    bint = stoi(codegen_c(folds[0]));
  }
  return bint;
}

string evaluate_dd(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto c = compute_dd(buf, read_port, write_port);

  //cout << "Computed dd" << endl;
  auto folds  = get_polynomials(c);
  if (folds.size() == 1) {
    return codegen_c(folds[0]);
  }
  return "0";
}

void generate_vivado_tcl(UBuffer& buf) {
  ofstream of(buf.name + "_hls.tcl");

  of << "open_project -reset " << buf.name << "_proj" << endl;
  of << "set_top " << buf.name << endl;
  of << "add_files -cflags \"-D__VIVADO_SYNTH__\" " + buf.name + ".cpp" << endl;
  of << "add_files -cflags \"-D__VIVADO_SYNTH__\" -tb tb_" + buf.name + ".cpp" << endl;
  of << "open_solution -reset \"solution1\"" << endl;
  of << "set_part {xc7k160tfbg484-2}" << endl;
  of << "list_core" << endl;
  of << "create_clock -period 10" << endl;
  of << "csynth_design" << endl;
  of << "export_design -rtl verilog" << endl;
  of << "cosim_design -rtl verilog" << endl;
  of << "exit" << endl;
  of.close();
}

void generate_memory_struct(std::ostream& out, const std::string& inpt, UBuffer& buf, const int maxdelay) {
  //cout << "Creating structs for " << buf.name << endl;
  out << "struct " + inpt + "_cache {" << endl;
  out << "\t// Capacity: " << maxdelay + 1 << endl;
  vector<int> read_delays{0};
  for (auto outpt : buf.get_out_ports()) {

    auto qpd = compute_dd_bound(buf, outpt, inpt);
    int lb = compute_dd_lower_bound(buf, outpt, inpt);

    //cout << "qpd = " << qpd << endl;
    //cout << "lb  = " << lb << endl;

    //assert(qpd == lb);

    //read_delays.push_back(qpd);
    for (int i = lb; i < qpd + 1; i++) {
      read_delays.push_back(i);
    }

    //out << "\t// DD expr = " << qpd << endl;
  }

  read_delays = sort_unique(read_delays);

  //out << "\t// Peek points" << endl;
  //for (auto dd : read_delays) {
    //out << "\t// DD = " << dd << endl;
  //}

  vector<int> break_points;
  if (read_delays.size() == 1) {
    break_points = {read_delays[0], read_delays[0]};
  } else {
    for (size_t i = 0; i < read_delays.size(); i++) {
      break_points.push_back(read_delays[i]);
      if (i < read_delays.size() - 1 && read_delays[i] != read_delays[i + 1] + 1) {
        break_points.push_back(read_delays[i] + 1);
      }
    }
  }
  read_delays = break_points;

  //out << "\t// Break points in parition" << endl;
  //for (auto dd : read_delays) {
    //out << "\t// BP = " << dd << endl;
  //}

  vector<string> partitions;
  vector<int> end_inds;
  if (read_delays.size() > 0) {
    for (size_t i = 0; i < read_delays.size(); i++) {
      int current = read_delays[i];
      int partition_capacity = -1;
      if (i < read_delays.size() - 1) {
        if (read_delays[i] != read_delays[i + 1]) {
          int next = read_delays[i + 1];
          partition_capacity = next - current;
          out << "\t// Parition [" << current << ", " << next << ") capacity = " << partition_capacity << endl;
          out << "\tfifo<" << buf.port_type_string() << ", " << partition_capacity << "> f" << i << ";" << endl;
          partitions.push_back("f" + to_string(i));
          end_inds.push_back(current + partition_capacity - 1);
        }
      } else {
        partition_capacity = 1;
        out << "\t// Parition [" << current << ", " << current << "] capacity = " << partition_capacity << endl;
        out << "\tfifo<" << buf.port_type_string() << ", " << partition_capacity << "> f" << i << ";" << endl;
        partitions.push_back("f" + to_string(i));
        end_inds.push_back(current + partition_capacity - 1);
      }
    }

    out << endl << endl;
    int nind = 0;
    for (auto p : partitions) {
      int dv = end_inds[nind];
      out << "\tinline " << buf.port_type_string() << " peek_" << to_string(dv) << "() {" << endl;
      out << "\t\treturn " << p << ".back();" << endl;
      out << "\t}" << endl << endl;
      nind++;
    }

    out << endl << endl;

    out << "\tinline " + buf.port_type_string() + " peek(const int offset) {" << endl;
    nind = 0;
    for (auto p : partitions) {
      int dv = end_inds[nind];
      out << "\t\tif (offset == " << dv << ") {" << endl;
      out << "\t\t\treturn " << p << ".back();" << endl;
      out << "\t\t}" << endl;
      nind++;
    }
    out << "\t\tcout << \"Error: Unsupported offset in " << buf.name << ": \" << offset << endl;" << endl;
    out << "\t\tassert(false);" << endl;
    out << "\t\treturn 0;\n" << endl;
    out << "\t}" << endl << endl;

    out << "\tinline void push(const " + buf.port_type_string() + " value) {" << endl;
    if (partitions.size() > 0) {
      for (size_t i = partitions.size() - 1; i >= 1; i--) {
        auto current = partitions[i];
        auto prior = partitions[i - 1];
        out << "\t\t" << current << ".push(" << prior << ".back());" << endl;
      }
      out << "\t\t" << partitions[0] << ".push(value);" << endl;
    }
    out << "\t}" << endl << endl;
  }
  out << "};" << endl << endl;
}

void generate_hls_code_internal(std::ostream& out, UBuffer& buf) {
  string inpt = buf.get_in_port();

  cout << "Computing maxdelay..." << endl;

  int maxdelay = 0;
  for (auto outpt : buf.get_out_ports()) {
    int r0 = compute_dd_bound(buf, outpt, inpt);
    if (r0 > maxdelay) {
      maxdelay = r0;
    }
  }
  out << "#include \"hw_classes.h\"" << endl << endl;
  for (auto inpt : buf.get_in_ports()) {
    generate_memory_struct(out, inpt, buf, maxdelay);
  }

  out << endl << endl;
  for (auto inpt : buf.get_in_ports()) {
    out << "inline void " << inpt << "_write(" << buf.port_type_string(inpt) + "& " << inpt << ", " << inpt + "_cache& " << inpt << "_delay) {" << endl;
    out << "\t" + inpt + "_delay.push(" + inpt + ");" << endl;
    out << "}" << endl << endl;
  }

  for (auto outpt : buf.get_out_ports()) {
    umap* src_map = nullptr;
    for (auto inpt : buf.get_in_ports()) {
      auto beforeAcc = lex_gt(buf.schedule.at(outpt), buf.schedule.at(inpt));
      if (src_map == nullptr) {
        src_map =
          ((its(dot(buf.access_map.at(outpt),
                    inv(buf.access_map.at(inpt))), beforeAcc)));
      } else {
        src_map =
          unn(src_map, ((its(dot(buf.access_map.at(outpt), inv(buf.access_map.at(inpt))), beforeAcc))));
      }
    }

    auto sched = buf.global_schedule();
    auto after = lex_gt(sched, sched);

    src_map = its(src_map, after);
    src_map = lexmax(src_map);

    auto time_to_event = inv(sched);

    auto lex_max_events =
      dot(lexmax(dot(src_map, sched)), time_to_event);
    print(ctx(src_map), lex_max_events);

    // Maybe: Get the schedule position, take the lexmax and then get it back?source map and then?? Creating more code?
    out << "// Select if: " << str(src_map) << endl;
    out << "inline " + buf.port_type_string() + " " + outpt + "_select(";
    size_t nargs = 0;
    for (auto pt : buf.get_in_ports()) {
      out << pt + "_cache& " << pt << "_delay" << endl;
      out << ", ";
      nargs++;
    }
    isl_space* s = get_space(buf.domain.at(outpt));
    assert(isl_space_is_set(s));
    vector<string> dim_decls;
    for (int i = 0; i < num_dims(s); i++) {
      dim_decls.push_back("int " + str(isl_space_get_dim_id(s, isl_dim_set, i)));
    }
    out << sep_list(dim_decls, "", "", ", ");

    out << ") {" << endl;


    // Body of select function
    if (buf.get_in_ports().size() == 1) {
      string delay_expr = evaluate_dd(buf, outpt, inpt);
      auto qpd = compute_dd(buf, outpt, inpt);
      auto pieces = get_pieces(qpd);
      out << "// Pieces..." << endl;
      auto out_domain = buf.domain.at(outpt);
      for (auto p : pieces) {
        out << "// " << str(p.first) << " -> " << str(p.second) << endl;
        out << "// \tis always true on iteration domain: " << isl_set_is_subset(cpy(out_domain), cpy(p.first)) << endl;
      }
      inpt = *(buf.get_in_ports().begin());

      if (pieces.size() == 0) {
        out << "\t" << buf.port_type_string() << " value_" << inpt << " = " << inpt << "_delay.peek_" << 0 << "()" << ";\n";
        out << "\treturn value_" + inpt + ";" << endl;
      } else if (pieces.size() == 1 &&
          isl_set_is_subset(cpy(out_domain), cpy(pieces[0].first))) {
        string dx = codegen_c(pieces[0].second);
        out << "\tint value_" << inpt << " = " << inpt << "_delay.peek_" << dx << "()" << ";\n";
        out << "\treturn value_" + inpt + ";" << endl;
      } else {
        out << "\tint value_" << inpt << " = " << inpt << "_delay.peek(" << "(" << delay_expr << ")" << ");\n";
        out << "\treturn value_" + inpt + ";" << endl;
      }
    } else {
      map<string, string> ms = umap_codegen_c(lex_max_events);
      for (auto e : ms) {
        out << "\tbool select_" << e.first << " = " << e.second << ";" << endl;
      }
      for (auto inpt : buf.get_in_ports()) {
        if (contains_key(inpt, ms)) {
          string delay_expr = evaluate_dd(buf, outpt, inpt);
          out << "\tint value_" << inpt << " = " << inpt << "_delay.peek(" << "(" << delay_expr << ")" << ");\n";
          out << "\tif (select_" + inpt + ") { return value_"+ inpt + "; }\n";
        }
      }
      out << "\tassert(false);\n\treturn 0;\n";
    }

    out << "}" << endl << endl;
  }

  out << "// Bundles..." << endl;
  for (auto b : buf.port_bundles) {
    out << "// " << b.first << endl;
    for (auto pt : b.second) {
      out << "//\t" << pt << endl;
    }
    string rep = pick(b.second);
    if (buf.is_out_pt(rep)) {
      out << "inline " << buf.bundle_type_string(b.first) << " " <<  buf.name << "_" << b.first << "_bundle_action(";
      vector<string> dim_decls;
      vector<string> dim_args;
      for (auto pt : buf.get_in_ports()) {
        dim_decls.push_back(pt + "_cache& " + pt + "_delay");
        dim_args.push_back(pt + "_delay");
      }
      auto outpt = *begin(b.second);
      isl_space* s = get_space(buf.domain.at(outpt));
      assert(isl_space_is_set(s));
      for (int i = 0; i < num_dims(s); i++) {
        dim_decls.push_back("int " + str(isl_space_get_dim_id(s, isl_dim_set, i)));
        dim_args.push_back(str(isl_space_get_dim_id(s, isl_dim_set, i)));
      }
      string param_string = sep_list(dim_decls, "", "", ", ");
      string arg_string = sep_list(dim_args, "", "", ", ");
      out << param_string;

      out << ") {" << endl;
      out << "\t" << buf.bundle_type_string(b.first) + " result;" << endl;
      int offset = 0;
      for (auto p : b.second) {
        out << "\t" + buf.port_type_string() + " " << p << "_res = " << p << "_select(" << arg_string << ");" << endl;
        out << "\tset_at<" << offset << ", " << buf.port_bundle_width(b.first) << ">(result, " << p << "_res" << ");" << endl;
        offset += buf.port_width(p);
      }
      out << "\treturn result;" << endl;
    } else {
      out << "inline void " + buf.name + "_" + b.first + "_bundle_action(";
      vector<string> dim_decls;
      dim_decls.push_back(buf.bundle_type_string(b.first) + "& /* width = " + to_string(buf.port_widths) + "*/" + b.first);
      vector<string> dim_args;
      dim_args.push_back(b.first);
      for (auto pt : buf.get_in_ports()) {
        if (elem(pt, b.second)) {
          dim_decls.push_back(pt + "_cache& " + pt + "_delay");
          dim_args.push_back(pt + "_delay");
        }
      }
      string param_string = sep_list(dim_decls, "", "", ", ");
      string arg_string = sep_list(dim_args, "", "", ", ");
      out << param_string;

      out << ") {" << endl;
      out << "\t" << rep << "_write(" << b.first << ", " << rep + "_delay);" << endl;

    }
    out << "}" << endl << endl;
  }
  out << endl << endl;

}
void generate_hls_code(std::ostream& out, UBuffer& buf) {
  string inpt = buf.get_in_port();

  cout << "Computing maxdelay..." << endl;

  int maxdelay = 0;
  for (auto outpt : buf.get_out_ports()) {
    int r0 = compute_dd_bound(buf, outpt, inpt);
    if (r0 > maxdelay) {
      maxdelay = r0;
    }
  }
  out << "#include \"hw_classes.h\"" << endl << endl;
  for (auto inpt : buf.get_in_ports()) {
    generate_memory_struct(out, inpt, buf, maxdelay);
  }

  out << endl << endl;
  for (auto inpt : buf.get_in_ports()) {
    out << "inline void " << inpt << "_write(" << "InputStream<int>& " << inpt << ", " << inpt + "_cache& " << inpt << "_delay) {" << endl;
    out << "\tint " + inpt + "_value = " + inpt + ".read(); " + inpt + "_delay.push(" + inpt + "_value);" << endl;
    out << "}" << endl << endl;
  }

  for (auto outpt : buf.get_out_ports()) {
    umap* src_map = nullptr;
    for (auto inpt : buf.get_in_ports()) {
      auto beforeAcc = lex_gt(buf.schedule.at(outpt), buf.schedule.at(inpt));
      if (src_map == nullptr) {
        src_map =
          ((its(dot(buf.access_map.at(outpt),
                    inv(buf.access_map.at(inpt))), beforeAcc)));
      } else {
        src_map =
          unn(src_map, ((its(dot(buf.access_map.at(outpt), inv(buf.access_map.at(inpt))), beforeAcc))));
      }
    }

    auto sched = buf.global_schedule();
    auto after = lex_gt(sched, sched);

    src_map = its(src_map, after);
    src_map = lexmax(src_map);

    auto time_to_event = inv(sched);

    auto lex_max_events =
      dot(lexmax(dot(src_map, sched)), time_to_event);
    print(ctx(src_map), lex_max_events);

    // Maybe: Get the schedule position, take the lexmax and then get it back?source map and then?? Creating more code?
    out << "// Select if: " << str(src_map) << endl;
    out << "inline int " + outpt + "_select(";
    size_t nargs = 0;
    for (auto pt : buf.get_in_ports()) {
      out << pt + "_cache& " << pt << "_delay" << endl;
      out << ", ";
      nargs++;
    }
    isl_space* s = get_space(buf.domain.at(outpt));
    assert(isl_space_is_set(s));
    vector<string> dim_decls;
    for (int i = 0; i < num_dims(s); i++) {
      dim_decls.push_back("int " + str(isl_space_get_dim_id(s, isl_dim_set, i)));
    }
    out << sep_list(dim_decls, "", "", ", ");

    out << ") {" << endl;


    // Body of select function
    if (buf.get_in_ports().size() == 1) {
      string delay_expr = evaluate_dd(buf, outpt, inpt);
      auto qpd = compute_dd(buf, outpt, inpt);
      auto pieces = get_pieces(qpd);
      out << "// Pieces..." << endl;
      auto out_domain = buf.domain.at(outpt);
      for (auto p : pieces) {
        out << "// " << str(p.first) << " -> " << str(p.second) << endl;
        out << "// \tis always true on iteration domain: " << isl_set_is_subset(cpy(out_domain), cpy(p.first)) << endl;
      }
      inpt = *(buf.get_in_ports().begin());

      if (pieces.size() == 0) {
        out << "\tint value_" << inpt << " = " << inpt << "_delay.peek_" << 0 << "()" << ";\n";
        out << "\treturn value_" + inpt + ";" << endl;
      } else if (pieces.size() == 1 &&
          isl_set_is_subset(cpy(out_domain), cpy(pieces[0].first))) {
        string dx = codegen_c(pieces[0].second);
        out << "\tint value_" << inpt << " = " << inpt << "_delay.peek_" << dx << "()" << ";\n";
        out << "\treturn value_" + inpt + ";" << endl;
      } else {
        out << "\tint value_" << inpt << " = " << inpt << "_delay.peek(" << "(" << delay_expr << ")" << ");\n";
        out << "\treturn value_" + inpt + ";" << endl;
      }
    } else {
      map<string, string> ms = umap_codegen_c(lex_max_events);
      for (auto e : ms) {
        out << "\tbool select_" << e.first << " = " << e.second << ";" << endl;
      }
      for (auto inpt : buf.get_in_ports()) {
        if (contains_key(inpt, ms)) {
          string delay_expr = evaluate_dd(buf, outpt, inpt);
          out << "\tint value_" << inpt << " = " << inpt << "_delay.peek(" << "(" << delay_expr << ")" << ");\n";
          out << "\tif (select_" + inpt + ") { return value_"+ inpt + "; }\n";
        }
      }
      out << "\tassert(false);\n\treturn 0;\n";
    }

    out << "}" << endl << endl;
  }

  out << "// Bundles..." << endl;
  for (auto b : buf.port_bundles) {
    out << "// " << b.first << endl;
    for (auto pt : b.second) {
      out << "//\t" << pt << endl;
    }
    string rep = pick(b.second);
    if (buf.is_out_pt(rep)) {
      out << "inline " << buf.bundle_type_string(b.first) << " " <<  buf.name << "_" << b.first << "_bundle_action(";
      vector<string> dim_decls;
      vector<string> dim_args;
      for (auto pt : buf.get_in_ports()) {
        dim_decls.push_back(pt + "_cache& " + pt + "_delay");
        dim_args.push_back(pt + "_delay");
      }
      auto outpt = *begin(b.second);
      isl_space* s = get_space(buf.domain.at(outpt));
      assert(isl_space_is_set(s));
      for (int i = 0; i < num_dims(s); i++) {
        dim_decls.push_back("int " + str(isl_space_get_dim_id(s, isl_dim_set, i)));
        dim_args.push_back(str(isl_space_get_dim_id(s, isl_dim_set, i)));
      }
      string param_string = sep_list(dim_decls, "", "", ", ");
      string arg_string = sep_list(dim_args, "", "", ", ");
      out << param_string;

      out << ") {" << endl;
      out << "\t" << buf.bundle_type_string(b.first) + " result;" << endl;
      int offset = 0;
      for (auto p : b.second) {
        out << "\tint " << p << "_res = " << p << "_select(" << arg_string << ");" << endl;
        out << "\tset_at<" << offset << ", " << buf.port_bundle_width(b.first) << ">(result, " << p << "_res" << ");" << endl;
        //out << "\tset_at<" << offset << ">(result, " << p << "_res" << ");" << endl;
        //out << "\tset_at<" << offset << ", " << buf.port_widths << ">(result, " << p << "_res" << ");" << endl;
        //out << "\tset_at(result, " << offset << ", " << p << "_res" << ");" << endl;
        offset += buf.port_width(p);
      }
      out << "\treturn result;" << endl;
    } else {
      out << "inline void " + buf.name + "_" + b.first + "_bundle_action(";
      vector<string> dim_decls;
      dim_decls.push_back("InputStream<int>& " + b.first);
      vector<string> dim_args;
      dim_args.push_back(b.first);
      for (auto pt : buf.get_in_ports()) {
        if (elem(pt, b.second)) {
          dim_decls.push_back(pt + "_cache& " + pt + "_delay");
          dim_args.push_back(pt + "_delay");
        }
      }
      string param_string = sep_list(dim_decls, "", "", ", ");
      string arg_string = sep_list(dim_args, "", "", ", ");
      out << param_string;

      out << ") {" << endl;
      out << "\t" << rep << "_write(" << b.first << ", " << rep + "_delay);" << endl;

    }
    out << "}" << endl << endl;
  }
  out << endl << endl;

}

void generate_hls_code(UBuffer& buf) {

  if (buf.port_bundles.size() == 0) {
    for (auto pt : buf.get_out_ports()) {
      buf.port_bundles[pt] = {pt};
    }
    for (auto pt : buf.get_in_ports()) {
      buf.port_bundles[pt] = {pt};
    }
  }

  cout << "Code generation..." << endl;
  ofstream os(buf.name + ".cpp");
  std::ostream& out = os;

  generate_hls_code(os, buf);

  // Generate driver function for this buffer.
  isl_union_map* res = buf.global_schedule();
  cout << "Map to schedule.." << endl;
  print(buf.ctx, res);

  string code_string = codegen_c(res);
  cout << "Code string..." << endl;
  cout << code_string << endl;

  code_string = "\t" + ReplaceString(code_string, "\n", "\n\t");
  string delay_list = "";
  size_t nd = 0;
  for (auto inpt : buf.get_in_ports()) {
    delay_list += inpt + "_delay";
    if (nd < buf.get_in_ports().size() - 1) {
      delay_list += ", ";
    }
    nd++;
  }

  // Replace fill-ins from polyhedral code generator with calls to memory actions 
  for (auto b : buf.port_bundles) {
    if (buf.is_out_pt(*(begin(b.second)))) {
    } else {
      regex re(b.first + "(.*);");
      string inpt = pick(b.second);
      code_string = regex_replace(code_string, re, inpt + "_write(" + b.first + ", " + inpt + "_delay);");
    }
  }
  for (auto b : buf.port_bundles) {
    if (buf.is_out_pt(*(begin(b.second)))) {
      regex re0(b.first + "\\((.*)\\);");
      code_string = regex_replace(code_string, re0, b.first + ".write(" + buf.name + "_" + b.first + "_bundle_action(" + delay_list + ", $1" + "));");
    } else {
    }
  }

  out << "void " << buf.name << "(";
  size_t nargs = 0;
  for (auto pt : buf.port_bundles) {
    out << buf.bundle_stream(pt.first);
    if (nargs < buf.port_bundles.size() - 1) {
      out << ", ";
    }
    nargs++;
  }
  out << ") {" << endl;
  for (auto inpt : buf.get_in_ports()) {
    out << "\t" + inpt + "_cache " + inpt + "_delay;\n\n";
  }
  out << code_string << endl;
  out << "}" << endl;

  cout << "Header file generation..." << endl;
  ofstream of(buf.name + ".h");
  of << "#pragma once\n\n" << endl;
  of << "#include \"hw_classes.h\"" << endl << endl;
  of << "void " << buf.name << "(";
  nargs = 0;
  for (auto pt : buf.port_bundles) {
    of << buf.bundle_stream(pt.first);
    if (nargs < buf.port_bundles.size() - 1) {
      of << ", ";
    }
    nargs++;
  }
  of << ");" << endl;

  generate_vivado_tcl(buf);
}

void synth_reduce_test() {

  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  // for i in 0, 4:
  //    m[i] = 0
  //    for j in 0 3:
  //      r = m[i]
  //      m[i] = r + 1
  //    out = m[i]
	isl_union_set *domain =
    isl_union_set_read_from_str(ctx, "{ init[i] : 0 <= i <= 4;  read0[i, j] : 0 <= i <= 4 and 0 <= j <= 3; update[i, j] : 0 <= i <= 4 and 0 <= j <= 3; out[i] : 0 <= i <= 4 }");
  auto naive_sched =
    its(isl_union_map_read_from_str(ctx, "{ init[i] -> [0, i, 0, 0, 0]; read0[i, j] -> [0, i, 1, j, 0]; update[i, j] -> [0, i, 1, j, 1]; out[i] -> [0, i, 2, 0, 0] }"), domain);
  cout << "Code for naive schedule..." << endl;
  cout << codegen_c(naive_sched) << endl;

  auto before = lex_lt(naive_sched, naive_sched);
  auto writes =
    its(isl_union_map_read_from_str(ctx, "{ init[i] -> M[i]; update[i, j] -> M[i] }"), domain);
  auto reads =
    its(isl_union_map_read_from_str(ctx, "{ read0[i, j] -> M[i]; out[i] -> M[i] }"), domain);
	isl_union_map *validity =
    its(dot(writes, inv(reads)), before);
  cout << "Validity" << endl;
  print(ctx, validity);
	isl_union_map *proximity =
    cpy(validity);

  isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);
  auto schedmap = its(isl_schedule_get_map(sched), domain);
  cout << "Reduce schedule..." << endl;
  print(ctx, schedmap);

  cout << "Code for reduce..." << endl;
  cout << codegen_c(schedmap) << endl;
  
  UBuffer buf;
  buf.name = "reduce";
  buf.ctx = ctx;

  buf.add_in_pt("init",
    "{ init[i] : 0 <= i <= 4}",
    "{ init[i] -> M[i] : 0 <= i <= 4 }",
    "{ init[i] -> [0, i, 0, 0, 0] : 0 <= i <= 4 }");

  buf.add_in_pt("update",
    "{ update[i, j] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ update[i, j] -> M[i] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ update[i, j] -> [0, i, 1, j, 1] : 0 <= i <= 4 and 0 <= j <= 3 }");

  buf.add_out_pt("read0",
    "{ read0[i, j] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ read0[i, j] -> M[i] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ read0[i, j] -> [0, i, 1, j, 0] : 0 <= i <= 4 and 0 <= j <= 3 }");
  
  buf.add_out_pt("out",
    "{ out[i] : 0 <= i <= 4 }",
    "{ out[i] -> M[i] : 0 <= i <= 4 }",
    "{ out[i] -> [0, i, 2, 0, 0] : 0 <= i <= 4 }");

  generate_hls_code(buf);

  int res = system("g++ -std=c++11 tb_reduce.cpp reduce.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
}

void synth_upsample_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();
  
  UBuffer buf;
  buf.name = "upsample";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[i] : 0 <= i < 10 }");
  buf.access_map["write"] =
    isl_map_read_from_str(ctx, "{ write[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[i] -> [i, 0, 0] : 0 <= i < 10 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read0"] =
    isl_set_read_from_str(ctx, "{ read0[i, j] : 0 <= i < 10 and 0 <= j < 2}");
  buf.access_map["read0"] =
    isl_map_read_from_str(ctx, "{ read0[i, j] -> M[i] : 0 <= i < 10 and 0 <= j < 2}");
  buf.schedule["read0"] =
    isl_union_map_read_from_str(ctx, "{ read0[i, j] -> [i, 1, j] : 0 <= i < 10 and 0 <= j < 2 }");
  buf.isIn["read0"] = false;

  generate_hls_code(buf);

  int res = system("g++ -std=c++11 tb_upsample.cpp upsample.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
}

void synth_sr_boundary_condition_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();
  
  UBuffer buf;
  buf.name = "shift_reg_bc";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[i] : 0 <= i < 10 }");
  buf.access_map["write"] =
    isl_map_read_from_str(ctx, "{ write[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[i] -> [i, 0] : 0 <= i < 10 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read0"] =
    isl_set_read_from_str(ctx, "{ read0[i] : 0 <= i < 10}");
  buf.access_map["read0"] =
    isl_map_read_from_str(ctx, "{ read0[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["read0"] =
    isl_union_map_read_from_str(ctx, "{ read0[i] -> [i + 2, 1] : 0 <= i < 10 }");
  buf.isIn["read0"] = false;

  // Read 1 through 8
  buf.domain["read1"] =
    isl_set_read_from_str(ctx, "{ read1[i] : 0 <= i < 10}");
  buf.access_map["read1"] =
    isl_map_read_from_str(ctx, "{ read1[i] -> M[i + 1] : 0 <= i < 9; read1[i] -> M[9] : 9 <= i < 10 }");
  buf.schedule["read1"] =
    isl_union_map_read_from_str(ctx, "{ read1[i] -> [i + 2, 1] : 0 <= i < 10 }");
  buf.isIn["read1"] = false;

  // Read 2 through 9
  buf.domain["read2"] =
    isl_set_read_from_str(ctx, "{ read2[i] : 0 <= i < 10 }");
  buf.access_map["read2"] =
    isl_map_read_from_str(ctx, "{ read2[i] -> M[i + 2] : 0 <= i < 8; read2[i] -> M[9] : 8 <= i < 10}");
  buf.schedule["read2"] =
    isl_union_map_read_from_str(ctx, "{ read2[i] -> [i + 2, 1] : 0 <= i < 10 }");
  buf.isIn["read2"] = false;
  
  generate_hls_code(buf);

  int res = system("g++ -std=c++11 tb_shift_reg_bc.cpp shift_reg_bc.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);

}

void synth_wire_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();
  
  UBuffer buf;
  buf.name = "shift_reg";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[i] : 0 <= i < 10 }");
  buf.access_map["write"] =
    isl_map_read_from_str(ctx, "{ write[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[i] -> [i, 0] : 0 <= i < 10 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read0"] =
    isl_set_read_from_str(ctx, "{ read0[i] : 0 <= i < 8}");
  buf.access_map["read0"] =
    isl_map_read_from_str(ctx, "{ read0[i] -> M[i] : 0 <= i < 8 }");
  buf.schedule["read0"] =
    isl_union_map_read_from_str(ctx, "{ read0[i] -> [i + 2, 1] : 0 <= i < 8 }");
  buf.isIn["read0"] = false;

  // Read 1 through 8
  buf.domain["read1"] =
    isl_set_read_from_str(ctx, "{ read1[i] : 0 <= i < 8}");
  buf.access_map["read1"] =
    isl_map_read_from_str(ctx, "{ read1[i] -> M[i + 1] : 0 <= i < 8 }");
  buf.schedule["read1"] =
    isl_union_map_read_from_str(ctx, "{ read1[i] -> [i + 2, 1] : 0 <= i < 8 }");
  buf.isIn["read1"] = false;

  // Read 2 through 9
  buf.domain["read2"] =
    isl_set_read_from_str(ctx, "{ read2[i] : 0 <= i < 8}");
  buf.access_map["read2"] =
    isl_map_read_from_str(ctx, "{ read2[i] -> M[i + 2] : 0 <= i < 8 }");
  buf.schedule["read2"] =
    isl_union_map_read_from_str(ctx, "{ read2[i] -> [i + 2, 1] : 0 <= i < 8 }");
  buf.isIn["read2"] = false;
  
  generate_hls_code(buf);

  int res = system("clang++ tb_shift_reg.cpp shift_reg.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
}

void synth_lb_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();
  
  UBuffer buf;
  buf.name = "linebuffer_3x3";
  buf.ctx = ctx;

  buf.add_in_pt("write0",
      "{ write0[i, j] : 0 <= i < 64 and 0 <= j < 64 }",
      "{ write0[i, j] -> M[j, i] : 0 <= i < 64 and 0 <= j < 64 }",
      "{ write0[i, j] -> [i, j, 0] : 0 <= i < 64 and 0 <= j < 64 }"
      );

  for (int r = 0; r < 3; r++) {
    for (int c = 0; c < 3; c++) {
      string rn = "read_" + to_string(r) + "_" + to_string(c);
      buf.add_out_pt(rn,
          "{ " + rn + "[i, j] : 0 <= i < 62 and 0 <= j < 62 }",
          "{ " + rn + "[i, j] -> M[j + " + to_string(c) + ", i + " + to_string(r)  + "] : 0 <= i < 62 and 0 <= j < 62 }",
          "{ " + rn + "[i, j] -> [i + 2, j + 2, 1] : 0 <= i < 62 and 0 <= j < 62 }"
          );

      //int r0 = check_value_dd(buf, rn, "write0");
      int r0 = compute_dd_bound(buf, rn, "write0");
      cout << "Delay (" << c << ", " << r << "): " << r0 << endl;
    }
  }

  generate_hls_code(buf);

  int res = system("clang++ tb_linebuffer_3x3.cpp linebuffer_3x3.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
}

void permute_test() {

  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();
  
  UBuffer buf;
  buf.name = "permute";
  buf.ctx = ctx;

  buf.add_in_pt("write0",
      "{ write0[i] : 0 <= i < 10 }",
      "{ write0[i] -> M[2*i] : 0 <= i < 10 }",
      "{ write0[i] -> [0, i] : 0 <= i < 10 }"
      );

  buf.add_in_pt("write1",
      "{ write1[i] : 0 <= i < 10 }",
      "{ write1[i] -> M[2*i + 1] : 0 <= i < 10 }",
      "{ write1[i] -> [0, i] : 0 <= i < 10 }"
      );

  buf.add_out_pt("read0",
      "{ read0[i] : 0 <= i < 10 }",
      "{ read0[i] -> M[2*i] : 0 <= i < 10 }",
      "{ read0[i] -> [1, i] : 0 <= i < 10 }"
      );

  buf.add_out_pt("read1",
      "{ read1[i] : 0 <= i < 10 }",
      "{ read1[i] -> M[2*i + 1] : 0 <= i < 10 }",
      "{ read1[i] -> [1, i] : 0 <= i < 10 }"
      );

  generate_hls_code(buf);
}

struct op {

  op* parent;
  bool is_loop;
  int start;
  int end_exclusive;
  std::string name;
  std::vector<op*> children;
  std::set<std::string> produces;
  std::set<pair<std::string, std::string> > produce_locs;

  std::set<std::string> consumes;
  std::set<pair<std::string, std::string> > consume_locs;
  std::string func;

  isl_ctx* ctx;

  op() : parent(nullptr), is_loop(false) {}

  void add_function(const std::string& n) {
    func = n;
  }

  op* add_nest(
      const std::string& x, int x_min, int x_max,
      const std::string& y, int y_min, int y_max) {
    auto xl = this->add_loop(x, x_min, x_max);
    auto yl = xl->add_loop(y, y_min, y_max);
    return yl;
  }

  op* add_nest(
      const std::string& x, int x_min, int x_max,
      const std::string& y, int y_min, int y_max,
      const std::string& c, int c_min, int c_max) {
    auto xl = this->add_loop(x, x_min, x_max);
    auto yl = xl->add_loop(y, y_min, y_max);
    auto cl = yl->add_loop(c, c_min, c_max);
    return cl;
  }

  op* add_loop(const std::string& name, const int l, const int u) {
    auto lp = new op();
    lp->name = name;
    lp->ctx = ctx;
    lp->parent = this ;
    lp->is_loop = true;
    lp->start = l;
    lp->end_exclusive = u;
    children.push_back(lp);

    return lp;
  }

  op* add_op(const std::string& name) {
    auto fo = new op();
    fo->name = name;
    fo->ctx = ctx;
    children.push_back(fo);
    return fo;
  }

  void add_load(const std::string& b, const std::string& loc) {
    assert(!is_loop);
    consumes.insert(b + "[" + loc + "]");
    consume_locs.insert({b, loc});
  }

  void add_store(const std::string& b, const std::string& loc) {
    assert(!is_loop);
    produces.insert(b + "[" + loc + "]");
    produce_locs.insert({b, loc});
  }

  void add_args(const std::vector<op*>& args) {
    for (auto a : args) {
      consumes.insert(a->name);
    }
  }
  
  void populate_iteration_domains(map<op*, vector<string> >& sched_vecs, vector<string>& active_vecs) {
    if (is_loop) {
      auto nds = active_vecs;
      nds.push_back(to_string(start) + " <= " + name + " < " + to_string(end_exclusive));
      for (auto c : children) {
        c->populate_iteration_domains(sched_vecs, nds);
      }
    } else {
      sched_vecs[this] = active_vecs;
      for (auto c : children) {
        c->populate_iteration_domains(sched_vecs, active_vecs);
      }
    }
  }

  void populate_schedule_vectors(map<op*, vector<string> >& sched_vecs, vector<string>& active_vecs) {
    //cout << "Populating schedule for " << name << ", active vecs: " << active_vecs.size() << endl;
    if (is_loop) {
      auto nds = active_vecs;
      //cout << "At loop: " << this->name << endl;
      assert(nds.size() > 0);

      nds.push_back(name);
      nds.push_back("0");
      for (auto c : children) {
        c->populate_schedule_vectors(sched_vecs, nds);
        nds[nds.size() - 1] = to_string(stoi(nds[nds.size() - 1]) + 1);
      }
    } else {
      sched_vecs[this] = active_vecs;
      for (auto c : children) {
        c->populate_schedule_vectors(sched_vecs, active_vecs);
      }
    }

    size_t max_len = 1;
    for (auto& v : sched_vecs) {
      auto& vecs = v.second;
      if (vecs.size() > max_len) {
        max_len = vecs.size();
      }
    }

    for (auto& v : sched_vecs) {
      size_t diff = max_len - v.second.size();
      for (size_t d = 0; d < diff; d++) {
        v.second.push_back("0");
      }
    }
  }

  void populate_iter_vars(map<op*, vector<string> >& varmap, vector<string>& active_vars) {
    if (is_loop) {
      auto nv = active_vars;
      nv.push_back(name);
      for (auto c : children) {
        c->populate_iter_vars(varmap, nv);
      }
    } else {
      varmap[this] = active_vars;
      for (auto c : children) {
        c->populate_iter_vars(varmap, active_vars);
      }
    }
  }

  set<op*> all_ops() {
    set<op*> ops{this};
    if (is_loop) {
      ops = {};
    }
    for (auto c : children) {
      for (auto op : c->all_ops()) {
        ops.insert(op);
      }
    }
    return ops;
  }


};

typedef op loop;

struct prog {

  std::string name;
  struct isl_ctx* ctx;
  op* root;
  set<string> ins;
  set<string> outs;
  map<string, int> buffer_port_widths;
  string compute_unit_file;

  loop* add_nest(
      const std::string& x, int x_min, int x_max,
      const std::string& y, int y_min, int y_max,
      const std::string& c, int c_min, int c_max) {
    return root->add_nest(x, x_min, x_max, y, y_min, y_max, c, c_min, c_max);
  }

  bool is_boundary(const std::string& name) {
    return elem(name, ins) || elem(name, outs);
  }

  void add_output(const std::string& name) {
    outs.insert(name);
  }

  void add_input(const std::string& name) {
    ins.insert(name);
  }

  prog() {
    ctx = isl_ctx_alloc();
    root = new op();
    root->name = "root";
    root->ctx = ctx;
    root->is_loop = true;
    root->start = 0;
    root->end_exclusive = 1;
  }

  ~prog() {
    isl_ctx_free(ctx);
  }

  vector<string> cache_args(op* op) {
    vector<string> args;
    for (auto cs : op->consume_locs) {
      args.push_back(cs.first);
    }
    for (auto cs : op->produce_locs) {
      args.push_back(cs.first);
    }
    return args;
  }

  set<op*> all_ops() { return root->all_ops(); }

  loop* add_loop(const std::string& name, const int l, const int u) {
    return root->add_loop(name, l, u);
  }

  string op_iter(op* const o) {
    vector<string> act;
    map<op*, vector<string> > ivars;
    root->populate_iter_vars(ivars, act);

    auto iters = map_find(o, ivars);
    auto vars = sep_list(iters, "[", "]", ", ");

    return o->name + vars;
  }

  isl_union_set* whole_iteration_domain() {
    map<op*, isl_set*> doms = domains();
    isl_union_set* whole_d = isl_union_set_read_from_str(ctx, "{ }");
    for (auto d : doms) {
      whole_d = unn(whole_d, to_uset(d.second));
    }
    return whole_d;
  }

  map<op*, vector<string> > iter_vars() {
    vector<string> act;
    map<op*, vector<string> > ivars;
    root->populate_iter_vars(ivars, act);
    return ivars;
  }

  map<op*, isl_set*> domains() {
    vector<string> sched_coeffs{"0"};
    vector<string> sched_domains;
    
    map<op*, vector<string> > idoms;
    vector<string> act;
    root->populate_iteration_domains(idoms, act);
    
    map<op*, vector<string> > ivars;
    root->populate_iter_vars(ivars, act);

    map<op*, isl_set*> doms;
    for (auto op : ivars) {
      //cout << "Getting op production:" << op.first->name << endl;
      auto iters = map_find(op.first, ivars);
      auto vars = sep_list(iters, "[", "]", ", ");

      auto dom = map_find(op.first, idoms);
      auto ds = sep_list(dom, "", "", " and ");

      doms[op.first] =
        isl_set_read_from_str(ctx, string("{ " + op.first->name + vars + " : " + ds + " }").c_str());

      //cout << "Got op..." << endl;
    }
    return doms;
  }

  map<op*, isl_map*> schedules() {
    map<op*, isl_map*> scheds;
    vector<string> sched_coeffs{"0"};
    vector<string> sched_domains;
    
    map<op*, vector<string> > idoms;
    vector<string> act;
    root->populate_iteration_domains(idoms, act);
    
    map<op*, vector<string> > vecs;
    vector<string> base{"0"};
    //cout << "Calling populate sched vectors" << endl;
    root->populate_schedule_vectors(vecs, base);

    map<op*, vector<string> > ivars;
    root->populate_iter_vars(ivars, act);

    for (auto op : vecs) {
      auto iters = map_find(op.first, ivars);
      auto vars = sep_list(iters, "[", "]", ", ");

      auto dom = map_find(op.first, idoms);
      auto doms = sep_list(dom, "", "", " and ");

      //cout << "\t" << op.first->name << vars << " -> " << sep_list(op.second, "[", "]", ", ") << " : " << doms << endl;
      scheds[op.first] =
        isl_map_read_from_str(ctx, string("{ " + op.first->name + vars + " -> " + sep_list(op.second, "[", "]", ", ") + " : " + doms + " }").c_str());

    }
    return scheds;
  }

  umap* unoptimized_schedule() {
    map<op*, isl_map*> prog_ops = schedules();
    umap* m = isl_union_map_read_from_str(ctx, "{ }");
    for (auto o : prog_ops) {
      m = unn(m, to_umap(o.second));
    }
    return m;
  }

  std::string optimized_loop_nest() {
    umap* opt_sched = optimized_codegen();
    auto domain = whole_iteration_domain();
    auto schedmap = its(opt_sched, domain);
    return codegen_c(schedmap);
  }

  umap* producer_map() {
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    auto m = isl_union_map_read_from_str(ctx, "{}");
    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = isl_union_map_read_from_str(ctx, "{}");
      for (auto p : op->produces) {
        umap* vmap =
          its(isl_union_map_read_from_str(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));
        pmap = unn(pmap, vmap);
      }
      m = unn(m, pmap);
    }
    return m;
  }

  umap* consumer_map() {
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    auto m = isl_union_map_read_from_str(ctx, "{}");
    for (auto op : ops) {
      //cout << op->name << endl;
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = isl_union_map_read_from_str(ctx, "{}");
      for (auto p : op->consumes) {
        //cout << "\tConsumes: " << p << endl;
        umap* vmap =
          its(isl_union_map_read_from_str(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));
        pmap = unn(pmap, vmap);
      }
      m = unn(m, pmap);
    }
    return m;
  }

  isl_schedule* optimized_schedule() {
    umap* naive_sched = unoptimized_schedule();
    auto before = lex_lt(naive_sched, naive_sched);
    auto domain = whole_iteration_domain();
    auto writes =
      its(producer_map(), domain);
    auto reads =
      its(consumer_map(), domain);

    //cout << "Producer map..." << str(writes) << endl;
    //cout << "Consumer map..." << str(reads) << endl;

    isl_union_map *validity =
      its(dot(writes, inv(reads)), before);
    print(ctx, validity);
    isl_union_map *proximity =
      cpy(validity);

    isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);
    return sched;
  }

  isl_union_map* optimized_codegen() {
    auto domain = whole_iteration_domain();
    
    isl_schedule* sched = optimized_schedule();
    auto schedmap = its(isl_schedule_get_map(sched), domain);
    //cout << "Optimized schedule..." << endl;
    //cout << codegen_c(schedmap);
    return schedmap;
  }

  void unoptimized_codegen() {
    umap* sched = unoptimized_schedule();
    cout << codegen_c(sched);
  }
};

void generate_op_code(map<string, UBuffer>& buffers, op* op) {
  assert(op->func != "");
  string name = op->func;

  ofstream out(name + "_wrapper.cpp");
  vector<string> decls;
  for (auto consumed : op->consume_locs) {
    decls.push_back(buffers.at(consumed.first).bundle_type_string(op->name) + "& " + consumed.first);
  }
  
  for (auto consumed : op->produce_locs) {
    if (contains_key(consumed.first, buffers)) {
      decls.push_back(buffers.at(consumed.first).bundle_type_string(op->name) + "& " + consumed.first);
    } 
  }
  out << "void " << name << sep_list(decls, "(", ")", ", ") << "{}";
  out.close();
}

map<string, UBuffer> build_buffers(prog& prg) {

  map<string, UBuffer> buffers;

  auto domains = prg.domains();
  umap* opt_sched = prg.optimized_codegen();

  int usuffix = 0;

  //cout << "Got ops and domains" << endl;

  for (auto op : prg.all_ops()) {

    for (auto produced : op->produce_locs) {
      string name = produced.first;

      if (!contains_key(name, buffers)) {
        UBuffer buf;
        buf.name = name;
        buf.ctx = prg.ctx;
        if (contains_key(name, prg.buffer_port_widths)) {
          buf.port_widths = map_find(name, prg.buffer_port_widths);
        }
        buffers[name] = buf;
      }

      UBuffer& buf = buffers.at(name);
      
      string pt_name = name + "_" + op->name + "_" + to_string(usuffix);
      buf.port_bundles[op->name].push_back(pt_name);

      assert(contains_key(op, domains));

      // Map from??
      isl_map* produced_here =
        its(isl_map_read_from_str(buf.ctx, string("{ " + prg.op_iter(op) + " -> " + name + "[" + produced.second + "]" + " }").c_str()), cpy(domains.at(op)));

      buf.add_in_pt(pt_name, domains.at(op), produced_here, its(opt_sched, domains.at(op)));

      usuffix++;
    }


    for (auto consumed : op->consume_locs) {
      string name = consumed.first;

      if (!contains_key(name, buffers)) {
        UBuffer buf;
        buf.name = name;
        buf.ctx = prg.ctx;
        if (contains_key(name, prg.buffer_port_widths)) {
          buf.port_widths = map_find(name, prg.buffer_port_widths);
        }
        buffers[name] = buf;
      }

      UBuffer& buf = buffers.at(name);

      string pt_name = name + "_" + op->name + "_" + to_string(usuffix);
      buf.port_bundles[op->name].push_back(pt_name);
      
      isl_map* consumed_here=
        its(isl_map_read_from_str(buf.ctx, string("{ " + prg.op_iter(op) + " -> " + name + "[" + consumed.second + "]" + " }").c_str()), cpy(domains.at(op)));

      assert(contains_key(op, domains));

      buf.add_out_pt(pt_name, domains.at(op), consumed_here, its(opt_sched, domains.at(op)));

      usuffix++;
    }

  }

  return buffers;
}

void generate_app_code(map<string, UBuffer>& buffers, prog& prg) {

  cout << "---- Generating customized re-use buffers" << endl;
  ofstream conv_out(prg.name + ".cpp");
  conv_out << "#include \"" << prg.compute_unit_file << "\"" << endl << endl;
  //conv_out << "#include \"accumulate_3.h\"" << endl << endl;
  vector<string> args;
  for (auto& b : buffers) {
    if (!prg.is_boundary(b.first)) {
      generate_hls_code_internal(conv_out, b.second);
    } else {
      args.push_back("HWStream<int>& " + b.first);
    }
  }

  auto domains = prg.domains();
  conv_out << endl << endl;
  conv_out << "// Operation logic" << endl;
  for (auto op : prg.all_ops()) {
    vector<string> args;
    set<string> done;
    vector<string> buf_srcs;
    for (auto p : op->consume_locs) {
      auto buf_name = p.first;
      if (!elem(buf_name, done)) {
        if (prg.is_boundary(buf_name)) {
          buf_srcs.push_back("HWStream<int>& " + buf_name);
        } else {
          UBuffer& b = buffers.at(buf_name);
          for (auto ib : b.get_in_ports()) {
            buf_srcs.push_back(ib + "_cache& " + ib);
          }
        }
        done.insert(buf_name);
      }
    }
    for (auto p : op->produce_locs) {
      auto buf_name = p.first;
      if (!elem(buf_name, done)) {
        if (prg.is_boundary(buf_name)) {
          buf_srcs.push_back("HWStream<int>& " + buf_name);
        } else {
          UBuffer& b = buffers.at(buf_name);
          for (auto ib : b.get_in_ports()) {
            buf_srcs.push_back(ib + "_cache& " + ib);
          }
        }
        done.insert(buf_name);
      }
    }

    auto s = get_space(domains.at(op));
    assert(isl_space_is_set(s));
    vector<string> dim_args;
    for (int i = 0; i < num_dims(s); i++) {
      buf_srcs.push_back("int " + str(isl_space_get_dim_id(s, isl_dim_set, i)));
      dim_args.push_back(str(isl_space_get_dim_id(s, isl_dim_set, i)));
    }
    conv_out << "inline void " << op->name << sep_list(buf_srcs, "(", ")", ", ") << " {" << endl;
    set<string> in_buffers;
    for (auto con : op->consume_locs) {
      in_buffers.insert(con.first);
    }
    cout << "# of input buffers: " << in_buffers.size() << endl;

    //assert(in_buffers.size() == 1);
    string res;
    if (in_buffers.size() > 0) {

      string in_buffer = pick(in_buffers);
      conv_out << "\t// Consume: " << in_buffer << endl;
      if (prg.is_boundary(in_buffer)) {
        conv_out << "\tauto " << in_buffer << "_val = " << in_buffer << ".read();" << endl;
      } else {
        string source_delay = pick(buffers.at(in_buffer).get_in_ports());
        conv_out << "\tauto " << in_buffer << "_val = " << in_buffer << "_" << op->name << "_bundle_action(" << source_delay << ", " << comma_list(dim_args) << ");" << endl;
      }

      res = in_buffer + "_val";
      if (op->func != "") {
        conv_out << "\t// Apply function: " << op->func << endl;
        conv_out << "\tauto compute_result = " << op->func << "(" << res << ");" << endl;
        res = "compute_result";
      }
    } else {
      assert(in_buffers.size() == 0);
      res = "";
      if (op->func != "") {
        conv_out << "\t// Apply function: " << op->func << endl;
        conv_out << "\tauto compute_result = " << op->func << "(" << res << ");" << endl;
        res = "compute_result";
      }
    }

    set<string> out_buffers;
    for (auto con : op->produce_locs) {
      out_buffers.insert(con.first);
    }
    assert(out_buffers.size() == 1);
    string out_buffer = pick(out_buffers);
    conv_out << "\t// Produce: " << out_buffer << endl;
    if (prg.is_boundary(out_buffer)) {
      conv_out << "\t" << out_buffer << ".write(" << res << ");" << endl;
    } else {
      assert(contains_key(out_buffer, buffers));
      cout << "Getting source buffer: " << buffers.at(out_buffer).name << endl;

      string source_delay = pick(buffers.at(out_buffer).get_in_ports());
      conv_out << "\t" << out_buffer << "_" << op->name << "_bundle_action(" << res << ", " << source_delay << ");" << endl;
    }

    conv_out << "}" << endl << endl;
  }

  conv_out << "// Driver function" << endl;
  string arg_buffers = sep_list(args, "(", ")", ", ");
  conv_out << "void " << prg.name << arg_buffers << " {" << endl;
  for (auto& b : buffers) {
    if (!prg.is_boundary(b.first)) {
      for (auto in : b.second.get_in_ports()) {
        //conv_out << "\t" << b.first << "_" << in << "_cache " << in << endl;
        conv_out << "\t" << in << "_cache " << in << ";" << endl;
      }
    }
  }

  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(isl_schedule_get_map(prg.optimized_schedule()), domain);
  string code_string = codegen_c(schedmap);
  code_string = "\t" + ReplaceString(code_string, "\n", "\n\t");
  for (auto op : prg.all_ops()) {
    regex re(op->name + "\\((.*)\\);");
    vector<string> args = prg.cache_args(op);
    set<string> done;
    vector<string> buf_srcs;
    for (auto p : op->consume_locs) {
      auto buf_name = p.first;
      if (!elem(buf_name, done)) {
        if (prg.is_boundary(buf_name)) {
          buf_srcs.push_back(buf_name);
        } else {
          UBuffer& b = buffers.at(buf_name);
          for (auto ib : b.get_in_ports()) {
            buf_srcs.push_back(ib);
          }
        }
        done.insert(buf_name);
      }
    }
    for (auto p : op->produce_locs) {
      auto buf_name = p.first;
      if (!elem(buf_name, done)) {
        if (prg.is_boundary(buf_name)) {
          buf_srcs.push_back(buf_name);
        } else {
          UBuffer& b = buffers.at(buf_name);
          for (auto ib : b.get_in_ports()) {
            buf_srcs.push_back(ib);
          }
        }
        done.insert(buf_name);
      }
    }
    string args_list = sep_list(buf_srcs, "", "", ", ");
    code_string = regex_replace(code_string, re, op->name + "(" + args_list + ", $1);");
  }

  cout << "Code string:" << endl;
  cout << code_string << endl;

  conv_out << code_string << endl;

  conv_out << "}" << endl;
  
  ofstream of(prg.name + ".h");
  of << "#pragma once\n\n" << endl;
  of << "#include \"hw_classes.h\"" << endl << endl;
  of << "void " << prg.name << arg_buffers << ";" << endl;
  of.close();
}

void conv_1d_bc_test() {
  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "conv_1d_bc";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;

  auto p = prg.add_loop("p", 0, 10);
  auto write = p->add_op("write");
  write->add_load("in", "p");
  write->add_store("M", "p");

  auto c = prg.add_loop("c", 0, 10);
  auto read0 = c->add_op("read0");
  read0->add_load("M", "min(c, 9)");
  read0->add_load("M", "min(c + 1, 9)");
  read0->add_load("M", "min(c + 2, 9)");
  read0->add_store("T", "c");

  auto compute = c->add_op("compute_out");
  compute->add_function("accumulate_3");
  compute->add_load("T", "c");
  compute->add_store("out", "c");

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();
  
  cout << "Program with optimized schedule..." << endl;
  umap* opt_sched = prg.optimized_codegen();
  
  auto buffers = build_buffers(prg);
  generate_app_code(buffers, prg);

  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

prog conv_1d() {
  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "conv_1d";
  prg.add_input("in");
  prg.add_output("out");
  //prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;

  auto p = prg.add_loop("p", 0, 10);
  auto write = p->add_op("get_input");
  write->add_load("in", "p");
  write->add_store("M", "p");

  auto c = prg.add_loop("c", 0, 10 - 2);
  //auto read0 = c->add_op("read0");
  //read0->add_load("M", "c");
  //read0->add_load("M", "c + 1");
  //read0->add_load("M", "c + 2");
  //read0->add_store("T", "c");

  auto compute = c->add_op("compute_output");
  compute->add_function("accumulate_3");
  //compute->add_load("T", "c");
  compute->add_load("M", "c");
  compute->add_load("M", "c + 1");
  compute->add_load("M", "c + 2");
  compute->add_store("out", "c");
  return prg;
}

void conv_1d_test() {
  prog prg = conv_1d();

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  cout << "Program with optimized schedule..." << endl;

  auto buffers = build_buffers(prg);
  generate_app_code(buffers, prg);

  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

isl_schedule_node* print_sched_tp(isl_schedule_node* n, void* user) {
  cout << "\tNode..." << endl;

  isl_schedule_node_type tp = isl_schedule_node_get_type(n);
  cout << "\t\ttp = " << tp << endl;
  if (tp == isl_schedule_node_sequence) {
    cout << "\t\t\tseq" << endl;
  } else if (tp == isl_schedule_node_band) {
    cout << "\t\t\tband" << endl;
    cout << "\t\t\t" << str(isl_schedule_node_band_get_space(n)) << endl;
    cout << "\t\t\t" << str(isl_schedule_node_band_get_partial_schedule_union_map(n)) << endl;

    int* ind = (int*) user;
    if (*ind == 1 || *ind == 2) {
      isl_multi_val* tile_factor = isl_multi_val_zero(isl_schedule_node_band_get_space(n));
      isl_val* tile_val = isl_val_int_from_si(isl_schedule_node_get_ctx(n), 2);
      isl_multi_val_set_val(tile_factor, 0, tile_val);

      isl_schedule_node_band_tile(n, tile_factor);
      //*seen = true;
      *ind = *ind + 1;
    } else {
      *ind = *ind + 1;
    }
  }
  return n;
}

void mmul_test() {
  prog prg;
  auto r = prg.add_loop("r", 0, 8);
  auto c = r->add_loop("c", 0, 8);
  auto rd = c->add_op("read");
  rd->add_store("T", "0");

  auto k = c->add_loop("k", 0, 8);
  auto accum = k->add_op("accum");
  accum->add_load("T", "0");
  accum->add_store("T", "0");

  auto write = c->add_op("write");
  write->add_load("T", "0");
  write->add_store("M", "r, c");


  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  cout << "Program with optimized schedule..." << endl;
  isl_schedule* opt_sched = prg.optimized_schedule();

  cout << "Optimized schedule" << endl;
  print(prg.ctx, opt_sched);

  cout << "Node types..." << endl;
  int ind = 0;
  opt_sched = isl_schedule_map_schedule_node_bottom_up(opt_sched, print_sched_tp, &ind);

  cout << "tile schedule..." << endl;
  print(prg.ctx, opt_sched);

  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(isl_schedule_get_map(opt_sched), domain);
  cout << "Optimized schedule..." << endl;
  cout << codegen_c(schedmap);
  assert(false);
}

void pyramid_test() {
  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "conv_1d_pyramid";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["T1"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;
  prg.buffer_port_widths["M1"] = 32;

  auto p = prg.add_loop("p", 0, 10);
  auto write = p->add_op("write");
  write->add_load("in", "p");
  write->add_store("M", "p");

  auto c = prg.add_loop("c", 0, 10 - 2);
  auto read0 = c->add_op("read0");
  read0->add_load("M", "c");
  read0->add_load("M", "c + 1");
  read0->add_load("M", "c + 2");
  read0->add_store("T", "c");

  auto compute = c->add_op("compute_out");
  compute->add_function("accumulate_3");
  compute->add_load("T", "c");
  compute->add_store("M1", "c");

  auto l = prg.add_loop("l", 0, 6);
  auto read1 = l->add_op("read1");
  read1->add_load("M1", "l");
  read1->add_load("M1", "l + 1");
  read1->add_load("M1", "l + 2");
  read1->add_store("T1", "l");

  auto compute1 = l->add_op("compute_out_1");
  compute1->add_function("accumulate_3");
  compute1->add_load("T1", "l");
  compute1->add_store("out", "l");

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();
  
  umap* opt_sched = prg.optimized_codegen();
  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(opt_sched, domain);
  cout << "Optimized schedule..." << endl;
  cout << codegen_c(schedmap);
  
  auto buffers = build_buffers(prg);
  generate_app_code(buffers, prg);

  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);
  
  res = system("./a.out");
  assert(res == 0);
}

void pyramid_2d_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_3x3_pyramid";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["T"] = 32*9;
  prg.buffer_port_widths["T1"] = 32*9;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;
  prg.buffer_port_widths["M1"] = 32;

  {
    auto pr = prg.add_loop("pr", 0, 10);
    auto pc = pr->add_loop("pc", 0, 10);
    auto write = pc->add_op("write");
    write->add_load("in", "pc, pr");
    write->add_store("I", "pc, pr");
  }

  {
    auto pr = prg.add_loop("lr", 0, 10 - 2);
    auto pc = pr->add_loop("lc", 0, 10 - 2);
    auto rd = pc->add_op("read_0");
    // Need to load 9 values
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        string c = "lc + " + to_string(i);
        string r = "lr + " + to_string(j);
        rd->add_load("I", c + ", " + r);
      }
    }
    rd->add_function("conv_3_3");
    rd->add_store("CI", "lc, lr");
  }

  {
    auto pr = prg.add_loop("dr", 0, 8 / 2);
    auto pc = pr->add_loop("dc", 0, 8 / 2);
    auto rd = pc->add_op("read_down");
    rd->add_load("CI", "2*dc, 2*dr");
    rd->add_store("D", "dc, dr");
  }

  {
    auto pr = prg.add_loop("sr", 0, 8 / 2 - 2);
    auto pc = pr->add_loop("sc", 0, 8 / 2 - 2);
    auto rd = pc->add_op("read_conv");
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        string c = "sc + " + to_string(i);
        string r = "sr + " + to_string(j);
        rd->add_load("D", c + ", " + r);
      }
    }
    rd->add_function("conv_3_3");
    rd->add_store("out", "sc, sr");
  }

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  umap* opt_sched = prg.optimized_codegen();
  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(opt_sched, domain);
  cout << "Optimized schedule..." << endl;
  cout << codegen_c(schedmap);
  
  auto buffers = build_buffers(prg);
  generate_app_code(buffers, prg);

  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  //assert(false);
}

void mobilenet_test() {

  prog prg;
  prg.compute_unit_file = "mobilenet_compute.h";
  prg.name = "mobilenet";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["dw_conv"] = 32;

  {
    auto read_in = prg.add_nest("px", 0, 14, "py", 0, 14, "pc", 0, 4);
    auto write = read_in->add_op("read_input_stream");
    write->add_load("in", "px, py, pc");
    write->add_store("I", "px, py, pc");
  }

  {
    // dw_conv
    auto set_dw = prg.add_nest("dwx", 0, 14, "dwy", 0, 14, "dwc", 0, 4);
    auto init_dw = set_dw->add_op("init_dw");
    init_dw->add_store("dw_conv", "dwx, dwy, dwz");
    init_dw->add_function("set_zero");
    // Set dw_conv to be
    auto update_dw = set_dw->add_nest("rx", 0, 3, "ry", 0, 3);
    auto rdw = update_dw->add_op("rdw");
    rdw->add_load("I", "dwx + rx, dwy + ry, dwc");
    rdw->add_load("dw_conv", "dwx, dwy, dwc");
    rdw->add_store("dw_conv", "dwx, dwy, dwc");
    rdw->add_function("fma");
  }

  {
    auto read_in = prg.add_nest("ox", 0, 14, "oy", 0, 14, "ok", 0, 4);
    auto write = read_in->add_op("write_max_out");
    write->add_load("dw_conv", "ox, oy, ok");
    write->add_function("max_zero");
    write->add_store("out", "ox, oy, ok");
  }

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  umap* opt_sched = prg.optimized_codegen();
  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(opt_sched, domain);
  cout << "Optimized schedule..." << endl;
  cout << codegen_c(schedmap);
  
  auto buffers = build_buffers(prg);
  generate_app_code(buffers, prg);

  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  assert(false);
}

void aha_talk_print_info() {
  prog prg = conv_1d();

  auto iter_domain = prg.whole_iteration_domain();

  cout << "#### Info for input program: " << prg.name << endl << endl;

  cout << "----- Statements in program..." << endl;
  for (auto op : prg.all_ops()) {
    cout << "\t" << op->name << endl;
  }
  cout << endl << endl;

  cout << "----- Iteration domains for statements..." << endl;
  cout << "\t" << str(iter_domain) << endl << endl;

  cout << "----- Schedules for statements..." << endl;
  cout << "\t" << str(prg.unoptimized_schedule()) << endl << endl;

  cout << "----- Values read by each statement" << endl;
  auto reads =
    its(prg.consumer_map(), iter_domain);
  cout << "\t" << str(reads) << endl << endl;
 
  cout << "----- Values written by each statement" << endl;
  auto writes =
    its(prg.producer_map(), iter_domain);
  cout << "\t" << str(writes) << endl << endl;

  cout << "----- Un-optimized loop nests for program..." << endl;
  prg.unoptimized_codegen();

  cout << "----- Optimized loop nests for program minimizing (write -> read) time..." << endl;
  cout << prg.optimized_loop_nest() << endl << endl;

  auto buffers = build_buffers(prg);
  cout << "----- Unified buffers..." << endl;
  cout << "# of buffers: " << buffers.size() << endl;
  for (auto& b : buffers) {
    auto& buf = b.second;
    cout << "\t--- " << (prg.is_boundary(b.second.name) ? "Off Chip Buffer: " : "On Chip Buffer: ") << b.second.name << endl;
    cout << "\t---- In ports" << endl;
    for (auto inpt : b.second.get_in_ports()) {
      cout << "\t\t" << inpt << endl;
      cout << "\t\t\tdom : " << str(buf.domain.at(inpt)) << endl;
      cout << "\t\t\tacc : " << str(buf.access_map.at(inpt)) << endl;
      cout << "\t\t\tsched: " << str(buf.schedule.at(inpt)) << endl;
    }
    cout << "\t---- Out ports" << endl;
    for (auto inpt : b.second.get_out_ports()) {
      cout << "\t\t" << inpt << endl;
      cout << "\t\t\tdom : " << str(buf.domain.at(inpt)) << endl;
      cout << "\t\t\tacc : " << str(buf.access_map.at(inpt)) << endl;
      cout << "\t\t\tsched: " << str(buf.schedule.at(inpt)) << endl;
    }

    cout << endl << endl;
  }

  //generate_app_code(buffers, prg);

}

int main(int argc, char** argv) {

  if (argc > 1) {
    assert(argc == 2);
    string cmd = argv[1];

    if (cmd == "aha_talk_print_info") {
      aha_talk_print_info();
      return 0;
    }

    cout << "Error: Unrecognized command: " << cmd << endl;
    assert(false);

  } if (argc == 1) {

    pyramid_2d_test();
    pyramid_test();

    synth_reduce_test();
    conv_1d_test();
    conv_1d_bc_test();

    synth_wire_test();
    synth_sr_boundary_condition_test();
    synth_lb_test();
    synth_upsample_test();

    //mobilenet_test();
    //mmul_test();

  }
  return 0;

}




