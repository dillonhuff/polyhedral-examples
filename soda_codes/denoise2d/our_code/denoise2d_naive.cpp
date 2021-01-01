#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: denoise2d_naive_compute_units.h
#include "denoise2d_naive_compute_units.h"

#include "hw_classes.h"

struct diff_d_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
  hw_uint<32>  RAM[32][32];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct diff_d_cache {
  // # of banks: 1
  diff_d_all_inputs_to_all_outputs_cache diff_d_all_inputs_to_all_outputs;
};



inline void diff_d_diff_d_update_0_write0_write(hw_uint<32> & diff_d_diff_d_update_0_write0, diff_d_cache& diff_d, int d0, int d1, int dynamic_address) {
  diff_d.diff_d_all_inputs_to_all_outputs.write(diff_d_diff_d_update_0_write0, d0 - -1, d1 - -1);
}

inline hw_uint<32>  g_rd0_select(diff_d_cache& diff_d, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd0 read pattern: { g_update_0[d0, d1] -> diff_d[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_diff_d_diff_d_update_0_write0 = diff_d.diff_d_all_inputs_to_all_outputs.read(d0 - -1, d1 - -1);
  return value_diff_d_diff_d_update_0_write0;
  return 0;
}

// # of bundles = 2
// diff_d_update_0_write
//	diff_d_diff_d_update_0_write0
inline void diff_d_diff_d_update_0_write_bundle_write(hw_uint<32>& diff_d_update_0_write, diff_d_cache& diff_d, int d0, int d1, int dynamic_address) {
	hw_uint<32>  diff_d_diff_d_update_0_write0_res = diff_d_update_0_write.extract<0, 31>();
	diff_d_diff_d_update_0_write0_write(diff_d_diff_d_update_0_write0_res, diff_d, d0, d1, dynamic_address);
}

// g_update_0_read
//	g_rd0
inline hw_uint<32> diff_d_g_update_0_read_bundle_read(diff_d_cache& diff_d, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // g_rd0

	hw_uint<32> result;
	hw_uint<32>  g_rd0_res = g_rd0_select(diff_d, d0, d1, dynamic_address);
	set_at<0, 32>(result, g_rd0_res);
	return result;
}

#include "hw_classes.h"

struct diff_l_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
  hw_uint<32>  RAM[32][32];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct diff_l_cache {
  // # of banks: 1
  diff_l_all_inputs_to_all_outputs_cache diff_l_all_inputs_to_all_outputs;
};



inline void diff_l_diff_l_update_0_write0_write(hw_uint<32> & diff_l_diff_l_update_0_write0, diff_l_cache& diff_l, int d0, int d1, int dynamic_address) {
  diff_l.diff_l_all_inputs_to_all_outputs.write(diff_l_diff_l_update_0_write0, d0 - -1, d1 - -1);
}

inline hw_uint<32>  g_rd0_select(diff_l_cache& diff_l, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd0 read pattern: { g_update_0[d0, d1] -> diff_l[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_diff_l_diff_l_update_0_write0 = diff_l.diff_l_all_inputs_to_all_outputs.read(d0 - -1, d1 - -1);
  return value_diff_l_diff_l_update_0_write0;
  return 0;
}

// # of bundles = 2
// diff_l_update_0_write
//	diff_l_diff_l_update_0_write0
inline void diff_l_diff_l_update_0_write_bundle_write(hw_uint<32>& diff_l_update_0_write, diff_l_cache& diff_l, int d0, int d1, int dynamic_address) {
	hw_uint<32>  diff_l_diff_l_update_0_write0_res = diff_l_update_0_write.extract<0, 31>();
	diff_l_diff_l_update_0_write0_write(diff_l_diff_l_update_0_write0_res, diff_l, d0, d1, dynamic_address);
}

// g_update_0_read
//	g_rd0
inline hw_uint<32> diff_l_g_update_0_read_bundle_read(diff_l_cache& diff_l, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // g_rd0

	hw_uint<32> result;
	hw_uint<32>  g_rd0_res = g_rd0_select(diff_l, d0, d1, dynamic_address);
	set_at<0, 32>(result, g_rd0_res);
	return result;
}

#include "hw_classes.h"

struct diff_qwe_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
  hw_uint<32>  RAM[32][32];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct diff_qwe_cache {
  // # of banks: 1
  diff_qwe_all_inputs_to_all_outputs_cache diff_qwe_all_inputs_to_all_outputs;
};



inline void diff_qwe_diff_qwe_update_0_write0_write(hw_uint<32> & diff_qwe_diff_qwe_update_0_write0, diff_qwe_cache& diff_qwe, int d0, int d1, int dynamic_address) {
  diff_qwe.diff_qwe_all_inputs_to_all_outputs.write(diff_qwe_diff_qwe_update_0_write0, d0 - -1, d1 - -1);
}

inline hw_uint<32>  g_rd0_select(diff_qwe_cache& diff_qwe, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd0 read pattern: { g_update_0[d0, d1] -> diff_qwe[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_diff_qwe_diff_qwe_update_0_write0 = diff_qwe.diff_qwe_all_inputs_to_all_outputs.read(d0 - -1, d1 - -1);
  return value_diff_qwe_diff_qwe_update_0_write0;
  return 0;
}

// # of bundles = 2
// diff_qwe_update_0_write
//	diff_qwe_diff_qwe_update_0_write0
inline void diff_qwe_diff_qwe_update_0_write_bundle_write(hw_uint<32>& diff_qwe_update_0_write, diff_qwe_cache& diff_qwe, int d0, int d1, int dynamic_address) {
	hw_uint<32>  diff_qwe_diff_qwe_update_0_write0_res = diff_qwe_update_0_write.extract<0, 31>();
	diff_qwe_diff_qwe_update_0_write0_write(diff_qwe_diff_qwe_update_0_write0_res, diff_qwe, d0, d1, dynamic_address);
}

// g_update_0_read
//	g_rd0
inline hw_uint<32> diff_qwe_g_update_0_read_bundle_read(diff_qwe_cache& diff_qwe, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // g_rd0

	hw_uint<32> result;
	hw_uint<32>  g_rd0_res = g_rd0_select(diff_qwe, d0, d1, dynamic_address);
	set_at<0, 32>(result, g_rd0_res);
	return result;
}

#include "hw_classes.h"

struct diff_r_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
  hw_uint<32>  RAM[32][32];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct diff_r_cache {
  // # of banks: 1
  diff_r_all_inputs_to_all_outputs_cache diff_r_all_inputs_to_all_outputs;
};



inline void diff_r_diff_r_update_0_write0_write(hw_uint<32> & diff_r_diff_r_update_0_write0, diff_r_cache& diff_r, int d0, int d1, int dynamic_address) {
  diff_r.diff_r_all_inputs_to_all_outputs.write(diff_r_diff_r_update_0_write0, d0 - -1, d1 - -1);
}

inline hw_uint<32>  g_rd0_select(diff_r_cache& diff_r, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd0 read pattern: { g_update_0[d0, d1] -> diff_r[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_diff_r_diff_r_update_0_write0 = diff_r.diff_r_all_inputs_to_all_outputs.read(d0 - -1, d1 - -1);
  return value_diff_r_diff_r_update_0_write0;
  return 0;
}

// # of bundles = 2
// diff_r_update_0_write
//	diff_r_diff_r_update_0_write0
inline void diff_r_diff_r_update_0_write_bundle_write(hw_uint<32>& diff_r_update_0_write, diff_r_cache& diff_r, int d0, int d1, int dynamic_address) {
	hw_uint<32>  diff_r_diff_r_update_0_write0_res = diff_r_update_0_write.extract<0, 31>();
	diff_r_diff_r_update_0_write0_write(diff_r_diff_r_update_0_write0_res, diff_r, d0, d1, dynamic_address);
}

// g_update_0_read
//	g_rd0
inline hw_uint<32> diff_r_g_update_0_read_bundle_read(diff_r_cache& diff_r, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // g_rd0

	hw_uint<32> result;
	hw_uint<32>  g_rd0_res = g_rd0_select(diff_r, d0, d1, dynamic_address);
	set_at<0, 32>(result, g_rd0_res);
	return result;
}

#include "hw_classes.h"

struct f_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 29], [0, 29]}
  hw_uint<32>  RAM[30][30];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct f_cache {
  // # of banks: 1
  f_all_inputs_to_all_outputs_cache f_all_inputs_to_all_outputs;
};



inline void f_f_update_0_write0_write(hw_uint<32> & f_f_update_0_write0, f_cache& f, int d0, int d1, int dynamic_address) {
  f.f_all_inputs_to_all_outputs.write(f_f_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<32>  denoise2d_rd0_select(f_cache& f, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd0 read pattern: { denoise2d_update_0[d0, d1] -> f[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_f_f_update_0_write0 = f.f_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_f_f_update_0_write0;
  return 0;
}

inline hw_uint<32>  r0_rd0_select(f_cache& f, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // r0_rd0 read pattern: { r0_update_0[d0, d1] -> f[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_f_f_update_0_write0 = f.f_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_f_f_update_0_write0;
  return 0;
}

// # of bundles = 3
// denoise2d_update_0_read
//	denoise2d_rd0
inline hw_uint<32> f_denoise2d_update_0_read_bundle_read(f_cache& f, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // denoise2d_rd0

	hw_uint<32> result;
	hw_uint<32>  denoise2d_rd0_res = denoise2d_rd0_select(f, d0, d1, dynamic_address);
	set_at<0, 32>(result, denoise2d_rd0_res);
	return result;
}

// f_update_0_write
//	f_f_update_0_write0
inline void f_f_update_0_write_bundle_write(hw_uint<32>& f_update_0_write, f_cache& f, int d0, int d1, int dynamic_address) {
	hw_uint<32>  f_f_update_0_write0_res = f_update_0_write.extract<0, 31>();
	f_f_update_0_write0_write(f_f_update_0_write0_res, f, d0, d1, dynamic_address);
}

// r0_update_0_read
//	r0_rd0
inline hw_uint<32> f_r0_update_0_read_bundle_read(f_cache& f, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // r0_rd0

	hw_uint<32> result;
	hw_uint<32>  r0_rd0_res = r0_rd0_select(f, d0, d1, dynamic_address);
	set_at<0, 32>(result, r0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct g_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
  hw_uint<32>  RAM[32][32];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct g_cache {
  // # of banks: 1
  g_all_inputs_to_all_outputs_cache g_all_inputs_to_all_outputs;
};



inline void g_g_update_0_write0_write(hw_uint<32> & g_g_update_0_write0, g_cache& g, int d0, int d1, int dynamic_address) {
  g.g_all_inputs_to_all_outputs.write(g_g_update_0_write0, d0 - -1, d1 - -1);
}

inline hw_uint<32>  denoise2d_rd0_select(g_cache& g, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd0 read pattern: { denoise2d_update_0[d0, d1] -> g[-1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_g_g_update_0_write0 = g.g_all_inputs_to_all_outputs.read(-1 + d0 - -1, d1 - -1);
  return value_g_g_update_0_write0;
  return 0;
}

inline hw_uint<32>  denoise2d_rd1_select(g_cache& g, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd1 read pattern: { denoise2d_update_0[d0, d1] -> g[d0, -1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_g_g_update_0_write0 = g.g_all_inputs_to_all_outputs.read(d0 - -1, -1 + d1 - -1);
  return value_g_g_update_0_write0;
  return 0;
}

inline hw_uint<32>  denoise2d_rd2_select(g_cache& g, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd2 read pattern: { denoise2d_update_0[d0, d1] -> g[d0, 1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_g_g_update_0_write0 = g.g_all_inputs_to_all_outputs.read(d0 - -1, 1 + d1 - -1);
  return value_g_g_update_0_write0;
  return 0;
}

inline hw_uint<32>  denoise2d_rd3_select(g_cache& g, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd3 read pattern: { denoise2d_update_0[d0, d1] -> g[1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_g_g_update_0_write0 = g.g_all_inputs_to_all_outputs.read(1 + d0 - -1, d1 - -1);
  return value_g_g_update_0_write0;
  return 0;
}

// # of bundles = 2
// denoise2d_update_0_read
//	denoise2d_rd0
//	denoise2d_rd1
//	denoise2d_rd2
//	denoise2d_rd3
inline hw_uint<128> g_denoise2d_update_0_read_bundle_read(g_cache& g, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // denoise2d_rd0
    // denoise2d_rd1
    // denoise2d_rd2
    // denoise2d_rd3

	hw_uint<128> result;
	hw_uint<32>  denoise2d_rd0_res = denoise2d_rd0_select(g, d0, d1, dynamic_address);
	set_at<0, 128>(result, denoise2d_rd0_res);
	hw_uint<32>  denoise2d_rd1_res = denoise2d_rd1_select(g, d0, d1, dynamic_address);
	set_at<32, 128>(result, denoise2d_rd1_res);
	hw_uint<32>  denoise2d_rd2_res = denoise2d_rd2_select(g, d0, d1, dynamic_address);
	set_at<64, 128>(result, denoise2d_rd2_res);
	hw_uint<32>  denoise2d_rd3_res = denoise2d_rd3_select(g, d0, d1, dynamic_address);
	set_at<96, 128>(result, denoise2d_rd3_res);
	return result;
}

// g_update_0_write
//	g_g_update_0_write0
inline void g_g_update_0_write_bundle_write(hw_uint<32>& g_update_0_write, g_cache& g, int d0, int d1, int dynamic_address) {
	hw_uint<32>  g_g_update_0_write0_res = g_update_0_write.extract<0, 31>();
	g_g_update_0_write0_write(g_g_update_0_write0_res, g, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct r0_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 29], [0, 29]}
  hw_uint<32>  RAM[30][30];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct r0_cache {
  // # of banks: 1
  r0_all_inputs_to_all_outputs_cache r0_all_inputs_to_all_outputs;
};



inline void r0_r0_update_0_write0_write(hw_uint<32> & r0_r0_update_0_write0, r0_cache& r0, int d0, int d1, int dynamic_address) {
  r0.r0_all_inputs_to_all_outputs.write(r0_r0_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<32>  r1_rd0_select(r0_cache& r0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // r1_rd0 read pattern: { r1_update_0[d0, d1] -> r0[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_r0_r0_update_0_write0 = r0.r0_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_r0_r0_update_0_write0;
  return 0;
}

// # of bundles = 2
// r0_update_0_write
//	r0_r0_update_0_write0
inline void r0_r0_update_0_write_bundle_write(hw_uint<32>& r0_update_0_write, r0_cache& r0, int d0, int d1, int dynamic_address) {
	hw_uint<32>  r0_r0_update_0_write0_res = r0_update_0_write.extract<0, 31>();
	r0_r0_update_0_write0_write(r0_r0_update_0_write0_res, r0, d0, d1, dynamic_address);
}

// r1_update_0_read
//	r1_rd0
inline hw_uint<32> r0_r1_update_0_read_bundle_read(r0_cache& r0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // r1_rd0

	hw_uint<32> result;
	hw_uint<32>  r1_rd0_res = r1_rd0_select(r0, d0, d1, dynamic_address);
	set_at<0, 32>(result, r1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct r1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 29], [0, 29]}
  hw_uint<32>  RAM[30][30];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct r1_cache {
  // # of banks: 1
  r1_all_inputs_to_all_outputs_cache r1_all_inputs_to_all_outputs;
};



inline void r1_r1_update_0_write0_write(hw_uint<32> & r1_r1_update_0_write0, r1_cache& r1, int d0, int d1, int dynamic_address) {
  r1.r1_all_inputs_to_all_outputs.write(r1_r1_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<32>  denoise2d_rd0_select(r1_cache& r1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd0 read pattern: { denoise2d_update_0[d0, d1] -> r1[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_r1_r1_update_0_write0 = r1.r1_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_r1_r1_update_0_write0;
  return 0;
}

// # of bundles = 2
// denoise2d_update_0_read
//	denoise2d_rd0
inline hw_uint<32> r1_denoise2d_update_0_read_bundle_read(r1_cache& r1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // denoise2d_rd0

	hw_uint<32> result;
	hw_uint<32>  denoise2d_rd0_res = denoise2d_rd0_select(r1, d0, d1, dynamic_address);
	set_at<0, 32>(result, denoise2d_rd0_res);
	return result;
}

// r1_update_0_write
//	r1_r1_update_0_write0
inline void r1_r1_update_0_write_bundle_write(hw_uint<32>& r1_update_0_write, r1_cache& r1, int d0, int d1, int dynamic_address) {
	hw_uint<32>  r1_r1_update_0_write0_res = r1_update_0_write.extract<0, 31>();
	r1_r1_update_0_write0_write(r1_r1_update_0_write0_res, r1, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct u_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-2, 31], [-2, 31]}
  hw_uint<32>  RAM[34][34];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct u_cache {
  // # of banks: 1
  u_all_inputs_to_all_outputs_cache u_all_inputs_to_all_outputs;
};



inline void u_u_update_0_write0_write(hw_uint<32> & u_u_update_0_write0, u_cache& u, int d0, int d1, int dynamic_address) {
  u.u_all_inputs_to_all_outputs.write(u_u_update_0_write0, d0 - -2, d1 - -2);
}

inline hw_uint<32>  denoise2d_rd0_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd0 read pattern: { denoise2d_update_0[d0, d1] -> u[-1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_all_inputs_to_all_outputs.read(-1 + d0 - -2, d1 - -2);
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  denoise2d_rd1_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd1 read pattern: { denoise2d_update_0[d0, d1] -> u[d0, -1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_all_inputs_to_all_outputs.read(d0 - -2, -1 + d1 - -2);
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  denoise2d_rd2_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd2 read pattern: { denoise2d_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_all_inputs_to_all_outputs.read(d0 - -2, d1 - -2);
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  denoise2d_rd3_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd3 read pattern: { denoise2d_update_0[d0, d1] -> u[1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_all_inputs_to_all_outputs.read(1 + d0 - -2, d1 - -2);
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_d_rd0_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_d_rd0 read pattern: { diff_d_update_0[d0, d1] -> u[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_all_inputs_to_all_outputs.read(d0 - -2, d1 - -2);
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_d_rd1_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_d_rd1 read pattern: { diff_d_update_0[d0, d1] -> u[d0, 1 + d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_all_inputs_to_all_outputs.read(d0 - -2, 1 + d1 - -2);
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_l_rd0_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_l_rd0 read pattern: { diff_l_update_0[d0, d1] -> u[-1 + d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_all_inputs_to_all_outputs.read(-1 + d0 - -2, d1 - -2);
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_l_rd1_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_l_rd1 read pattern: { diff_l_update_0[d0, d1] -> u[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_all_inputs_to_all_outputs.read(d0 - -2, d1 - -2);
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_qwe_rd0_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_qwe_rd0 read pattern: { diff_qwe_update_0[d0, d1] -> u[d0, -1 + d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_all_inputs_to_all_outputs.read(d0 - -2, -1 + d1 - -2);
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_qwe_rd1_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_qwe_rd1 read pattern: { diff_qwe_update_0[d0, d1] -> u[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_all_inputs_to_all_outputs.read(d0 - -2, d1 - -2);
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_r_rd0_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_r_rd0 read pattern: { diff_r_update_0[d0, d1] -> u[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_all_inputs_to_all_outputs.read(d0 - -2, d1 - -2);
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_r_rd1_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_r_rd1 read pattern: { diff_r_update_0[d0, d1] -> u[1 + d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_all_inputs_to_all_outputs.read(1 + d0 - -2, d1 - -2);
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  r0_rd0_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // r0_rd0 read pattern: { r0_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_all_inputs_to_all_outputs.read(d0 - -2, d1 - -2);
  return value_u_u_update_0_write0;
  return 0;
}

// # of bundles = 7
// denoise2d_update_0_read
//	denoise2d_rd0
//	denoise2d_rd1
//	denoise2d_rd2
//	denoise2d_rd3
inline hw_uint<128> u_denoise2d_update_0_read_bundle_read(u_cache& u, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // denoise2d_rd0
    // denoise2d_rd1
    // denoise2d_rd2
    // denoise2d_rd3

	hw_uint<128> result;
	hw_uint<32>  denoise2d_rd0_res = denoise2d_rd0_select(u, d0, d1, dynamic_address);
	set_at<0, 128>(result, denoise2d_rd0_res);
	hw_uint<32>  denoise2d_rd1_res = denoise2d_rd1_select(u, d0, d1, dynamic_address);
	set_at<32, 128>(result, denoise2d_rd1_res);
	hw_uint<32>  denoise2d_rd2_res = denoise2d_rd2_select(u, d0, d1, dynamic_address);
	set_at<64, 128>(result, denoise2d_rd2_res);
	hw_uint<32>  denoise2d_rd3_res = denoise2d_rd3_select(u, d0, d1, dynamic_address);
	set_at<96, 128>(result, denoise2d_rd3_res);
	return result;
}

// diff_d_update_0_read
//	diff_d_rd0
//	diff_d_rd1
inline hw_uint<64> u_diff_d_update_0_read_bundle_read(u_cache& u, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // diff_d_rd0
    // diff_d_rd1

	hw_uint<64> result;
	hw_uint<32>  diff_d_rd0_res = diff_d_rd0_select(u, d0, d1, dynamic_address);
	set_at<0, 64>(result, diff_d_rd0_res);
	hw_uint<32>  diff_d_rd1_res = diff_d_rd1_select(u, d0, d1, dynamic_address);
	set_at<32, 64>(result, diff_d_rd1_res);
	return result;
}

// diff_l_update_0_read
//	diff_l_rd0
//	diff_l_rd1
inline hw_uint<64> u_diff_l_update_0_read_bundle_read(u_cache& u, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // diff_l_rd0
    // diff_l_rd1

	hw_uint<64> result;
	hw_uint<32>  diff_l_rd0_res = diff_l_rd0_select(u, d0, d1, dynamic_address);
	set_at<0, 64>(result, diff_l_rd0_res);
	hw_uint<32>  diff_l_rd1_res = diff_l_rd1_select(u, d0, d1, dynamic_address);
	set_at<32, 64>(result, diff_l_rd1_res);
	return result;
}

// diff_qwe_update_0_read
//	diff_qwe_rd0
//	diff_qwe_rd1
inline hw_uint<64> u_diff_qwe_update_0_read_bundle_read(u_cache& u, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // diff_qwe_rd0
    // diff_qwe_rd1

	hw_uint<64> result;
	hw_uint<32>  diff_qwe_rd0_res = diff_qwe_rd0_select(u, d0, d1, dynamic_address);
	set_at<0, 64>(result, diff_qwe_rd0_res);
	hw_uint<32>  diff_qwe_rd1_res = diff_qwe_rd1_select(u, d0, d1, dynamic_address);
	set_at<32, 64>(result, diff_qwe_rd1_res);
	return result;
}

// diff_r_update_0_read
//	diff_r_rd0
//	diff_r_rd1
inline hw_uint<64> u_diff_r_update_0_read_bundle_read(u_cache& u, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // diff_r_rd0
    // diff_r_rd1

	hw_uint<64> result;
	hw_uint<32>  diff_r_rd0_res = diff_r_rd0_select(u, d0, d1, dynamic_address);
	set_at<0, 64>(result, diff_r_rd0_res);
	hw_uint<32>  diff_r_rd1_res = diff_r_rd1_select(u, d0, d1, dynamic_address);
	set_at<32, 64>(result, diff_r_rd1_res);
	return result;
}

// r0_update_0_read
//	r0_rd0
inline hw_uint<32> u_r0_update_0_read_bundle_read(u_cache& u, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // r0_rd0

	hw_uint<32> result;
	hw_uint<32>  r0_rd0_res = r0_rd0_select(u, d0, d1, dynamic_address);
	set_at<0, 32>(result, r0_rd0_res);
	return result;
}

// u_update_0_write
//	u_u_update_0_write0
inline void u_u_update_0_write_bundle_write(hw_uint<32>& u_update_0_write, u_cache& u, int d0, int d1, int dynamic_address) {
	hw_uint<32>  u_u_update_0_write0_res = u_update_0_write.extract<0, 31>();
	u_u_update_0_write0_write(u_u_update_0_write0_res, u, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 287232 bits


// Operation logic
inline void f_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */f_off_chip, f_cache& f, int d0, int d1) {
  // Dynamic address computation

	// Consume: f_off_chip
	auto f_off_chip_0_c__0_value = f_off_chip.read();
	auto compute_result = f_generated_compute_unrolled_1(f_off_chip_0_c__0_value);
	// Produce: f
	f_f_update_0_write_bundle_write(/* arg names */compute_result, f, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void r1_update_0(r0_cache& r0, r1_cache& r1, int d0, int d1) {
  // Dynamic address computation

	// Consume: r0
	auto r0_0_c__0_value = r0_r1_update_0_read_bundle_read(r0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = r1_comp2d_unrolled_1(r0_0_c__0_value);
	// Produce: r1
	r1_r1_update_0_write_bundle_write(/* arg names */compute_result, r1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void u_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */u_off_chip, u_cache& u, int d0, int d1) {
  // Dynamic address computation

	// Consume: u_off_chip
	auto u_off_chip_0_c__0_value = u_off_chip.read();
	auto compute_result = u_generated_compute_unrolled_1(u_off_chip_0_c__0_value);
	// Produce: u
	u_u_update_0_write_bundle_write(/* arg names */compute_result, u, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void r0_update_0(u_cache& u, f_cache& f, r0_cache& r0, int d0, int d1) {
  // Dynamic address computation

	// Consume: u
	auto u_0_c__0_value = u_r0_update_0_read_bundle_read(u/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: f
	auto f_0_c__0_value = f_r0_update_0_read_bundle_read(f/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = comp_r02d_unrolled_1(u_0_c__0_value, f_0_c__0_value);
	// Produce: r0
	r0_r0_update_0_write_bundle_write(/* arg names */compute_result, r0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff_r_update_0(u_cache& u, diff_r_cache& diff_r, int d0, int d1) {
  // Dynamic address computation

	// Consume: u
	auto u_0_c__0_value = u_diff_r_update_0_read_bundle_read(u/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_r2d_unrolled_1(u_0_c__0_value);
	// Produce: diff_r
	diff_r_diff_r_update_0_write_bundle_write(/* arg names */compute_result, diff_r, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff_qwe_update_0(u_cache& u, diff_qwe_cache& diff_qwe, int d0, int d1) {
  // Dynamic address computation

	// Consume: u
	auto u_0_c__0_value = u_diff_qwe_update_0_read_bundle_read(u/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_qwe_generated_compute_unrolled_1(u_0_c__0_value);
	// Produce: diff_qwe
	diff_qwe_diff_qwe_update_0_write_bundle_write(/* arg names */compute_result, diff_qwe, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff_l_update_0(u_cache& u, diff_l_cache& diff_l, int d0, int d1) {
  // Dynamic address computation

	// Consume: u
	auto u_0_c__0_value = u_diff_l_update_0_read_bundle_read(u/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_l2d_unrolled_1(u_0_c__0_value);
	// Produce: diff_l
	diff_l_diff_l_update_0_write_bundle_write(/* arg names */compute_result, diff_l, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff_d_update_0(u_cache& u, diff_d_cache& diff_d, int d0, int d1) {
  // Dynamic address computation

	// Consume: u
	auto u_0_c__0_value = u_diff_d_update_0_read_bundle_read(u/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_d2d_unrolled_1(u_0_c__0_value);
	// Produce: diff_d
	diff_d_diff_d_update_0_write_bundle_write(/* arg names */compute_result, diff_d, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void g_update_0(diff_d_cache& diff_d, diff_l_cache& diff_l, diff_qwe_cache& diff_qwe, diff_r_cache& diff_r, g_cache& g, int d0, int d1) {
  // Dynamic address computation

	// Consume: diff_d
	auto diff_d_0_c__0_value = diff_d_g_update_0_read_bundle_read(diff_d/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: diff_l
	auto diff_l_0_c__0_value = diff_l_g_update_0_read_bundle_read(diff_l/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: diff_qwe
	auto diff_qwe_0_c__0_value = diff_qwe_g_update_0_read_bundle_read(diff_qwe/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: diff_r
	auto diff_r_0_c__0_value = diff_r_g_update_0_read_bundle_read(diff_r/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = g_generated_compute_unrolled_1(diff_d_0_c__0_value, diff_l_0_c__0_value, diff_qwe_0_c__0_value, diff_r_0_c__0_value);
	// Produce: g
	g_g_update_0_write_bundle_write(/* arg names */compute_result, g, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void denoise2d_update_0(r1_cache& r1, f_cache& f, u_cache& u, g_cache& g, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */denoise2d, int d0, int d1) {
  // Dynamic address computation

	// Consume: r1
	auto r1_0_c__0_value = r1_denoise2d_update_0_read_bundle_read(r1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: f
	auto f_0_c__0_value = f_denoise2d_update_0_read_bundle_read(f/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: u
	auto u_0_c__0_value = u_denoise2d_update_0_read_bundle_read(u/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: g
	auto g_0_c__0_value = g_denoise2d_update_0_read_bundle_read(g/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = out_comp_dn2d_unrolled_1(r1_0_c__0_value, f_0_c__0_value, u_0_c__0_value, g_0_c__0_value);
	// Produce: denoise2d
	denoise2d.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void denoise2d_naive(HWStream<hw_uint<32> >& /* get_args num ports = 1 */f_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */u_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */denoise2d) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("denoise2d_naive_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  diff_d_cache diff_d;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  diff_l_cache diff_l;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  diff_qwe_cache diff_qwe;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  diff_r_cache diff_r;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  f_cache f;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  g_cache g;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  r0_cache r0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  r1_cache r1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  u_cache u;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { diff_l_update_0[d0, d1] -> [7, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30; diff_d_update_0[d0, d1] -> [8, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30; diff_qwe_update_0[d0, d1] -> [6, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30; g_update_0[d0, d1] -> [10, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30; diff_r_update_0[d0, d1] -> [5, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30; r0_update_0[d0, d1] -> [4, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29; r1_update_0[d0, d1] -> [9, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29; u_update_0[d0, d1] -> [3, d1, d0] : -2 <= d0 <= 31 and -2 <= d1 <= 31; denoise2d_update_0[d0, d1] -> [11, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29; f_update_0[d0, d1] -> [1, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
//   { diff_l_update_0[d0, d1] -> [7, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
// Condition for diff_l_update_0(((-7 + i0 == 0) && (1 + i2 >= 0) && (30 - i2 >= 0) && (1 + i1 >= 0) && (30 - i1 >= 0)))
//   { diff_d_update_0[d0, d1] -> [8, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
// Condition for diff_d_update_0(((-8 + i0 == 0) && (1 + i2 >= 0) && (30 - i2 >= 0) && (1 + i1 >= 0) && (30 - i1 >= 0)))
//   { diff_qwe_update_0[d0, d1] -> [6, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
// Condition for diff_qwe_update_0(((-6 + i0 == 0) && (1 + i2 >= 0) && (30 - i2 >= 0) && (1 + i1 >= 0) && (30 - i1 >= 0)))
//   { g_update_0[d0, d1] -> [10, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
// Condition for g_update_0(((-10 + i0 == 0) && (1 + i2 >= 0) && (30 - i2 >= 0) && (1 + i1 >= 0) && (30 - i1 >= 0)))
//   { diff_r_update_0[d0, d1] -> [5, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
// Condition for diff_r_update_0(((-5 + i0 == 0) && (1 + i2 >= 0) && (30 - i2 >= 0) && (1 + i1 >= 0) && (30 - i1 >= 0)))
//   { r0_update_0[d0, d1] -> [4, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for r0_update_0(((-4 + i0 == 0) && (i2 >= 0) && (29 - i2 >= 0) && (i1 >= 0) && (29 - i1 >= 0)))
//   { r1_update_0[d0, d1] -> [9, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for r1_update_0(((-9 + i0 == 0) && (i2 >= 0) && (29 - i2 >= 0) && (i1 >= 0) && (29 - i1 >= 0)))
//   { u_update_0[d0, d1] -> [3, d1, d0] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
// Condition for u_update_0(((-3 + i0 == 0) && (2 + i2 >= 0) && (31 - i2 >= 0) && (2 + i1 >= 0) && (31 - i1 >= 0)))
//   { denoise2d_update_0[d0, d1] -> [11, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for denoise2d_update_0(((-11 + i0 == 0) && (i2 >= 0) && (29 - i2 >= 0) && (i1 >= 0) && (29 - i1 >= 0)))
//   { f_update_0[d0, d1] -> [1, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for f_update_0(((-1 + i0 == 0) && (i2 >= 0) && (29 - i2 >= 0) && (i1 >= 0) && (29 - i1 >= 0)))

  /*
{
  for (int c1 = 0; c1 <= 29; c1 += 1)
    for (int c2 = 0; c2 <= 29; c2 += 1)
      f_update_0(c2, c1);
  for (int c1 = -2; c1 <= 31; c1 += 1)
    for (int c2 = -2; c2 <= 31; c2 += 1)
      u_update_0(c2, c1);
  for (int c1 = 0; c1 <= 29; c1 += 1)
    for (int c2 = 0; c2 <= 29; c2 += 1)
      r0_update_0(c2, c1);
  for (int c1 = -1; c1 <= 30; c1 += 1)
    for (int c2 = -1; c2 <= 30; c2 += 1)
      diff_r_update_0(c2, c1);
  for (int c1 = -1; c1 <= 30; c1 += 1)
    for (int c2 = -1; c2 <= 30; c2 += 1)
      diff_qwe_update_0(c2, c1);
  for (int c1 = -1; c1 <= 30; c1 += 1)
    for (int c2 = -1; c2 <= 30; c2 += 1)
      diff_l_update_0(c2, c1);
  for (int c1 = -1; c1 <= 30; c1 += 1)
    for (int c2 = -1; c2 <= 30; c2 += 1)
      diff_d_update_0(c2, c1);
  for (int c1 = 0; c1 <= 29; c1 += 1)
    for (int c2 = 0; c2 <= 29; c2 += 1)
      r1_update_0(c2, c1);
  for (int c1 = -1; c1 <= 30; c1 += 1)
    for (int c2 = -1; c2 <= 30; c2 += 1)
      g_update_0(c2, c1);
  for (int c1 = 0; c1 <= 29; c1 += 1)
    for (int c2 = 0; c2 <= 29; c2 += 1)
      denoise2d_update_0(c2, c1);
}

  */
	{
	  for (int c1 = 0; c1 <= 29; c1 += 1)
	    for (int c2 = 0; c2 <= 29; c2 += 1)
	      f_update_0(f_off_chip /* buf name */, f, c2, c1);
	  for (int c1 = -2; c1 <= 31; c1 += 1)
	    for (int c2 = -2; c2 <= 31; c2 += 1)
	      u_update_0(u_off_chip /* buf name */, u, c2, c1);
	  for (int c1 = 0; c1 <= 29; c1 += 1)
	    for (int c2 = 0; c2 <= 29; c2 += 1)
	      r0_update_0(u /* buf name */, f /* buf name */, r0, c2, c1);
	  for (int c1 = -1; c1 <= 30; c1 += 1)
	    for (int c2 = -1; c2 <= 30; c2 += 1)
	      diff_r_update_0(u /* buf name */, diff_r, c2, c1);
	  for (int c1 = -1; c1 <= 30; c1 += 1)
	    for (int c2 = -1; c2 <= 30; c2 += 1)
	      diff_qwe_update_0(u /* buf name */, diff_qwe, c2, c1);
	  for (int c1 = -1; c1 <= 30; c1 += 1)
	    for (int c2 = -1; c2 <= 30; c2 += 1)
	      diff_l_update_0(u /* buf name */, diff_l, c2, c1);
	  for (int c1 = -1; c1 <= 30; c1 += 1)
	    for (int c2 = -1; c2 <= 30; c2 += 1)
	      diff_d_update_0(u /* buf name */, diff_d, c2, c1);
	  for (int c1 = 0; c1 <= 29; c1 += 1)
	    for (int c2 = 0; c2 <= 29; c2 += 1)
	      r1_update_0(r0 /* buf name */, r1, c2, c1);
	  for (int c1 = -1; c1 <= 30; c1 += 1)
	    for (int c2 = -1; c2 <= 30; c2 += 1)
	      g_update_0(diff_d /* buf name */, diff_l /* buf name */, diff_qwe /* buf name */, diff_r /* buf name */, g, c2, c1);
	  for (int c1 = 0; c1 <= 29; c1 += 1)
	    for (int c2 = 0; c2 <= 29; c2 += 1)
	      denoise2d_update_0(r1 /* buf name */, f /* buf name */, u /* buf name */, g /* buf name */, denoise2d, c2, c1);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void denoise2d_naive_wrapper(HWStream<hw_uint<32> >& /* get_args num ports = 1 */f_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */u_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */denoise2d, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    denoise2d_naive(f_off_chip, u_off_chip, denoise2d);
  }
}
#ifdef __VIVADO_SYNTH__
  // { denoise2d_update_0[root = 0, denoise2d_0, denoise2d_1] -> denoise2d[0, 0] : 0 <= denoise2d_0 <= 29 and 0 <= denoise2d_1 <= 29 }
const int denoise2d_update_0_write_pipe0_num_transfers = 900;
  // { f_update_0[root = 0, f_0, f_1] -> f_off_chip[0, 0] : 0 <= f_0 <= 29 and 0 <= f_1 <= 29 }
const int f_update_0_read_pipe0_num_transfers = 900;
  // { u_update_0[root = 0, u_0, u_1] -> u_off_chip[0, 0] : -2 <= u_0 <= 31 and -2 <= u_1 <= 31 }
const int u_update_0_read_pipe0_num_transfers = 1156;


extern "C" {

void denoise2d_naive_accel(hw_uint<32>* f_update_0_read_pipe0, hw_uint<32>* u_update_0_read_pipe0, hw_uint<32>* denoise2d_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = f_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = u_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = denoise2d_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem2

#pragma HLS INTERFACE s_axilite port = f_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = u_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = denoise2d_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > f_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > u_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > denoise2d_update_0_write_pipe0_channel;

  burst_read<32>(f_update_0_read_pipe0, f_update_0_read_pipe0_channel, f_update_0_read_pipe0_num_transfers*size);
  burst_read<32>(u_update_0_read_pipe0, u_update_0_read_pipe0_channel, u_update_0_read_pipe0_num_transfers*size);

  denoise2d_naive_wrapper(f_update_0_read_pipe0_channel, u_update_0_read_pipe0_channel, denoise2d_update_0_write_pipe0_channel, size);

  burst_write<32>(denoise2d_update_0_write_pipe0, denoise2d_update_0_write_pipe0_channel, denoise2d_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void denoise2d_naive_rdai(HWStream<hw_uint<32> >& f_update_0_read_pipe0, HWStream<hw_uint<32> >& u_update_0_read_pipe0, HWStream<hw_uint<32> >&  denoise2d_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = f_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = u_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = denoise2d_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  denoise2d_naive(f_update_0_read_pipe0, u_update_0_read_pipe0, denoise2d_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__
