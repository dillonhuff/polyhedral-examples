#include "lake_target.h"

#include "utils.h"

void generate_lake_collateral(
    const std::string& mod_name,
    std::ostream& out,
    isl_aff* write_sched,
    isl_aff* write_addr,
    isl_set* write_dom,
    isl_aff* read_sched,
    isl_aff* read_addr,
    isl_set* read_dom) {

  int write_sched_start = to_int(const_coeff(write_sched));
  int read_sched_start = to_int(const_coeff(read_sched));

  int write_start = to_int(const_coeff(write_addr));
  int read_start = to_int(const_coeff(read_addr));

  vector<string> write_strides;
  for (int d = 0; d < num_in_dims(write_addr); d++) {
    write_strides.push_back("16'd" + str(get_coeff(write_addr, d)));
  }

  vector<string> read_strides;
  for (int d = 0; d < num_in_dims(read_addr); d++) {
    read_strides.push_back("16'd" + str(get_coeff(read_addr, d)));
  }

  vector<string> write_ranges;
  cout << "write dom: " << str(write_dom) << endl;
  for (int d = 0; d < num_dims(write_dom); d++) {
    auto pr = project_all_but(write_dom, d);
    cout << "projected: " << str(pr) << endl;
    int minp = to_int(lexminval(pr));
    assert(minp == 0);
    int maxp = to_int(lexmaxval(pr));
    cout << tab(1) << "maxp = " << maxp << endl;
    write_ranges.push_back("16'd" + str(maxp));
  }

  vector<string> read_ranges;
  for (int d = 0; d < num_dims(read_dom); d++) {
    auto pr = project_all_but(read_dom, d);
    int minp = to_int(lexminval(pr));
    assert(minp == 0);
    int maxp = to_int(lexmaxval(pr));
    //read_ranges.push_back("16'd" + str(maxp + 1));
    read_ranges.push_back("16'd" + str(maxp));
  }

  vector<string> outer_port_decls;
  //outer_port_decls.push_back("input logic [0:0] [15:0] addr_in");
  outer_port_decls.push_back("input logic [0:0] [15:0] chain_data_in");
  outer_port_decls.push_back("output logic [0:0] [15:0] chain_data_out");
  //pds.push_back("input logic chain_idx_input");
  //pds.push_back("input logic chain_idx_output");
  //pds.push_back("input logic chain_valid_in");
  outer_port_decls.push_back("output logic chain_valid_out");
  outer_port_decls.push_back("input logic clk");
  outer_port_decls.push_back("input logic [0:0] [15:0] data_in");
  outer_port_decls.push_back("output logic [0:0] [15:0] data_out");
  //pds.push_back("input logic enable_chain_input");
  //pds.push_back("input logic enable_chain_output");
  outer_port_decls.push_back("input logic flush");
  //pds.push_back("input logic ren_in");
  outer_port_decls.push_back("input logic rst_n");
  outer_port_decls.push_back("output logic valid_out");
  //pds.push_back("input logic wen_in");

  vector<string> external;
  for (auto s : outer_port_decls) {
    string name = split_at(s, " ").back();
    external.push_back(name);
  }

  vector<string> pds;
  //pds.push_back("input logic [0:0] [15:0] addr_in");
  pds.push_back("input logic [0:0] [15:0] chain_data_in");
  pds.push_back("output logic [0:0] [15:0] chain_data_out");
  pds.push_back("input logic chain_idx_input");
  pds.push_back("input logic chain_idx_output");
  pds.push_back("input logic chain_valid_in");
  pds.push_back("output logic chain_valid_out");
  pds.push_back("input logic clk");
  pds.push_back("input logic clk_en");
  pds.push_back("input logic [7:0] config_addr_in");
  pds.push_back("input logic [31:0] config_data_in");
  pds.push_back("output logic [0:0] [31:0] config_data_out");
  pds.push_back("input logic config_en");
  pds.push_back("input logic config_read");
  pds.push_back("input logic config_write");
  pds.push_back("input logic [0:0] [15:0] data_in");
  pds.push_back("output logic [0:0] [15:0] data_out");
  pds.push_back("input logic enable_chain_input");
  pds.push_back("input logic enable_chain_output");
  pds.push_back("input logic flush");
  pds.push_back("input logic [1:0] mode");
  pds.push_back("input logic ren_in");
  pds.push_back("input logic rst_n");

  pds.push_back("input logic [15:0] strg_ub_sram_read_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides");
  pds.push_back("input logic [3:0] strg_ub_sram_read_loops_dimensionality");

  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_loops_ranges");

  pds.push_back("input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides");

  pds.push_back("input logic [15:0] strg_ub_sram_write_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides");
  pds.push_back("input logic [3:0] strg_ub_sram_write_loops_dimensionality");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_loops_ranges");
  pds.push_back("input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides");

  pds.push_back("input logic tile_en");

  pds.push_back("output logic valid_out");

  pds.push_back("input logic wen_in");

  out << "module " << mod_name << "(" << comma_list(outer_port_decls) << ");" << endl;

  vector<string> decls;
  for (auto s : pds) {
    vector<string> f = split_at(s, " ");
    assert(f.size() > 0);
    string name = f.back();
    if (!elem(name, external)) {
      vector<string> decl = f;
      reverse(decl);
      decl.pop_back();
      decl.push_back("wire");
      reverse(decl);
      out << tab(1) << sep_list(decl, "", "", " ") << ";" << endl;
      string default_val = "0";
      if (name == "clk_en" || name == "tile_en") {
        default_val = "1";
      } else if (name == "strg_ub_sram_read_addr_gen_starting_addr") {
        default_val = str(read_start);
      } else if (name == "strg_ub_sram_read_addr_gen_strides") {
        default_val = sep_list(read_strides, "{", "}", ", "); //"{16'd0, 16'd0, 16'0, 16'd0, 16'd0, 16'd0}";
      } else if (name == "strg_ub_sram_read_loops_dimensionality") {
        default_val = str(num_dims(read_dom));
      } else if (name == "strg_ub_sram_read_loops_ranges") {
        default_val = sep_list(read_ranges, "{", "}", ", "); //"{16'd10, 16'd10, 16'd10, 16'd10, 16'd10, 16'd10}";
      } else if (name == "strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr") {
        default_val = str(read_sched_start);
      } else if (name == "strg_ub_sram_read_sched_gen_sched_addr_gen_strides") {
        default_val = "{16'd1, 16'd1, 16'd1, 16'd100, 16'd10, 16'd1}";
      } else if (name == "strg_ub_sram_write_addr_gen_starting_addr") {
        default_val = str(write_start);
      } else if (name == "strg_ub_sram_write_addr_gen_strides") {
        default_val = sep_list(write_strides, "{", "}", ", ");
        // "{16'd0, 16'd0, 16'0, 16'd0, 16'd0, 16'd0}";
      } else if (name == "strg_ub_sram_write_loops_dimensionality") {
        default_val = str(num_dims(write_dom));
      } else if (name == "strg_ub_sram_write_loops_ranges") {
        //default_val = "{16'd10, 16'd10, 16'd10, 16'd10, 16'd10, 16'd10}";
        default_val = sep_list(write_ranges, "{", "}", ", ");
      } else if (name == "strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr") {
        default_val = str(write_sched_start);
      } else if (name == "strg_ub_sram_write_sched_gen_sched_addr_gen_strides") {
        default_val = "{16'd1, 16'd1, 16'd1, 16'd100, 16'd10, 16'd1}";
        //pds.push_back("input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr");
        //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides");

        //pds.push_back("input logic [15:0] strg_ub_sram_write_addr_gen_starting_addr");
        //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides");
        //pds.push_back("input logic [3:0] strg_ub_sram_write_loops_dimensionality");
        //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_loops_ranges");
        //pds.push_back("input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr");
        //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides");

      }
      out << tab(1) << "assign " << name << " = " << default_val << ";" << endl;
    }

    decls.push_back("." + f.back() + parens(f.back()));
  }
  out << endl;
  out << tab(1) << "LakeTop lake(" << comma_list(decls) << ");" << endl;
  out << endl;

  out << "endmodule" << endl;
}

void generate_lake_collateral_delay(const std::string& name, std::ostream& out, const int depth) {
  const int TILE_READ_LATENCY = 1;

  assert(depth >= TILE_READ_LATENCY);
  isl_ctx* ctx = isl_ctx_alloc();
  int max_depth = (1 << 16) - 1;
  cout << "max depth = " << max_depth << endl;
  assert(max_depth >= 0);


  isl_aff* write_sched = rdaff(ctx, "{ wr[a] -> [(a)] }");
  isl_aff* write_addr = rdaff(ctx, "{ wr[a] -> [(a + " + str(depth - TILE_READ_LATENCY) + ")] }");
  isl_set* write_dom = isl_set_read_from_str(ctx, ("{ wr[a] : 0 <= a <= " + str(max_depth) + " }").c_str());

  isl_aff* read_sched = rdaff(ctx, ("{ rd[a] -> [(a)] }"));
  isl_aff* read_addr = rdaff(ctx, ("{ rd[a] -> [(a)] }"));
  //isl_aff* read_addr = rdaff(ctx, ("{ rd[a] -> [(a - " + str(TILE_READ_LATENCY) + ")] }").c_str());
  isl_set* read_dom = isl_set_read_from_str(ctx, ("{ rd[a] : 0 <= a <= " + str(max_depth) + " }").c_str());

  generate_lake_collateral(name, out, write_sched, write_addr, write_dom, read_sched, read_addr, read_dom);

  isl_ctx_free(ctx);
}

void generate_lake_collateral_delay_wdata_wrapped(const std::string& name, std::ostream& out, const int depth) {

  generate_lake_collateral_delay(name + "_inner", out, depth);

  vector<string> outer_port_decls;
  outer_port_decls.push_back("input logic [0:0] [15:0] chain_data_in");
  outer_port_decls.push_back("output logic [0:0] [15:0] chain_data_out");
  outer_port_decls.push_back("output logic chain_valid_out");
  outer_port_decls.push_back("input logic clk");
  outer_port_decls.push_back("input logic flush");
  outer_port_decls.push_back("input logic rst_n");
  outer_port_decls.push_back("output logic valid_out");
  outer_port_decls.push_back("output rdata");
  outer_port_decls.push_back("output wdata");

  vector<string> external;
  for (auto s : outer_port_decls) {
    string name = split_at(s, " ").back();
    external.push_back(name);
  }

  vector<string> pds;
  //pds.push_back("input logic [0:0] [15:0] addr_in");
  pds.push_back("input logic [0:0] [15:0] chain_data_in");
  pds.push_back("output logic [0:0] [15:0] chain_data_out");
  pds.push_back("input logic chain_idx_input");
  pds.push_back("input logic chain_idx_output");
  pds.push_back("input logic chain_valid_in");
  pds.push_back("output logic chain_valid_out");
  pds.push_back("input logic clk");
  pds.push_back("input logic clk_en");
  pds.push_back("input logic [7:0] config_addr_in");
  pds.push_back("input logic [31:0] config_data_in");
  pds.push_back("output logic [0:0] [31:0] config_data_out");
  pds.push_back("input logic config_en");
  pds.push_back("input logic config_read");
  pds.push_back("input logic config_write");
  pds.push_back("input logic [0:0] [15:0] data_in");
  pds.push_back("output logic [0:0] [15:0] data_out");
  pds.push_back("input logic enable_chain_input");
  pds.push_back("input logic enable_chain_output");
  pds.push_back("input logic flush");
  pds.push_back("input logic [1:0] mode");
  pds.push_back("input logic ren_in");
  pds.push_back("input logic rst_n");

  pds.push_back("input logic [15:0] strg_ub_sram_read_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides");
  pds.push_back("input logic [3:0] strg_ub_sram_read_loops_dimensionality");

  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_loops_ranges");

  pds.push_back("input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides");

  pds.push_back("input logic [15:0] strg_ub_sram_write_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides");
  pds.push_back("input logic [3:0] strg_ub_sram_write_loops_dimensionality");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_loops_ranges");
  pds.push_back("input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides");

  pds.push_back("input logic tile_en");

  pds.push_back("output logic valid_out");

  pds.push_back("input logic wen_in");
  pds.push_back("input logic wen_in");

  out << "module " << name << "(" << comma_list(outer_port_decls) << ");" << endl;

  vector<string> decls;
  for (auto s : outer_port_decls) {
    vector<string> f = split_at(s, " ");
    assert(f.size() > 0);
    string name = f.back();
    //if (!elem(name, external)) {
      //vector<string> decl = f;
      //reverse(decl);
      //decl.pop_back();
      //decl.push_back("wire");
      //reverse(decl);
      //out << tab(1) << sep_list(decl, "", "", " ") << ";" << endl;
      //string default_val = "0";

    //}

    if (name == "wdata") {
      decls.push_back(".data_in" + parens(f.back()));
    } else if (name == "rdata") {
      decls.push_back(".data_out" + parens(f.back()));
    } else {
      decls.push_back("." + f.back() + parens(f.back()));
    }
  }
  out << endl;
  out << tab(1) << name << "_inner lake(" << comma_list(decls) << ");" << endl;
  out << endl;

  out << "endmodule" << endl;
}
