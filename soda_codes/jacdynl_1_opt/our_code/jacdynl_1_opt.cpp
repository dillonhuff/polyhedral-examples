#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: jacdynl_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "jacdynl_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct in_in_update_0_sm145_0211_141_to_in_load_to_in_to_gp_203_sm131_0183_136_cache {
	// RAM Box: {[0, 1094], [-15, 1934]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_cache {
  // Reader addrs...
    // { load_to_in_to_gp_203_sm131_0183[root = 0, in_ld2, in_ld1] -> in[in_ld1, -15 + in_ld2] : 0 <= in_ld2 <= 1949 and 0 <= in_ld1 <= 1094 }
  // # of banks: 1
  in_in_update_0_sm145_0211_141_to_in_load_to_in_to_gp_203_sm131_0183_136_cache in_in_update_0_sm145_0211_141_to_in_load_to_in_to_gp_203_sm131_0183_136;
};



inline void in_in_update_0_sm145_0211_141_write(hw_uint<16>& in_in_update_0_sm145_0211_141, in_cache& in, int root, int in_0, int in_1, int dynamic_address) {
  in.in_in_update_0_sm145_0211_141_to_in_load_to_in_to_gp_203_sm131_0183_136.push(in_in_update_0_sm145_0211_141);
}

inline hw_uint<16> in_load_to_in_to_gp_203_sm131_0183_136_select(in_cache& in, int root, int in_ld2, int in_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_load_to_in_to_gp_203_sm131_0183_136 read pattern: { load_to_in_to_gp_203_sm131_0183[root = 0, in_ld2, in_ld1] -> in[in_ld1, -15 + in_ld2] : 0 <= in_ld2 <= 1949 and 0 <= in_ld1 <= 1094 }
  // Read schedule : { load_to_in_to_gp_203_sm131_0183[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1949 and 0 <= d2 <= 1094 }
  // Write schedule: { in_update_0_sm145_0211[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1949 and 0 <= d2 <= 1094 }
  auto value_in_in_update_0_sm145_0211_141 = in.in_in_update_0_sm145_0211_141_to_in_load_to_in_to_gp_203_sm131_0183_136.peek(/* one reader or all rams */ 0);
  return value_in_in_update_0_sm145_0211_141;
  return 0;
}

// # of bundles = 2
// in_update_0_sm145_0211_write
//	in_in_update_0_sm145_0211_141
inline void in_in_update_0_sm145_0211_write_bundle_write(hw_uint<16>& in_update_0_sm145_0211_write, in_cache& in, int root, int in_0, int in_1, int dynamic_address) {
	hw_uint<16> in_in_update_0_sm145_0211_141_res = in_update_0_sm145_0211_write.extract<0, 15>();
	in_in_update_0_sm145_0211_141_write(in_in_update_0_sm145_0211_141_res, in, root, in_0, in_1, dynamic_address);
}

// load_to_in_to_gp_203_sm131_0183_read
//	in_load_to_in_to_gp_203_sm131_0183_136
inline hw_uint<16> in_load_to_in_to_gp_203_sm131_0183_read_bundle_read(in_cache& in, int root, int in_ld2, int in_ld1, int dynamic_address) {
  // # of ports in bundle: 1
    // in_load_to_in_to_gp_203_sm131_0183_136

	hw_uint<16> result;
	hw_uint<16> in_load_to_in_to_gp_203_sm131_0183_136_res = in_load_to_in_to_gp_203_sm131_0183_136_select(in, root, in_ld2, in_ld1, dynamic_address);
	set_at<0, 16>(result, in_load_to_in_to_gp_203_sm131_0183_136_res);
	return result;
}

struct in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137_merged_banks_4_cache {
	// RAM Box: {[0, 1094], [-15, 1933]}
	// Capacity: 2192
	// # of read delays: 5
  // 0, 1, 1095, 1096, 2191
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1093> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 1094> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1094() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1095() {
		return f4;
	}

	inline hw_uint<16> peek_1096() {
		return f6;
	}

	inline hw_uint<16> peek_2190() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_2191() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1094
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1094 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1093
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1093 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_FIFO_buf64_cache {
  // Reader addrs...
    // { stg0_update_0_sm146_0213[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[stg0_1, -15 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 1093 }
    // { stg0_update_0_sm146_0213[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 1093 }
    // { stg0_update_0_sm146_0213[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 1093 }
    // { stg0_update_0_sm146_0213[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[stg0_1, -13 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 1093 }
  // # of banks: 1
  in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137_merged_banks_4_cache in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137_merged_banks_4;
};



inline void in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137_write(hw_uint<16>& in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137, in_FIFO_buf64_cache& in_FIFO_buf64, int root, int in_to_gp_20_ld66, int in_to_gp_20_ld65, int dynamic_address) {
  in_FIFO_buf64.in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137_merged_banks_4.push(in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137);
}

inline hw_uint<16> in_FIFO_buf64_stg0_update_0_sm146_0213_71_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_update_0_sm146_0213_71 read pattern: { stg0_update_0_sm146_0213[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[stg0_1, -15 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 1093 }
  // Read schedule : { stg0_update_0_sm146_0213[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 1093 }
  // Write schedule: { load_to_in_FIFO_buf6467_sm174_0269[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 1094 }
  auto value_in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137 = in_FIFO_buf64.in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137_merged_banks_4.peek_2191();
  return value_in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_update_0_sm146_0213_72_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_update_0_sm146_0213_72 read pattern: { stg0_update_0_sm146_0213[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 1093 }
  // Read schedule : { stg0_update_0_sm146_0213[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 1093 }
  // Write schedule: { load_to_in_FIFO_buf6467_sm174_0269[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 1094 }
  auto value_in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137 = in_FIFO_buf64.in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137_merged_banks_4.peek_1096();
  return value_in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_update_0_sm146_0213_73_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_update_0_sm146_0213_73 read pattern: { stg0_update_0_sm146_0213[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 1093 }
  // Read schedule : { stg0_update_0_sm146_0213[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 1093 }
  // Write schedule: { load_to_in_FIFO_buf6467_sm174_0269[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 1094 }
  auto value_in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137 = in_FIFO_buf64.in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137_merged_banks_4.peek_1095();
  return value_in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_update_0_sm146_0213_74_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_update_0_sm146_0213_74 read pattern: { stg0_update_0_sm146_0213[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[stg0_1, -13 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 1093 }
  // Read schedule : { stg0_update_0_sm146_0213[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 1093 }
  // Write schedule: { load_to_in_FIFO_buf6467_sm174_0269[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 1094 }
  auto value_in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137 = in_FIFO_buf64.in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137_merged_banks_4.peek_1();
  return value_in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137;
  return 0;
}

// # of bundles = 2
// load_to_in_FIFO_buf6467_sm174_0269_write
//	in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137
inline void in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_write_bundle_write(hw_uint<16>& load_to_in_FIFO_buf6467_sm174_0269_write, in_FIFO_buf64_cache& in_FIFO_buf64, int root, int in_to_gp_20_ld66, int in_to_gp_20_ld65, int dynamic_address) {
	hw_uint<16> in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137_res = load_to_in_FIFO_buf6467_sm174_0269_write.extract<0, 15>();
	in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137_write(in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_137_res, in_FIFO_buf64, root, in_to_gp_20_ld66, in_to_gp_20_ld65, dynamic_address);
}

// stg0_update_0_sm146_0213_read
//	in_FIFO_buf64_stg0_update_0_sm146_0213_71
//	in_FIFO_buf64_stg0_update_0_sm146_0213_72
//	in_FIFO_buf64_stg0_update_0_sm146_0213_73
//	in_FIFO_buf64_stg0_update_0_sm146_0213_74
inline hw_uint<64> in_FIFO_buf64_stg0_update_0_sm146_0213_read_bundle_read(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
  // # of ports in bundle: 4
    // in_FIFO_buf64_stg0_update_0_sm146_0213_71
    // in_FIFO_buf64_stg0_update_0_sm146_0213_72
    // in_FIFO_buf64_stg0_update_0_sm146_0213_73
    // in_FIFO_buf64_stg0_update_0_sm146_0213_74

	hw_uint<64> result;
	hw_uint<16> in_FIFO_buf64_stg0_update_0_sm146_0213_71_res = in_FIFO_buf64_stg0_update_0_sm146_0213_71_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<0, 64>(result, in_FIFO_buf64_stg0_update_0_sm146_0213_71_res);
	hw_uint<16> in_FIFO_buf64_stg0_update_0_sm146_0213_72_res = in_FIFO_buf64_stg0_update_0_sm146_0213_72_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<16, 64>(result, in_FIFO_buf64_stg0_update_0_sm146_0213_72_res);
	hw_uint<16> in_FIFO_buf64_stg0_update_0_sm146_0213_73_res = in_FIFO_buf64_stg0_update_0_sm146_0213_73_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<32, 64>(result, in_FIFO_buf64_stg0_update_0_sm146_0213_73_res);
	hw_uint<16> in_FIFO_buf64_stg0_update_0_sm146_0213_74_res = in_FIFO_buf64_stg0_update_0_sm146_0213_74_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<48, 64>(result, in_FIFO_buf64_stg0_update_0_sm146_0213_74_res);
	return result;
}

struct stg0_stg0_update_0_sm146_0213_70_to_stg0_load_to_stg0_to_gp_847_sm132_0185_132_cache {
	// RAM Box: {[0, 1093], [-14, 1933]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stg0_cache {
  // Reader addrs...
    // { load_to_stg0_to_gp_847_sm132_0185[root = 0, stg0_ld6, stg0_ld5] -> stg0[stg0_ld5, -14 + stg0_ld6] : 0 <= stg0_ld6 <= 1947 and 0 <= stg0_ld5 <= 1093 }
  // # of banks: 1
  stg0_stg0_update_0_sm146_0213_70_to_stg0_load_to_stg0_to_gp_847_sm132_0185_132_cache stg0_stg0_update_0_sm146_0213_70_to_stg0_load_to_stg0_to_gp_847_sm132_0185_132;
};



inline void stg0_stg0_update_0_sm146_0213_70_write(hw_uint<16>& stg0_stg0_update_0_sm146_0213_70, stg0_cache& stg0, int root, int stg0_0, int stg0_1, int dynamic_address) {
  stg0.stg0_stg0_update_0_sm146_0213_70_to_stg0_load_to_stg0_to_gp_847_sm132_0185_132.push(stg0_stg0_update_0_sm146_0213_70);
}

inline hw_uint<16> stg0_load_to_stg0_to_gp_847_sm132_0185_132_select(stg0_cache& stg0, int root, int stg0_ld6, int stg0_ld5, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_load_to_stg0_to_gp_847_sm132_0185_132 read pattern: { load_to_stg0_to_gp_847_sm132_0185[root = 0, stg0_ld6, stg0_ld5] -> stg0[stg0_ld5, -14 + stg0_ld6] : 0 <= stg0_ld6 <= 1947 and 0 <= stg0_ld5 <= 1093 }
  // Read schedule : { load_to_stg0_to_gp_847_sm132_0185[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 4] : 0 <= d1 <= 1947 and 0 <= d2 <= 1093 }
  // Write schedule: { stg0_update_0_sm146_0213[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 1093 }
  auto value_stg0_stg0_update_0_sm146_0213_70 = stg0.stg0_stg0_update_0_sm146_0213_70_to_stg0_load_to_stg0_to_gp_847_sm132_0185_132.peek(/* one reader or all rams */ 0);
  return value_stg0_stg0_update_0_sm146_0213_70;
  return 0;
}

// # of bundles = 2
// load_to_stg0_to_gp_847_sm132_0185_read
//	stg0_load_to_stg0_to_gp_847_sm132_0185_132
inline hw_uint<16> stg0_load_to_stg0_to_gp_847_sm132_0185_read_bundle_read(stg0_cache& stg0, int root, int stg0_ld6, int stg0_ld5, int dynamic_address) {
  // # of ports in bundle: 1
    // stg0_load_to_stg0_to_gp_847_sm132_0185_132

	hw_uint<16> result;
	hw_uint<16> stg0_load_to_stg0_to_gp_847_sm132_0185_132_res = stg0_load_to_stg0_to_gp_847_sm132_0185_132_select(stg0, root, stg0_ld6, stg0_ld5, dynamic_address);
	set_at<0, 16>(result, stg0_load_to_stg0_to_gp_847_sm132_0185_132_res);
	return result;
}

// stg0_update_0_sm146_0213_write
//	stg0_stg0_update_0_sm146_0213_70
inline void stg0_stg0_update_0_sm146_0213_write_bundle_write(hw_uint<16>& stg0_update_0_sm146_0213_write, stg0_cache& stg0, int root, int stg0_0, int stg0_1, int dynamic_address) {
	hw_uint<16> stg0_stg0_update_0_sm146_0213_70_res = stg0_update_0_sm146_0213_write.extract<0, 15>();
	stg0_stg0_update_0_sm146_0213_70_write(stg0_stg0_update_0_sm146_0213_70_res, stg0, root, stg0_0, stg0_1, dynamic_address);
}

struct stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133_merged_banks_4_cache {
	// RAM Box: {[0, 1093], [-14, 1932]}
	// Capacity: 2190
	// # of read delays: 5
  // 0, 1, 1094, 1095, 2189
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1092> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 1093> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1093() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1094() {
		return f4;
	}

	inline hw_uint<16> peek_1095() {
		return f6;
	}

	inline hw_uint<16> peek_2188() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_2189() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1093
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1093 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1092
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1092 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg0_FIFO_buf68_cache {
  // Reader addrs...
    // { stg1_update_0_sm147_0215[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[stg1_1, -14 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 1092 }
    // { stg1_update_0_sm147_0215[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 1092 }
    // { stg1_update_0_sm147_0215[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 1092 }
    // { stg1_update_0_sm147_0215[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[stg1_1, -12 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 1092 }
  // # of banks: 1
  stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133_merged_banks_4_cache stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133_merged_banks_4;
};



inline void stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133_write(hw_uint<16>& stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133, stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg0_to_gp_84_ld70, int stg0_to_gp_84_ld69, int dynamic_address) {
  stg0_FIFO_buf68.stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133_merged_banks_4.push(stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133);
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_update_0_sm147_0215_41_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_update_0_sm147_0215_41 read pattern: { stg1_update_0_sm147_0215[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[stg1_1, -14 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 1092 }
  // Read schedule : { stg1_update_0_sm147_0215[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 1092 }
  // Write schedule: { load_to_stg0_FIFO_buf6871_sm167_0255[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 1093 }
  auto value_stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133 = stg0_FIFO_buf68.stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133_merged_banks_4.peek_2189();
  return value_stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_update_0_sm147_0215_42_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_update_0_sm147_0215_42 read pattern: { stg1_update_0_sm147_0215[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 1092 }
  // Read schedule : { stg1_update_0_sm147_0215[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 1092 }
  // Write schedule: { load_to_stg0_FIFO_buf6871_sm167_0255[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 1093 }
  auto value_stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133 = stg0_FIFO_buf68.stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133_merged_banks_4.peek_1095();
  return value_stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_update_0_sm147_0215_43_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_update_0_sm147_0215_43 read pattern: { stg1_update_0_sm147_0215[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 1092 }
  // Read schedule : { stg1_update_0_sm147_0215[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 1092 }
  // Write schedule: { load_to_stg0_FIFO_buf6871_sm167_0255[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 1093 }
  auto value_stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133 = stg0_FIFO_buf68.stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133_merged_banks_4.peek_1094();
  return value_stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_update_0_sm147_0215_44_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_update_0_sm147_0215_44 read pattern: { stg1_update_0_sm147_0215[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[stg1_1, -12 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 1092 }
  // Read schedule : { stg1_update_0_sm147_0215[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 1092 }
  // Write schedule: { load_to_stg0_FIFO_buf6871_sm167_0255[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 1093 }
  auto value_stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133 = stg0_FIFO_buf68.stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133_merged_banks_4.peek_1();
  return value_stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133;
  return 0;
}

// # of bundles = 2
// load_to_stg0_FIFO_buf6871_sm167_0255_write
//	stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133
inline void stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_write_bundle_write(hw_uint<16>& load_to_stg0_FIFO_buf6871_sm167_0255_write, stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg0_to_gp_84_ld70, int stg0_to_gp_84_ld69, int dynamic_address) {
	hw_uint<16> stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133_res = load_to_stg0_FIFO_buf6871_sm167_0255_write.extract<0, 15>();
	stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133_write(stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_133_res, stg0_FIFO_buf68, root, stg0_to_gp_84_ld70, stg0_to_gp_84_ld69, dynamic_address);
}

// stg1_update_0_sm147_0215_read
//	stg0_FIFO_buf68_stg1_update_0_sm147_0215_41
//	stg0_FIFO_buf68_stg1_update_0_sm147_0215_42
//	stg0_FIFO_buf68_stg1_update_0_sm147_0215_43
//	stg0_FIFO_buf68_stg1_update_0_sm147_0215_44
inline hw_uint<64> stg0_FIFO_buf68_stg1_update_0_sm147_0215_read_bundle_read(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg0_FIFO_buf68_stg1_update_0_sm147_0215_41
    // stg0_FIFO_buf68_stg1_update_0_sm147_0215_42
    // stg0_FIFO_buf68_stg1_update_0_sm147_0215_43
    // stg0_FIFO_buf68_stg1_update_0_sm147_0215_44

	hw_uint<64> result;
	hw_uint<16> stg0_FIFO_buf68_stg1_update_0_sm147_0215_41_res = stg0_FIFO_buf68_stg1_update_0_sm147_0215_41_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<0, 64>(result, stg0_FIFO_buf68_stg1_update_0_sm147_0215_41_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_update_0_sm147_0215_42_res = stg0_FIFO_buf68_stg1_update_0_sm147_0215_42_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<16, 64>(result, stg0_FIFO_buf68_stg1_update_0_sm147_0215_42_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_update_0_sm147_0215_43_res = stg0_FIFO_buf68_stg1_update_0_sm147_0215_43_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<32, 64>(result, stg0_FIFO_buf68_stg1_update_0_sm147_0215_43_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_update_0_sm147_0215_44_res = stg0_FIFO_buf68_stg1_update_0_sm147_0215_44_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<48, 64>(result, stg0_FIFO_buf68_stg1_update_0_sm147_0215_44_res);
	return result;
}

struct stg1_stg1_update_0_sm147_0215_40_to_stg1_load_to_stg1_to_gp_9811_sm162_0245_108_cache {
	// RAM Box: {[0, 1092], [-13, 1932]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stg1_cache {
  // Reader addrs...
    // { load_to_stg1_to_gp_9811_sm162_0245[root = 0, stg1_ld10, stg1_ld9] -> stg1[stg1_ld9, -13 + stg1_ld10] : 0 <= stg1_ld10 <= 1945 and 0 <= stg1_ld9 <= 1092 }
  // # of banks: 1
  stg1_stg1_update_0_sm147_0215_40_to_stg1_load_to_stg1_to_gp_9811_sm162_0245_108_cache stg1_stg1_update_0_sm147_0215_40_to_stg1_load_to_stg1_to_gp_9811_sm162_0245_108;
};



inline void stg1_stg1_update_0_sm147_0215_40_write(hw_uint<16>& stg1_stg1_update_0_sm147_0215_40, stg1_cache& stg1, int root, int stg1_0, int stg1_1, int dynamic_address) {
  stg1.stg1_stg1_update_0_sm147_0215_40_to_stg1_load_to_stg1_to_gp_9811_sm162_0245_108.push(stg1_stg1_update_0_sm147_0215_40);
}

inline hw_uint<16> stg1_load_to_stg1_to_gp_9811_sm162_0245_108_select(stg1_cache& stg1, int root, int stg1_ld10, int stg1_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_load_to_stg1_to_gp_9811_sm162_0245_108 read pattern: { load_to_stg1_to_gp_9811_sm162_0245[root = 0, stg1_ld10, stg1_ld9] -> stg1[stg1_ld9, -13 + stg1_ld10] : 0 <= stg1_ld10 <= 1945 and 0 <= stg1_ld9 <= 1092 }
  // Read schedule : { load_to_stg1_to_gp_9811_sm162_0245[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 7] : 0 <= d1 <= 1945 and 0 <= d2 <= 1092 }
  // Write schedule: { stg1_update_0_sm147_0215[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 1092 }
  auto value_stg1_stg1_update_0_sm147_0215_40 = stg1.stg1_stg1_update_0_sm147_0215_40_to_stg1_load_to_stg1_to_gp_9811_sm162_0245_108.peek(/* one reader or all rams */ 0);
  return value_stg1_stg1_update_0_sm147_0215_40;
  return 0;
}

// # of bundles = 2
// load_to_stg1_to_gp_9811_sm162_0245_read
//	stg1_load_to_stg1_to_gp_9811_sm162_0245_108
inline hw_uint<16> stg1_load_to_stg1_to_gp_9811_sm162_0245_read_bundle_read(stg1_cache& stg1, int root, int stg1_ld10, int stg1_ld9, int dynamic_address) {
  // # of ports in bundle: 1
    // stg1_load_to_stg1_to_gp_9811_sm162_0245_108

	hw_uint<16> result;
	hw_uint<16> stg1_load_to_stg1_to_gp_9811_sm162_0245_108_res = stg1_load_to_stg1_to_gp_9811_sm162_0245_108_select(stg1, root, stg1_ld10, stg1_ld9, dynamic_address);
	set_at<0, 16>(result, stg1_load_to_stg1_to_gp_9811_sm162_0245_108_res);
	return result;
}

// stg1_update_0_sm147_0215_write
//	stg1_stg1_update_0_sm147_0215_40
inline void stg1_stg1_update_0_sm147_0215_write_bundle_write(hw_uint<16>& stg1_update_0_sm147_0215_write, stg1_cache& stg1, int root, int stg1_0, int stg1_1, int dynamic_address) {
	hw_uint<16> stg1_stg1_update_0_sm147_0215_40_res = stg1_update_0_sm147_0215_write.extract<0, 15>();
	stg1_stg1_update_0_sm147_0215_40_write(stg1_stg1_update_0_sm147_0215_40_res, stg1, root, stg1_0, stg1_1, dynamic_address);
}

struct stg10_stg10_update_0_sm156_0233_65_to_stg10_load_to_stg10_to_gp_41215_sm172_0265_128_cache {
	// RAM Box: {[0, 1083], [-4, 1923]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stg10_cache {
  // Reader addrs...
    // { load_to_stg10_to_gp_41215_sm172_0265[root = 0, stg10_ld14, stg10_ld13] -> stg10[stg10_ld13, -4 + stg10_ld14] : 0 <= stg10_ld14 <= 1927 and 0 <= stg10_ld13 <= 1083 }
  // # of banks: 1
  stg10_stg10_update_0_sm156_0233_65_to_stg10_load_to_stg10_to_gp_41215_sm172_0265_128_cache stg10_stg10_update_0_sm156_0233_65_to_stg10_load_to_stg10_to_gp_41215_sm172_0265_128;
};



inline void stg10_stg10_update_0_sm156_0233_65_write(hw_uint<16>& stg10_stg10_update_0_sm156_0233_65, stg10_cache& stg10, int root, int stg10_0, int stg10_1, int dynamic_address) {
  stg10.stg10_stg10_update_0_sm156_0233_65_to_stg10_load_to_stg10_to_gp_41215_sm172_0265_128.push(stg10_stg10_update_0_sm156_0233_65);
}

inline hw_uint<16> stg10_load_to_stg10_to_gp_41215_sm172_0265_128_select(stg10_cache& stg10, int root, int stg10_ld14, int stg10_ld13, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_load_to_stg10_to_gp_41215_sm172_0265_128 read pattern: { load_to_stg10_to_gp_41215_sm172_0265[root = 0, stg10_ld14, stg10_ld13] -> stg10[stg10_ld13, -4 + stg10_ld14] : 0 <= stg10_ld14 <= 1927 and 0 <= stg10_ld13 <= 1083 }
  // Read schedule : { load_to_stg10_to_gp_41215_sm172_0265[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 34] : 0 <= d1 <= 1927 and 0 <= d2 <= 1083 }
  // Write schedule: { stg10_update_0_sm156_0233[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 1083 }
  auto value_stg10_stg10_update_0_sm156_0233_65 = stg10.stg10_stg10_update_0_sm156_0233_65_to_stg10_load_to_stg10_to_gp_41215_sm172_0265_128.peek(/* one reader or all rams */ 0);
  return value_stg10_stg10_update_0_sm156_0233_65;
  return 0;
}

// # of bundles = 2
// load_to_stg10_to_gp_41215_sm172_0265_read
//	stg10_load_to_stg10_to_gp_41215_sm172_0265_128
inline hw_uint<16> stg10_load_to_stg10_to_gp_41215_sm172_0265_read_bundle_read(stg10_cache& stg10, int root, int stg10_ld14, int stg10_ld13, int dynamic_address) {
  // # of ports in bundle: 1
    // stg10_load_to_stg10_to_gp_41215_sm172_0265_128

	hw_uint<16> result;
	hw_uint<16> stg10_load_to_stg10_to_gp_41215_sm172_0265_128_res = stg10_load_to_stg10_to_gp_41215_sm172_0265_128_select(stg10, root, stg10_ld14, stg10_ld13, dynamic_address);
	set_at<0, 16>(result, stg10_load_to_stg10_to_gp_41215_sm172_0265_128_res);
	return result;
}

// stg10_update_0_sm156_0233_write
//	stg10_stg10_update_0_sm156_0233_65
inline void stg10_stg10_update_0_sm156_0233_write_bundle_write(hw_uint<16>& stg10_update_0_sm156_0233_write, stg10_cache& stg10, int root, int stg10_0, int stg10_1, int dynamic_address) {
	hw_uint<16> stg10_stg10_update_0_sm156_0233_65_res = stg10_update_0_sm156_0233_write.extract<0, 15>();
	stg10_stg10_update_0_sm156_0233_65_write(stg10_stg10_update_0_sm156_0233_65_res, stg10, root, stg10_0, stg10_1, dynamic_address);
}

struct stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129_merged_banks_4_cache {
	// RAM Box: {[0, 1083], [-4, 1922]}
	// Capacity: 2170
	// # of read delays: 5
  // 0, 1, 1084, 1085, 2169
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1082> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 1083> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1083() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1084() {
		return f4;
	}

	inline hw_uint<16> peek_1085() {
		return f6;
	}

	inline hw_uint<16> peek_2168() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_2169() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1083
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1083 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1082
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1082 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg10_FIFO_buf76_cache {
  // Reader addrs...
    // { stg11_update_0_sm157_0235[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[stg11_1, -4 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 1082 }
    // { stg11_update_0_sm157_0235[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 1082 }
    // { stg11_update_0_sm157_0235[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 1082 }
    // { stg11_update_0_sm157_0235[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[stg11_1, -2 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 1082 }
  // # of banks: 1
  stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129_merged_banks_4_cache stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129_merged_banks_4;
};



inline void stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129_write(hw_uint<16>& stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129, stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg10_to_gp_412_ld78, int stg10_to_gp_412_ld77, int dynamic_address) {
  stg10_FIFO_buf76.stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129_merged_banks_4.push(stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129);
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_update_0_sm157_0235_61_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_update_0_sm157_0235_61 read pattern: { stg11_update_0_sm157_0235[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[stg11_1, -4 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 1082 }
  // Read schedule : { stg11_update_0_sm157_0235[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 1082 }
  // Write schedule: { load_to_stg10_FIFO_buf7679_sm140_0201[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 1083 }
  auto value_stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129 = stg10_FIFO_buf76.stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129_merged_banks_4.peek_2169();
  return value_stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_update_0_sm157_0235_62_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_update_0_sm157_0235_62 read pattern: { stg11_update_0_sm157_0235[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 1082 }
  // Read schedule : { stg11_update_0_sm157_0235[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 1082 }
  // Write schedule: { load_to_stg10_FIFO_buf7679_sm140_0201[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 1083 }
  auto value_stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129 = stg10_FIFO_buf76.stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129_merged_banks_4.peek_1085();
  return value_stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_update_0_sm157_0235_63_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_update_0_sm157_0235_63 read pattern: { stg11_update_0_sm157_0235[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 1082 }
  // Read schedule : { stg11_update_0_sm157_0235[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 1082 }
  // Write schedule: { load_to_stg10_FIFO_buf7679_sm140_0201[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 1083 }
  auto value_stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129 = stg10_FIFO_buf76.stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129_merged_banks_4.peek_1084();
  return value_stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_update_0_sm157_0235_64_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_update_0_sm157_0235_64 read pattern: { stg11_update_0_sm157_0235[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[stg11_1, -2 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 1082 }
  // Read schedule : { stg11_update_0_sm157_0235[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 1082 }
  // Write schedule: { load_to_stg10_FIFO_buf7679_sm140_0201[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 1083 }
  auto value_stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129 = stg10_FIFO_buf76.stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129_merged_banks_4.peek_1();
  return value_stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129;
  return 0;
}

// # of bundles = 2
// load_to_stg10_FIFO_buf7679_sm140_0201_write
//	stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129
inline void stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_write_bundle_write(hw_uint<16>& load_to_stg10_FIFO_buf7679_sm140_0201_write, stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg10_to_gp_412_ld78, int stg10_to_gp_412_ld77, int dynamic_address) {
	hw_uint<16> stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129_res = load_to_stg10_FIFO_buf7679_sm140_0201_write.extract<0, 15>();
	stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129_write(stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_129_res, stg10_FIFO_buf76, root, stg10_to_gp_412_ld78, stg10_to_gp_412_ld77, dynamic_address);
}

// stg11_update_0_sm157_0235_read
//	stg10_FIFO_buf76_stg11_update_0_sm157_0235_61
//	stg10_FIFO_buf76_stg11_update_0_sm157_0235_62
//	stg10_FIFO_buf76_stg11_update_0_sm157_0235_63
//	stg10_FIFO_buf76_stg11_update_0_sm157_0235_64
inline hw_uint<64> stg10_FIFO_buf76_stg11_update_0_sm157_0235_read_bundle_read(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg10_FIFO_buf76_stg11_update_0_sm157_0235_61
    // stg10_FIFO_buf76_stg11_update_0_sm157_0235_62
    // stg10_FIFO_buf76_stg11_update_0_sm157_0235_63
    // stg10_FIFO_buf76_stg11_update_0_sm157_0235_64

	hw_uint<64> result;
	hw_uint<16> stg10_FIFO_buf76_stg11_update_0_sm157_0235_61_res = stg10_FIFO_buf76_stg11_update_0_sm157_0235_61_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<0, 64>(result, stg10_FIFO_buf76_stg11_update_0_sm157_0235_61_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_update_0_sm157_0235_62_res = stg10_FIFO_buf76_stg11_update_0_sm157_0235_62_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<16, 64>(result, stg10_FIFO_buf76_stg11_update_0_sm157_0235_62_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_update_0_sm157_0235_63_res = stg10_FIFO_buf76_stg11_update_0_sm157_0235_63_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<32, 64>(result, stg10_FIFO_buf76_stg11_update_0_sm157_0235_63_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_update_0_sm157_0235_64_res = stg10_FIFO_buf76_stg11_update_0_sm157_0235_64_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<48, 64>(result, stg10_FIFO_buf76_stg11_update_0_sm157_0235_64_res);
	return result;
}

struct stg11_stg11_update_0_sm157_0235_60_to_stg11_load_to_stg11_to_gp_51619_sm163_0247_124_cache {
	// RAM Box: {[0, 1082], [-3, 1922]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stg11_cache {
  // Reader addrs...
    // { load_to_stg11_to_gp_51619_sm163_0247[root = 0, stg11_ld18, stg11_ld17] -> stg11[stg11_ld17, -3 + stg11_ld18] : 0 <= stg11_ld18 <= 1925 and 0 <= stg11_ld17 <= 1082 }
  // # of banks: 1
  stg11_stg11_update_0_sm157_0235_60_to_stg11_load_to_stg11_to_gp_51619_sm163_0247_124_cache stg11_stg11_update_0_sm157_0235_60_to_stg11_load_to_stg11_to_gp_51619_sm163_0247_124;
};



inline void stg11_stg11_update_0_sm157_0235_60_write(hw_uint<16>& stg11_stg11_update_0_sm157_0235_60, stg11_cache& stg11, int root, int stg11_0, int stg11_1, int dynamic_address) {
  stg11.stg11_stg11_update_0_sm157_0235_60_to_stg11_load_to_stg11_to_gp_51619_sm163_0247_124.push(stg11_stg11_update_0_sm157_0235_60);
}

inline hw_uint<16> stg11_load_to_stg11_to_gp_51619_sm163_0247_124_select(stg11_cache& stg11, int root, int stg11_ld18, int stg11_ld17, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_load_to_stg11_to_gp_51619_sm163_0247_124 read pattern: { load_to_stg11_to_gp_51619_sm163_0247[root = 0, stg11_ld18, stg11_ld17] -> stg11[stg11_ld17, -3 + stg11_ld18] : 0 <= stg11_ld18 <= 1925 and 0 <= stg11_ld17 <= 1082 }
  // Read schedule : { load_to_stg11_to_gp_51619_sm163_0247[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 37] : 0 <= d1 <= 1925 and 0 <= d2 <= 1082 }
  // Write schedule: { stg11_update_0_sm157_0235[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 1082 }
  auto value_stg11_stg11_update_0_sm157_0235_60 = stg11.stg11_stg11_update_0_sm157_0235_60_to_stg11_load_to_stg11_to_gp_51619_sm163_0247_124.peek(/* one reader or all rams */ 0);
  return value_stg11_stg11_update_0_sm157_0235_60;
  return 0;
}

// # of bundles = 2
// load_to_stg11_to_gp_51619_sm163_0247_read
//	stg11_load_to_stg11_to_gp_51619_sm163_0247_124
inline hw_uint<16> stg11_load_to_stg11_to_gp_51619_sm163_0247_read_bundle_read(stg11_cache& stg11, int root, int stg11_ld18, int stg11_ld17, int dynamic_address) {
  // # of ports in bundle: 1
    // stg11_load_to_stg11_to_gp_51619_sm163_0247_124

	hw_uint<16> result;
	hw_uint<16> stg11_load_to_stg11_to_gp_51619_sm163_0247_124_res = stg11_load_to_stg11_to_gp_51619_sm163_0247_124_select(stg11, root, stg11_ld18, stg11_ld17, dynamic_address);
	set_at<0, 16>(result, stg11_load_to_stg11_to_gp_51619_sm163_0247_124_res);
	return result;
}

// stg11_update_0_sm157_0235_write
//	stg11_stg11_update_0_sm157_0235_60
inline void stg11_stg11_update_0_sm157_0235_write_bundle_write(hw_uint<16>& stg11_update_0_sm157_0235_write, stg11_cache& stg11, int root, int stg11_0, int stg11_1, int dynamic_address) {
	hw_uint<16> stg11_stg11_update_0_sm157_0235_60_res = stg11_update_0_sm157_0235_write.extract<0, 15>();
	stg11_stg11_update_0_sm157_0235_60_write(stg11_stg11_update_0_sm157_0235_60_res, stg11, root, stg11_0, stg11_1, dynamic_address);
}

struct stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125_merged_banks_4_cache {
	// RAM Box: {[0, 1082], [-3, 1921]}
	// Capacity: 2168
	// # of read delays: 5
  // 0, 1, 1083, 1084, 2167
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1081> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 1082> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1082() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1083() {
		return f4;
	}

	inline hw_uint<16> peek_1084() {
		return f6;
	}

	inline hw_uint<16> peek_2166() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_2167() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1082
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1082 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1081
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1081 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg11_FIFO_buf80_cache {
  // Reader addrs...
    // { stg12_update_0_sm158_0237[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[stg12_1, -3 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 1081 }
    // { stg12_update_0_sm158_0237[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 1081 }
    // { stg12_update_0_sm158_0237[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 1081 }
    // { stg12_update_0_sm158_0237[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[stg12_1, -1 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 1081 }
  // # of banks: 1
  stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125_merged_banks_4_cache stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125_merged_banks_4;
};



inline void stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125_write(hw_uint<16>& stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125, stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg11_to_gp_516_ld82, int stg11_to_gp_516_ld81, int dynamic_address) {
  stg11_FIFO_buf80.stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125_merged_banks_4.push(stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125);
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_update_0_sm158_0237_56_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_update_0_sm158_0237_56 read pattern: { stg12_update_0_sm158_0237[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[stg12_1, -3 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 1081 }
  // Read schedule : { stg12_update_0_sm158_0237[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_stg11_FIFO_buf8083_sm142_0205[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 1082 }
  auto value_stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125 = stg11_FIFO_buf80.stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125_merged_banks_4.peek_2167();
  return value_stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_update_0_sm158_0237_57_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_update_0_sm158_0237_57 read pattern: { stg12_update_0_sm158_0237[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 1081 }
  // Read schedule : { stg12_update_0_sm158_0237[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_stg11_FIFO_buf8083_sm142_0205[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 1082 }
  auto value_stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125 = stg11_FIFO_buf80.stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125_merged_banks_4.peek_1084();
  return value_stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_update_0_sm158_0237_58_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_update_0_sm158_0237_58 read pattern: { stg12_update_0_sm158_0237[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 1081 }
  // Read schedule : { stg12_update_0_sm158_0237[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_stg11_FIFO_buf8083_sm142_0205[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 1082 }
  auto value_stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125 = stg11_FIFO_buf80.stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125_merged_banks_4.peek_1083();
  return value_stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_update_0_sm158_0237_59_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_update_0_sm158_0237_59 read pattern: { stg12_update_0_sm158_0237[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[stg12_1, -1 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 1081 }
  // Read schedule : { stg12_update_0_sm158_0237[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_stg11_FIFO_buf8083_sm142_0205[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 1082 }
  auto value_stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125 = stg11_FIFO_buf80.stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125_merged_banks_4.peek_1();
  return value_stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125;
  return 0;
}

// # of bundles = 2
// load_to_stg11_FIFO_buf8083_sm142_0205_write
//	stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125
inline void stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_write_bundle_write(hw_uint<16>& load_to_stg11_FIFO_buf8083_sm142_0205_write, stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg11_to_gp_516_ld82, int stg11_to_gp_516_ld81, int dynamic_address) {
	hw_uint<16> stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125_res = load_to_stg11_FIFO_buf8083_sm142_0205_write.extract<0, 15>();
	stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125_write(stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_125_res, stg11_FIFO_buf80, root, stg11_to_gp_516_ld82, stg11_to_gp_516_ld81, dynamic_address);
}

// stg12_update_0_sm158_0237_read
//	stg11_FIFO_buf80_stg12_update_0_sm158_0237_56
//	stg11_FIFO_buf80_stg12_update_0_sm158_0237_57
//	stg11_FIFO_buf80_stg12_update_0_sm158_0237_58
//	stg11_FIFO_buf80_stg12_update_0_sm158_0237_59
inline hw_uint<64> stg11_FIFO_buf80_stg12_update_0_sm158_0237_read_bundle_read(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg11_FIFO_buf80_stg12_update_0_sm158_0237_56
    // stg11_FIFO_buf80_stg12_update_0_sm158_0237_57
    // stg11_FIFO_buf80_stg12_update_0_sm158_0237_58
    // stg11_FIFO_buf80_stg12_update_0_sm158_0237_59

	hw_uint<64> result;
	hw_uint<16> stg11_FIFO_buf80_stg12_update_0_sm158_0237_56_res = stg11_FIFO_buf80_stg12_update_0_sm158_0237_56_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<0, 64>(result, stg11_FIFO_buf80_stg12_update_0_sm158_0237_56_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_update_0_sm158_0237_57_res = stg11_FIFO_buf80_stg12_update_0_sm158_0237_57_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<16, 64>(result, stg11_FIFO_buf80_stg12_update_0_sm158_0237_57_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_update_0_sm158_0237_58_res = stg11_FIFO_buf80_stg12_update_0_sm158_0237_58_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<32, 64>(result, stg11_FIFO_buf80_stg12_update_0_sm158_0237_58_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_update_0_sm158_0237_59_res = stg11_FIFO_buf80_stg12_update_0_sm158_0237_59_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<48, 64>(result, stg11_FIFO_buf80_stg12_update_0_sm158_0237_59_res);
	return result;
}

struct stg12_stg12_update_0_sm158_0237_55_to_stg12_load_to_stg12_to_gp_62023_sm133_0187_120_cache {
	// RAM Box: {[0, 1081], [-2, 1921]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stg12_cache {
  // Reader addrs...
    // { load_to_stg12_to_gp_62023_sm133_0187[root = 0, stg12_ld22, stg12_ld21] -> stg12[stg12_ld21, -2 + stg12_ld22] : 0 <= stg12_ld22 <= 1923 and 0 <= stg12_ld21 <= 1081 }
  // # of banks: 1
  stg12_stg12_update_0_sm158_0237_55_to_stg12_load_to_stg12_to_gp_62023_sm133_0187_120_cache stg12_stg12_update_0_sm158_0237_55_to_stg12_load_to_stg12_to_gp_62023_sm133_0187_120;
};



inline void stg12_stg12_update_0_sm158_0237_55_write(hw_uint<16>& stg12_stg12_update_0_sm158_0237_55, stg12_cache& stg12, int root, int stg12_0, int stg12_1, int dynamic_address) {
  stg12.stg12_stg12_update_0_sm158_0237_55_to_stg12_load_to_stg12_to_gp_62023_sm133_0187_120.push(stg12_stg12_update_0_sm158_0237_55);
}

inline hw_uint<16> stg12_load_to_stg12_to_gp_62023_sm133_0187_120_select(stg12_cache& stg12, int root, int stg12_ld22, int stg12_ld21, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_load_to_stg12_to_gp_62023_sm133_0187_120 read pattern: { load_to_stg12_to_gp_62023_sm133_0187[root = 0, stg12_ld22, stg12_ld21] -> stg12[stg12_ld21, -2 + stg12_ld22] : 0 <= stg12_ld22 <= 1923 and 0 <= stg12_ld21 <= 1081 }
  // Read schedule : { load_to_stg12_to_gp_62023_sm133_0187[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 40] : 0 <= d1 <= 1923 and 0 <= d2 <= 1081 }
  // Write schedule: { stg12_update_0_sm158_0237[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 1081 }
  auto value_stg12_stg12_update_0_sm158_0237_55 = stg12.stg12_stg12_update_0_sm158_0237_55_to_stg12_load_to_stg12_to_gp_62023_sm133_0187_120.peek(/* one reader or all rams */ 0);
  return value_stg12_stg12_update_0_sm158_0237_55;
  return 0;
}

// # of bundles = 2
// load_to_stg12_to_gp_62023_sm133_0187_read
//	stg12_load_to_stg12_to_gp_62023_sm133_0187_120
inline hw_uint<16> stg12_load_to_stg12_to_gp_62023_sm133_0187_read_bundle_read(stg12_cache& stg12, int root, int stg12_ld22, int stg12_ld21, int dynamic_address) {
  // # of ports in bundle: 1
    // stg12_load_to_stg12_to_gp_62023_sm133_0187_120

	hw_uint<16> result;
	hw_uint<16> stg12_load_to_stg12_to_gp_62023_sm133_0187_120_res = stg12_load_to_stg12_to_gp_62023_sm133_0187_120_select(stg12, root, stg12_ld22, stg12_ld21, dynamic_address);
	set_at<0, 16>(result, stg12_load_to_stg12_to_gp_62023_sm133_0187_120_res);
	return result;
}

// stg12_update_0_sm158_0237_write
//	stg12_stg12_update_0_sm158_0237_55
inline void stg12_stg12_update_0_sm158_0237_write_bundle_write(hw_uint<16>& stg12_update_0_sm158_0237_write, stg12_cache& stg12, int root, int stg12_0, int stg12_1, int dynamic_address) {
	hw_uint<16> stg12_stg12_update_0_sm158_0237_55_res = stg12_update_0_sm158_0237_write.extract<0, 15>();
	stg12_stg12_update_0_sm158_0237_55_write(stg12_stg12_update_0_sm158_0237_55_res, stg12, root, stg12_0, stg12_1, dynamic_address);
}

struct stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121_merged_banks_4_cache {
	// RAM Box: {[0, 1081], [-2, 1920]}
	// Capacity: 2166
	// # of read delays: 5
  // 0, 1, 1082, 1083, 2165
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1080> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 1081> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1081() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1082() {
		return f4;
	}

	inline hw_uint<16> peek_1083() {
		return f6;
	}

	inline hw_uint<16> peek_2164() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_2165() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1081
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1081 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1080
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1080 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg12_FIFO_buf84_cache {
  // Reader addrs...
    // { stg13_update_0_sm159_0239[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[stg13_1, -2 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 1080 }
    // { stg13_update_0_sm159_0239[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 1080 }
    // { stg13_update_0_sm159_0239[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 1080 }
    // { stg13_update_0_sm159_0239[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[stg13_1, stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 1080 }
  // # of banks: 1
  stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121_merged_banks_4_cache stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121_merged_banks_4;
};



inline void stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121_write(hw_uint<16>& stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121, stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg12_to_gp_620_ld86, int stg12_to_gp_620_ld85, int dynamic_address) {
  stg12_FIFO_buf84.stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121_merged_banks_4.push(stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121);
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_update_0_sm159_0239_51_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_update_0_sm159_0239_51 read pattern: { stg13_update_0_sm159_0239[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[stg13_1, -2 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 1080 }
  // Read schedule : { stg13_update_0_sm159_0239[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 1080 }
  // Write schedule: { load_to_stg12_FIFO_buf8487_sm129_0179[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 1081 }
  auto value_stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121 = stg12_FIFO_buf84.stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121_merged_banks_4.peek_2165();
  return value_stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_update_0_sm159_0239_52_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_update_0_sm159_0239_52 read pattern: { stg13_update_0_sm159_0239[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 1080 }
  // Read schedule : { stg13_update_0_sm159_0239[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 1080 }
  // Write schedule: { load_to_stg12_FIFO_buf8487_sm129_0179[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 1081 }
  auto value_stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121 = stg12_FIFO_buf84.stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121_merged_banks_4.peek_1083();
  return value_stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_update_0_sm159_0239_53_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_update_0_sm159_0239_53 read pattern: { stg13_update_0_sm159_0239[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 1080 }
  // Read schedule : { stg13_update_0_sm159_0239[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 1080 }
  // Write schedule: { load_to_stg12_FIFO_buf8487_sm129_0179[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 1081 }
  auto value_stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121 = stg12_FIFO_buf84.stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121_merged_banks_4.peek_1082();
  return value_stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_update_0_sm159_0239_54_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_update_0_sm159_0239_54 read pattern: { stg13_update_0_sm159_0239[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[stg13_1, stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 1080 }
  // Read schedule : { stg13_update_0_sm159_0239[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 1080 }
  // Write schedule: { load_to_stg12_FIFO_buf8487_sm129_0179[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 1081 }
  auto value_stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121 = stg12_FIFO_buf84.stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121_merged_banks_4.peek_1();
  return value_stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121;
  return 0;
}

// # of bundles = 2
// load_to_stg12_FIFO_buf8487_sm129_0179_write
//	stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121
inline void stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_write_bundle_write(hw_uint<16>& load_to_stg12_FIFO_buf8487_sm129_0179_write, stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg12_to_gp_620_ld86, int stg12_to_gp_620_ld85, int dynamic_address) {
	hw_uint<16> stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121_res = load_to_stg12_FIFO_buf8487_sm129_0179_write.extract<0, 15>();
	stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121_write(stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_121_res, stg12_FIFO_buf84, root, stg12_to_gp_620_ld86, stg12_to_gp_620_ld85, dynamic_address);
}

// stg13_update_0_sm159_0239_read
//	stg12_FIFO_buf84_stg13_update_0_sm159_0239_51
//	stg12_FIFO_buf84_stg13_update_0_sm159_0239_52
//	stg12_FIFO_buf84_stg13_update_0_sm159_0239_53
//	stg12_FIFO_buf84_stg13_update_0_sm159_0239_54
inline hw_uint<64> stg12_FIFO_buf84_stg13_update_0_sm159_0239_read_bundle_read(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg12_FIFO_buf84_stg13_update_0_sm159_0239_51
    // stg12_FIFO_buf84_stg13_update_0_sm159_0239_52
    // stg12_FIFO_buf84_stg13_update_0_sm159_0239_53
    // stg12_FIFO_buf84_stg13_update_0_sm159_0239_54

	hw_uint<64> result;
	hw_uint<16> stg12_FIFO_buf84_stg13_update_0_sm159_0239_51_res = stg12_FIFO_buf84_stg13_update_0_sm159_0239_51_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<0, 64>(result, stg12_FIFO_buf84_stg13_update_0_sm159_0239_51_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_update_0_sm159_0239_52_res = stg12_FIFO_buf84_stg13_update_0_sm159_0239_52_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<16, 64>(result, stg12_FIFO_buf84_stg13_update_0_sm159_0239_52_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_update_0_sm159_0239_53_res = stg12_FIFO_buf84_stg13_update_0_sm159_0239_53_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<32, 64>(result, stg12_FIFO_buf84_stg13_update_0_sm159_0239_53_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_update_0_sm159_0239_54_res = stg12_FIFO_buf84_stg13_update_0_sm159_0239_54_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<48, 64>(result, stg12_FIFO_buf84_stg13_update_0_sm159_0239_54_res);
	return result;
}

struct stg13_stg13_update_0_sm159_0239_50_to_stg13_load_to_stg13_to_gp_72427_sm173_0267_116_cache {
	// RAM Box: {[0, 1080], [-1, 1920]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stg13_cache {
  // Reader addrs...
    // { load_to_stg13_to_gp_72427_sm173_0267[root = 0, stg13_ld26, stg13_ld25] -> stg13[stg13_ld25, -1 + stg13_ld26] : 0 <= stg13_ld26 <= 1921 and 0 <= stg13_ld25 <= 1080 }
  // # of banks: 1
  stg13_stg13_update_0_sm159_0239_50_to_stg13_load_to_stg13_to_gp_72427_sm173_0267_116_cache stg13_stg13_update_0_sm159_0239_50_to_stg13_load_to_stg13_to_gp_72427_sm173_0267_116;
};



inline void stg13_stg13_update_0_sm159_0239_50_write(hw_uint<16>& stg13_stg13_update_0_sm159_0239_50, stg13_cache& stg13, int root, int stg13_0, int stg13_1, int dynamic_address) {
  stg13.stg13_stg13_update_0_sm159_0239_50_to_stg13_load_to_stg13_to_gp_72427_sm173_0267_116.push(stg13_stg13_update_0_sm159_0239_50);
}

inline hw_uint<16> stg13_load_to_stg13_to_gp_72427_sm173_0267_116_select(stg13_cache& stg13, int root, int stg13_ld26, int stg13_ld25, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_load_to_stg13_to_gp_72427_sm173_0267_116 read pattern: { load_to_stg13_to_gp_72427_sm173_0267[root = 0, stg13_ld26, stg13_ld25] -> stg13[stg13_ld25, -1 + stg13_ld26] : 0 <= stg13_ld26 <= 1921 and 0 <= stg13_ld25 <= 1080 }
  // Read schedule : { load_to_stg13_to_gp_72427_sm173_0267[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 43] : 0 <= d1 <= 1921 and 0 <= d2 <= 1080 }
  // Write schedule: { stg13_update_0_sm159_0239[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 1080 }
  auto value_stg13_stg13_update_0_sm159_0239_50 = stg13.stg13_stg13_update_0_sm159_0239_50_to_stg13_load_to_stg13_to_gp_72427_sm173_0267_116.peek(/* one reader or all rams */ 0);
  return value_stg13_stg13_update_0_sm159_0239_50;
  return 0;
}

// # of bundles = 2
// load_to_stg13_to_gp_72427_sm173_0267_read
//	stg13_load_to_stg13_to_gp_72427_sm173_0267_116
inline hw_uint<16> stg13_load_to_stg13_to_gp_72427_sm173_0267_read_bundle_read(stg13_cache& stg13, int root, int stg13_ld26, int stg13_ld25, int dynamic_address) {
  // # of ports in bundle: 1
    // stg13_load_to_stg13_to_gp_72427_sm173_0267_116

	hw_uint<16> result;
	hw_uint<16> stg13_load_to_stg13_to_gp_72427_sm173_0267_116_res = stg13_load_to_stg13_to_gp_72427_sm173_0267_116_select(stg13, root, stg13_ld26, stg13_ld25, dynamic_address);
	set_at<0, 16>(result, stg13_load_to_stg13_to_gp_72427_sm173_0267_116_res);
	return result;
}

// stg13_update_0_sm159_0239_write
//	stg13_stg13_update_0_sm159_0239_50
inline void stg13_stg13_update_0_sm159_0239_write_bundle_write(hw_uint<16>& stg13_update_0_sm159_0239_write, stg13_cache& stg13, int root, int stg13_0, int stg13_1, int dynamic_address) {
	hw_uint<16> stg13_stg13_update_0_sm159_0239_50_res = stg13_update_0_sm159_0239_write.extract<0, 15>();
	stg13_stg13_update_0_sm159_0239_50_write(stg13_stg13_update_0_sm159_0239_50_res, stg13, root, stg13_0, stg13_1, dynamic_address);
}

struct stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117_merged_banks_4_cache {
	// RAM Box: {[0, 1080], [-1, 1919]}
	// Capacity: 2164
	// # of read delays: 5
  // 0, 1, 1081, 1082, 2163
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1079> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 1080> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1080() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1081() {
		return f4;
	}

	inline hw_uint<16> peek_1082() {
		return f6;
	}

	inline hw_uint<16> peek_2162() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_2163() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1080
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1080 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1079
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1079 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg13_FIFO_buf88_cache {
  // Reader addrs...
    // { stg14_update_0_sm160_0241[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[stg14_1, -1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 1079 }
    // { stg14_update_0_sm160_0241[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 1079 }
    // { stg14_update_0_sm160_0241[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 1079 }
    // { stg14_update_0_sm160_0241[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 1079 }
  // # of banks: 1
  stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117_merged_banks_4_cache stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117_merged_banks_4;
};



inline void stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117_write(hw_uint<16>& stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117, stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg13_to_gp_724_ld90, int stg13_to_gp_724_ld89, int dynamic_address) {
  stg13_FIFO_buf88.stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117_merged_banks_4.push(stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117);
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_update_0_sm160_0241_46_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_update_0_sm160_0241_46 read pattern: { stg14_update_0_sm160_0241[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[stg14_1, -1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 1079 }
  // Read schedule : { stg14_update_0_sm160_0241[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_stg13_FIFO_buf8891_sm169_0259[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 1080 }
  auto value_stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117 = stg13_FIFO_buf88.stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117_merged_banks_4.peek_2163();
  return value_stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_update_0_sm160_0241_47_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_update_0_sm160_0241_47 read pattern: { stg14_update_0_sm160_0241[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 1079 }
  // Read schedule : { stg14_update_0_sm160_0241[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_stg13_FIFO_buf8891_sm169_0259[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 1080 }
  auto value_stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117 = stg13_FIFO_buf88.stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117_merged_banks_4.peek_1082();
  return value_stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_update_0_sm160_0241_48_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_update_0_sm160_0241_48 read pattern: { stg14_update_0_sm160_0241[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 1079 }
  // Read schedule : { stg14_update_0_sm160_0241[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_stg13_FIFO_buf8891_sm169_0259[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 1080 }
  auto value_stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117 = stg13_FIFO_buf88.stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117_merged_banks_4.peek_1081();
  return value_stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_update_0_sm160_0241_49_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_update_0_sm160_0241_49 read pattern: { stg14_update_0_sm160_0241[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 1079 }
  // Read schedule : { stg14_update_0_sm160_0241[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_stg13_FIFO_buf8891_sm169_0259[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 1080 }
  auto value_stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117 = stg13_FIFO_buf88.stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117_merged_banks_4.peek_1();
  return value_stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117;
  return 0;
}

// # of bundles = 2
// load_to_stg13_FIFO_buf8891_sm169_0259_write
//	stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117
inline void stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_write_bundle_write(hw_uint<16>& load_to_stg13_FIFO_buf8891_sm169_0259_write, stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg13_to_gp_724_ld90, int stg13_to_gp_724_ld89, int dynamic_address) {
	hw_uint<16> stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117_res = load_to_stg13_FIFO_buf8891_sm169_0259_write.extract<0, 15>();
	stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117_write(stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_117_res, stg13_FIFO_buf88, root, stg13_to_gp_724_ld90, stg13_to_gp_724_ld89, dynamic_address);
}

// stg14_update_0_sm160_0241_read
//	stg13_FIFO_buf88_stg14_update_0_sm160_0241_46
//	stg13_FIFO_buf88_stg14_update_0_sm160_0241_47
//	stg13_FIFO_buf88_stg14_update_0_sm160_0241_48
//	stg13_FIFO_buf88_stg14_update_0_sm160_0241_49
inline hw_uint<64> stg13_FIFO_buf88_stg14_update_0_sm160_0241_read_bundle_read(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg13_FIFO_buf88_stg14_update_0_sm160_0241_46
    // stg13_FIFO_buf88_stg14_update_0_sm160_0241_47
    // stg13_FIFO_buf88_stg14_update_0_sm160_0241_48
    // stg13_FIFO_buf88_stg14_update_0_sm160_0241_49

	hw_uint<64> result;
	hw_uint<16> stg13_FIFO_buf88_stg14_update_0_sm160_0241_46_res = stg13_FIFO_buf88_stg14_update_0_sm160_0241_46_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<0, 64>(result, stg13_FIFO_buf88_stg14_update_0_sm160_0241_46_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_update_0_sm160_0241_47_res = stg13_FIFO_buf88_stg14_update_0_sm160_0241_47_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<16, 64>(result, stg13_FIFO_buf88_stg14_update_0_sm160_0241_47_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_update_0_sm160_0241_48_res = stg13_FIFO_buf88_stg14_update_0_sm160_0241_48_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<32, 64>(result, stg13_FIFO_buf88_stg14_update_0_sm160_0241_48_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_update_0_sm160_0241_49_res = stg13_FIFO_buf88_stg14_update_0_sm160_0241_49_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<48, 64>(result, stg13_FIFO_buf88_stg14_update_0_sm160_0241_49_res);
	return result;
}

struct stg14_stg14_update_0_sm160_0241_45_to_stg14_load_to_stg14_to_gp_12831_sm134_0189_112_cache {
	// RAM Box: {[0, 1079], [0, 1919]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stg14_cache {
  // Reader addrs...
    // { load_to_stg14_to_gp_12831_sm134_0189[root = 0, stg14_ld30, stg14_ld29] -> stg14[stg14_ld29, stg14_ld30] : 0 <= stg14_ld30 <= 1919 and 0 <= stg14_ld29 <= 1079 }
  // # of banks: 1
  stg14_stg14_update_0_sm160_0241_45_to_stg14_load_to_stg14_to_gp_12831_sm134_0189_112_cache stg14_stg14_update_0_sm160_0241_45_to_stg14_load_to_stg14_to_gp_12831_sm134_0189_112;
};



inline void stg14_stg14_update_0_sm160_0241_45_write(hw_uint<16>& stg14_stg14_update_0_sm160_0241_45, stg14_cache& stg14, int root, int stg14_0, int stg14_1, int dynamic_address) {
  stg14.stg14_stg14_update_0_sm160_0241_45_to_stg14_load_to_stg14_to_gp_12831_sm134_0189_112.push(stg14_stg14_update_0_sm160_0241_45);
}

inline hw_uint<16> stg14_load_to_stg14_to_gp_12831_sm134_0189_112_select(stg14_cache& stg14, int root, int stg14_ld30, int stg14_ld29, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_load_to_stg14_to_gp_12831_sm134_0189_112 read pattern: { load_to_stg14_to_gp_12831_sm134_0189[root = 0, stg14_ld30, stg14_ld29] -> stg14[stg14_ld29, stg14_ld30] : 0 <= stg14_ld30 <= 1919 and 0 <= stg14_ld29 <= 1079 }
  // Read schedule : { load_to_stg14_to_gp_12831_sm134_0189[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 46] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079 }
  // Write schedule: { stg14_update_0_sm160_0241[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079 }
  auto value_stg14_stg14_update_0_sm160_0241_45 = stg14.stg14_stg14_update_0_sm160_0241_45_to_stg14_load_to_stg14_to_gp_12831_sm134_0189_112.peek(/* one reader or all rams */ 0);
  return value_stg14_stg14_update_0_sm160_0241_45;
  return 0;
}

// # of bundles = 2
// load_to_stg14_to_gp_12831_sm134_0189_read
//	stg14_load_to_stg14_to_gp_12831_sm134_0189_112
inline hw_uint<16> stg14_load_to_stg14_to_gp_12831_sm134_0189_read_bundle_read(stg14_cache& stg14, int root, int stg14_ld30, int stg14_ld29, int dynamic_address) {
  // # of ports in bundle: 1
    // stg14_load_to_stg14_to_gp_12831_sm134_0189_112

	hw_uint<16> result;
	hw_uint<16> stg14_load_to_stg14_to_gp_12831_sm134_0189_112_res = stg14_load_to_stg14_to_gp_12831_sm134_0189_112_select(stg14, root, stg14_ld30, stg14_ld29, dynamic_address);
	set_at<0, 16>(result, stg14_load_to_stg14_to_gp_12831_sm134_0189_112_res);
	return result;
}

// stg14_update_0_sm160_0241_write
//	stg14_stg14_update_0_sm160_0241_45
inline void stg14_stg14_update_0_sm160_0241_write_bundle_write(hw_uint<16>& stg14_update_0_sm160_0241_write, stg14_cache& stg14, int root, int stg14_0, int stg14_1, int dynamic_address) {
	hw_uint<16> stg14_stg14_update_0_sm160_0241_45_res = stg14_update_0_sm160_0241_write.extract<0, 15>();
	stg14_stg14_update_0_sm160_0241_45_write(stg14_stg14_update_0_sm160_0241_45_res, stg14, root, stg14_0, stg14_1, dynamic_address);
}

struct stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_sm168_0257_113_to_stg14_FIFO_buf92_jacdynl_1_update_0_sm161_0243_140_cache {
	// RAM Box: {[0, 1079], [0, 1919]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stg14_FIFO_buf92_cache {
  // Reader addrs...
    // { jacdynl_1_update_0_sm161_0243[root = 0, jacdynl_1_0, jacdynl_1_1] -> stg14_FIFO_buf92[jacdynl_1_1, jacdynl_1_0] : 0 <= jacdynl_1_0 <= 1919 and 0 <= jacdynl_1_1 <= 1079 }
  // # of banks: 1
  stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_sm168_0257_113_to_stg14_FIFO_buf92_jacdynl_1_update_0_sm161_0243_140_cache stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_sm168_0257_113_to_stg14_FIFO_buf92_jacdynl_1_update_0_sm161_0243_140;
};



inline void stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_sm168_0257_113_write(hw_uint<16>& stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_sm168_0257_113, stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int stg14_to_gp_128_ld94, int stg14_to_gp_128_ld93, int dynamic_address) {
  stg14_FIFO_buf92.stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_sm168_0257_113_to_stg14_FIFO_buf92_jacdynl_1_update_0_sm161_0243_140.push(stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_sm168_0257_113);
}

inline hw_uint<16> stg14_FIFO_buf92_jacdynl_1_update_0_sm161_0243_140_select(stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int jacdynl_1_0, int jacdynl_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_FIFO_buf92_jacdynl_1_update_0_sm161_0243_140 read pattern: { jacdynl_1_update_0_sm161_0243[root = 0, jacdynl_1_0, jacdynl_1_1] -> stg14_FIFO_buf92[jacdynl_1_1, jacdynl_1_0] : 0 <= jacdynl_1_0 <= 1919 and 0 <= jacdynl_1_1 <= 1079 }
  // Read schedule : { jacdynl_1_update_0_sm161_0243[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 48] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_stg14_FIFO_buf9295_sm168_0257[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 47] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079 }
  auto value_stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_sm168_0257_113 = stg14_FIFO_buf92.stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_sm168_0257_113_to_stg14_FIFO_buf92_jacdynl_1_update_0_sm161_0243_140.peek(/* one reader or all rams */ 0);
  return value_stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_sm168_0257_113;
  return 0;
}

// # of bundles = 2
// jacdynl_1_update_0_sm161_0243_read
//	stg14_FIFO_buf92_jacdynl_1_update_0_sm161_0243_140
inline hw_uint<16> stg14_FIFO_buf92_jacdynl_1_update_0_sm161_0243_read_bundle_read(stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int jacdynl_1_0, int jacdynl_1_1, int dynamic_address) {
  // # of ports in bundle: 1
    // stg14_FIFO_buf92_jacdynl_1_update_0_sm161_0243_140

	hw_uint<16> result;
	hw_uint<16> stg14_FIFO_buf92_jacdynl_1_update_0_sm161_0243_140_res = stg14_FIFO_buf92_jacdynl_1_update_0_sm161_0243_140_select(stg14_FIFO_buf92, root, jacdynl_1_0, jacdynl_1_1, dynamic_address);
	set_at<0, 16>(result, stg14_FIFO_buf92_jacdynl_1_update_0_sm161_0243_140_res);
	return result;
}

// load_to_stg14_FIFO_buf9295_sm168_0257_write
//	stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_sm168_0257_113
inline void stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_sm168_0257_write_bundle_write(hw_uint<16>& load_to_stg14_FIFO_buf9295_sm168_0257_write, stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int stg14_to_gp_128_ld94, int stg14_to_gp_128_ld93, int dynamic_address) {
	hw_uint<16> stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_sm168_0257_113_res = load_to_stg14_FIFO_buf9295_sm168_0257_write.extract<0, 15>();
	stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_sm168_0257_113_write(stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_sm168_0257_113_res, stg14_FIFO_buf92, root, stg14_to_gp_128_ld94, stg14_to_gp_128_ld93, dynamic_address);
}

struct stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109_merged_banks_4_cache {
	// RAM Box: {[0, 1092], [-13, 1931]}
	// Capacity: 2188
	// # of read delays: 5
  // 0, 1, 1093, 1094, 2187
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1091> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 1092> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1092() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1093() {
		return f4;
	}

	inline hw_uint<16> peek_1094() {
		return f6;
	}

	inline hw_uint<16> peek_2186() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_2187() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1092
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1092 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1091
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1091 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg1_FIFO_buf72_cache {
  // Reader addrs...
    // { stg2_update_0_sm148_0217[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[stg2_1, -13 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 1091 }
    // { stg2_update_0_sm148_0217[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 1091 }
    // { stg2_update_0_sm148_0217[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 1091 }
    // { stg2_update_0_sm148_0217[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[stg2_1, -11 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 1091 }
  // # of banks: 1
  stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109_merged_banks_4_cache stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109_merged_banks_4;
};



inline void stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109_write(hw_uint<16>& stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109, stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg1_to_gp_98_ld74, int stg1_to_gp_98_ld73, int dynamic_address) {
  stg1_FIFO_buf72.stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109_merged_banks_4.push(stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109);
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_update_0_sm148_0217_36_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_update_0_sm148_0217_36 read pattern: { stg2_update_0_sm148_0217[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[stg2_1, -13 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 1091 }
  // Read schedule : { stg2_update_0_sm148_0217[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 1091 }
  // Write schedule: { load_to_stg1_FIFO_buf7275_sm141_0203[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 1092 }
  auto value_stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109 = stg1_FIFO_buf72.stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109_merged_banks_4.peek_2187();
  return value_stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_update_0_sm148_0217_37_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_update_0_sm148_0217_37 read pattern: { stg2_update_0_sm148_0217[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 1091 }
  // Read schedule : { stg2_update_0_sm148_0217[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 1091 }
  // Write schedule: { load_to_stg1_FIFO_buf7275_sm141_0203[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 1092 }
  auto value_stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109 = stg1_FIFO_buf72.stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109_merged_banks_4.peek_1094();
  return value_stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_update_0_sm148_0217_38_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_update_0_sm148_0217_38 read pattern: { stg2_update_0_sm148_0217[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 1091 }
  // Read schedule : { stg2_update_0_sm148_0217[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 1091 }
  // Write schedule: { load_to_stg1_FIFO_buf7275_sm141_0203[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 1092 }
  auto value_stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109 = stg1_FIFO_buf72.stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109_merged_banks_4.peek_1093();
  return value_stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_update_0_sm148_0217_39_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_update_0_sm148_0217_39 read pattern: { stg2_update_0_sm148_0217[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[stg2_1, -11 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 1091 }
  // Read schedule : { stg2_update_0_sm148_0217[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 1091 }
  // Write schedule: { load_to_stg1_FIFO_buf7275_sm141_0203[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 1092 }
  auto value_stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109 = stg1_FIFO_buf72.stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109_merged_banks_4.peek_1();
  return value_stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109;
  return 0;
}

// # of bundles = 2
// load_to_stg1_FIFO_buf7275_sm141_0203_write
//	stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109
inline void stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_write_bundle_write(hw_uint<16>& load_to_stg1_FIFO_buf7275_sm141_0203_write, stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg1_to_gp_98_ld74, int stg1_to_gp_98_ld73, int dynamic_address) {
	hw_uint<16> stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109_res = load_to_stg1_FIFO_buf7275_sm141_0203_write.extract<0, 15>();
	stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109_write(stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_109_res, stg1_FIFO_buf72, root, stg1_to_gp_98_ld74, stg1_to_gp_98_ld73, dynamic_address);
}

// stg2_update_0_sm148_0217_read
//	stg1_FIFO_buf72_stg2_update_0_sm148_0217_36
//	stg1_FIFO_buf72_stg2_update_0_sm148_0217_37
//	stg1_FIFO_buf72_stg2_update_0_sm148_0217_38
//	stg1_FIFO_buf72_stg2_update_0_sm148_0217_39
inline hw_uint<64> stg1_FIFO_buf72_stg2_update_0_sm148_0217_read_bundle_read(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg1_FIFO_buf72_stg2_update_0_sm148_0217_36
    // stg1_FIFO_buf72_stg2_update_0_sm148_0217_37
    // stg1_FIFO_buf72_stg2_update_0_sm148_0217_38
    // stg1_FIFO_buf72_stg2_update_0_sm148_0217_39

	hw_uint<64> result;
	hw_uint<16> stg1_FIFO_buf72_stg2_update_0_sm148_0217_36_res = stg1_FIFO_buf72_stg2_update_0_sm148_0217_36_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<0, 64>(result, stg1_FIFO_buf72_stg2_update_0_sm148_0217_36_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_update_0_sm148_0217_37_res = stg1_FIFO_buf72_stg2_update_0_sm148_0217_37_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<16, 64>(result, stg1_FIFO_buf72_stg2_update_0_sm148_0217_37_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_update_0_sm148_0217_38_res = stg1_FIFO_buf72_stg2_update_0_sm148_0217_38_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<32, 64>(result, stg1_FIFO_buf72_stg2_update_0_sm148_0217_38_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_update_0_sm148_0217_39_res = stg1_FIFO_buf72_stg2_update_0_sm148_0217_39_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<48, 64>(result, stg1_FIFO_buf72_stg2_update_0_sm148_0217_39_res);
	return result;
}

struct stg2_stg2_update_0_sm148_0217_35_to_stg2_load_to_stg2_to_gp_103235_sm135_0191_104_cache {
	// RAM Box: {[0, 1091], [-12, 1931]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stg2_cache {
  // Reader addrs...
    // { load_to_stg2_to_gp_103235_sm135_0191[root = 0, stg2_ld34, stg2_ld33] -> stg2[stg2_ld33, -12 + stg2_ld34] : 0 <= stg2_ld34 <= 1943 and 0 <= stg2_ld33 <= 1091 }
  // # of banks: 1
  stg2_stg2_update_0_sm148_0217_35_to_stg2_load_to_stg2_to_gp_103235_sm135_0191_104_cache stg2_stg2_update_0_sm148_0217_35_to_stg2_load_to_stg2_to_gp_103235_sm135_0191_104;
};



inline void stg2_stg2_update_0_sm148_0217_35_write(hw_uint<16>& stg2_stg2_update_0_sm148_0217_35, stg2_cache& stg2, int root, int stg2_0, int stg2_1, int dynamic_address) {
  stg2.stg2_stg2_update_0_sm148_0217_35_to_stg2_load_to_stg2_to_gp_103235_sm135_0191_104.push(stg2_stg2_update_0_sm148_0217_35);
}

inline hw_uint<16> stg2_load_to_stg2_to_gp_103235_sm135_0191_104_select(stg2_cache& stg2, int root, int stg2_ld34, int stg2_ld33, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_load_to_stg2_to_gp_103235_sm135_0191_104 read pattern: { load_to_stg2_to_gp_103235_sm135_0191[root = 0, stg2_ld34, stg2_ld33] -> stg2[stg2_ld33, -12 + stg2_ld34] : 0 <= stg2_ld34 <= 1943 and 0 <= stg2_ld33 <= 1091 }
  // Read schedule : { load_to_stg2_to_gp_103235_sm135_0191[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 10] : 0 <= d1 <= 1943 and 0 <= d2 <= 1091 }
  // Write schedule: { stg2_update_0_sm148_0217[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 1091 }
  auto value_stg2_stg2_update_0_sm148_0217_35 = stg2.stg2_stg2_update_0_sm148_0217_35_to_stg2_load_to_stg2_to_gp_103235_sm135_0191_104.peek(/* one reader or all rams */ 0);
  return value_stg2_stg2_update_0_sm148_0217_35;
  return 0;
}

// # of bundles = 2
// load_to_stg2_to_gp_103235_sm135_0191_read
//	stg2_load_to_stg2_to_gp_103235_sm135_0191_104
inline hw_uint<16> stg2_load_to_stg2_to_gp_103235_sm135_0191_read_bundle_read(stg2_cache& stg2, int root, int stg2_ld34, int stg2_ld33, int dynamic_address) {
  // # of ports in bundle: 1
    // stg2_load_to_stg2_to_gp_103235_sm135_0191_104

	hw_uint<16> result;
	hw_uint<16> stg2_load_to_stg2_to_gp_103235_sm135_0191_104_res = stg2_load_to_stg2_to_gp_103235_sm135_0191_104_select(stg2, root, stg2_ld34, stg2_ld33, dynamic_address);
	set_at<0, 16>(result, stg2_load_to_stg2_to_gp_103235_sm135_0191_104_res);
	return result;
}

// stg2_update_0_sm148_0217_write
//	stg2_stg2_update_0_sm148_0217_35
inline void stg2_stg2_update_0_sm148_0217_write_bundle_write(hw_uint<16>& stg2_update_0_sm148_0217_write, stg2_cache& stg2, int root, int stg2_0, int stg2_1, int dynamic_address) {
	hw_uint<16> stg2_stg2_update_0_sm148_0217_35_res = stg2_update_0_sm148_0217_write.extract<0, 15>();
	stg2_stg2_update_0_sm148_0217_35_write(stg2_stg2_update_0_sm148_0217_35_res, stg2, root, stg2_0, stg2_1, dynamic_address);
}

struct stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105_merged_banks_4_cache {
	// RAM Box: {[0, 1091], [-12, 1930]}
	// Capacity: 2186
	// # of read delays: 5
  // 0, 1, 1092, 1093, 2185
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1090> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 1091> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1091() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1092() {
		return f4;
	}

	inline hw_uint<16> peek_1093() {
		return f6;
	}

	inline hw_uint<16> peek_2184() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_2185() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1091
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1091 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1090
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1090 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_FIFO_buf96_cache {
  // Reader addrs...
    // { stg3_update_0_sm149_0219[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[stg3_1, -12 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 1090 }
    // { stg3_update_0_sm149_0219[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 1090 }
    // { stg3_update_0_sm149_0219[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 1090 }
    // { stg3_update_0_sm149_0219[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[stg3_1, -10 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 1090 }
  // # of banks: 1
  stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105_merged_banks_4_cache stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105_merged_banks_4;
};



inline void stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105_write(hw_uint<16>& stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105, stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg2_to_gp_1032_ld98, int stg2_to_gp_1032_ld97, int dynamic_address) {
  stg2_FIFO_buf96.stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105_merged_banks_4.push(stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105);
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_update_0_sm149_0219_31_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_update_0_sm149_0219_31 read pattern: { stg3_update_0_sm149_0219[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[stg3_1, -12 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 1090 }
  // Read schedule : { stg3_update_0_sm149_0219[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 1090 }
  // Write schedule: { load_to_stg2_FIFO_buf9699_sm143_0207[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 1091 }
  auto value_stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105 = stg2_FIFO_buf96.stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105_merged_banks_4.peek_2185();
  return value_stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_update_0_sm149_0219_32_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_update_0_sm149_0219_32 read pattern: { stg3_update_0_sm149_0219[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 1090 }
  // Read schedule : { stg3_update_0_sm149_0219[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 1090 }
  // Write schedule: { load_to_stg2_FIFO_buf9699_sm143_0207[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 1091 }
  auto value_stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105 = stg2_FIFO_buf96.stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105_merged_banks_4.peek_1093();
  return value_stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_update_0_sm149_0219_33_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_update_0_sm149_0219_33 read pattern: { stg3_update_0_sm149_0219[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 1090 }
  // Read schedule : { stg3_update_0_sm149_0219[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 1090 }
  // Write schedule: { load_to_stg2_FIFO_buf9699_sm143_0207[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 1091 }
  auto value_stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105 = stg2_FIFO_buf96.stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105_merged_banks_4.peek_1092();
  return value_stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_update_0_sm149_0219_34_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_update_0_sm149_0219_34 read pattern: { stg3_update_0_sm149_0219[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[stg3_1, -10 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 1090 }
  // Read schedule : { stg3_update_0_sm149_0219[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 1090 }
  // Write schedule: { load_to_stg2_FIFO_buf9699_sm143_0207[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 1091 }
  auto value_stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105 = stg2_FIFO_buf96.stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105_merged_banks_4.peek_1();
  return value_stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105;
  return 0;
}

// # of bundles = 2
// load_to_stg2_FIFO_buf9699_sm143_0207_write
//	stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105
inline void stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_write_bundle_write(hw_uint<16>& load_to_stg2_FIFO_buf9699_sm143_0207_write, stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg2_to_gp_1032_ld98, int stg2_to_gp_1032_ld97, int dynamic_address) {
	hw_uint<16> stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105_res = load_to_stg2_FIFO_buf9699_sm143_0207_write.extract<0, 15>();
	stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105_write(stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_105_res, stg2_FIFO_buf96, root, stg2_to_gp_1032_ld98, stg2_to_gp_1032_ld97, dynamic_address);
}

// stg3_update_0_sm149_0219_read
//	stg2_FIFO_buf96_stg3_update_0_sm149_0219_31
//	stg2_FIFO_buf96_stg3_update_0_sm149_0219_32
//	stg2_FIFO_buf96_stg3_update_0_sm149_0219_33
//	stg2_FIFO_buf96_stg3_update_0_sm149_0219_34
inline hw_uint<64> stg2_FIFO_buf96_stg3_update_0_sm149_0219_read_bundle_read(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg2_FIFO_buf96_stg3_update_0_sm149_0219_31
    // stg2_FIFO_buf96_stg3_update_0_sm149_0219_32
    // stg2_FIFO_buf96_stg3_update_0_sm149_0219_33
    // stg2_FIFO_buf96_stg3_update_0_sm149_0219_34

	hw_uint<64> result;
	hw_uint<16> stg2_FIFO_buf96_stg3_update_0_sm149_0219_31_res = stg2_FIFO_buf96_stg3_update_0_sm149_0219_31_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<0, 64>(result, stg2_FIFO_buf96_stg3_update_0_sm149_0219_31_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_update_0_sm149_0219_32_res = stg2_FIFO_buf96_stg3_update_0_sm149_0219_32_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<16, 64>(result, stg2_FIFO_buf96_stg3_update_0_sm149_0219_32_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_update_0_sm149_0219_33_res = stg2_FIFO_buf96_stg3_update_0_sm149_0219_33_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<32, 64>(result, stg2_FIFO_buf96_stg3_update_0_sm149_0219_33_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_update_0_sm149_0219_34_res = stg2_FIFO_buf96_stg3_update_0_sm149_0219_34_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<48, 64>(result, stg2_FIFO_buf96_stg3_update_0_sm149_0219_34_res);
	return result;
}

struct stg3_stg3_update_0_sm149_0219_30_to_stg3_load_to_stg3_to_gp_113639_sm164_0249_100_cache {
	// RAM Box: {[0, 1090], [-11, 1930]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stg3_cache {
  // Reader addrs...
    // { load_to_stg3_to_gp_113639_sm164_0249[root = 0, stg3_ld38, stg3_ld37] -> stg3[stg3_ld37, -11 + stg3_ld38] : 0 <= stg3_ld38 <= 1941 and 0 <= stg3_ld37 <= 1090 }
  // # of banks: 1
  stg3_stg3_update_0_sm149_0219_30_to_stg3_load_to_stg3_to_gp_113639_sm164_0249_100_cache stg3_stg3_update_0_sm149_0219_30_to_stg3_load_to_stg3_to_gp_113639_sm164_0249_100;
};



inline void stg3_stg3_update_0_sm149_0219_30_write(hw_uint<16>& stg3_stg3_update_0_sm149_0219_30, stg3_cache& stg3, int root, int stg3_0, int stg3_1, int dynamic_address) {
  stg3.stg3_stg3_update_0_sm149_0219_30_to_stg3_load_to_stg3_to_gp_113639_sm164_0249_100.push(stg3_stg3_update_0_sm149_0219_30);
}

inline hw_uint<16> stg3_load_to_stg3_to_gp_113639_sm164_0249_100_select(stg3_cache& stg3, int root, int stg3_ld38, int stg3_ld37, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_load_to_stg3_to_gp_113639_sm164_0249_100 read pattern: { load_to_stg3_to_gp_113639_sm164_0249[root = 0, stg3_ld38, stg3_ld37] -> stg3[stg3_ld37, -11 + stg3_ld38] : 0 <= stg3_ld38 <= 1941 and 0 <= stg3_ld37 <= 1090 }
  // Read schedule : { load_to_stg3_to_gp_113639_sm164_0249[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 13] : 0 <= d1 <= 1941 and 0 <= d2 <= 1090 }
  // Write schedule: { stg3_update_0_sm149_0219[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 1090 }
  auto value_stg3_stg3_update_0_sm149_0219_30 = stg3.stg3_stg3_update_0_sm149_0219_30_to_stg3_load_to_stg3_to_gp_113639_sm164_0249_100.peek(/* one reader or all rams */ 0);
  return value_stg3_stg3_update_0_sm149_0219_30;
  return 0;
}

// # of bundles = 2
// load_to_stg3_to_gp_113639_sm164_0249_read
//	stg3_load_to_stg3_to_gp_113639_sm164_0249_100
inline hw_uint<16> stg3_load_to_stg3_to_gp_113639_sm164_0249_read_bundle_read(stg3_cache& stg3, int root, int stg3_ld38, int stg3_ld37, int dynamic_address) {
  // # of ports in bundle: 1
    // stg3_load_to_stg3_to_gp_113639_sm164_0249_100

	hw_uint<16> result;
	hw_uint<16> stg3_load_to_stg3_to_gp_113639_sm164_0249_100_res = stg3_load_to_stg3_to_gp_113639_sm164_0249_100_select(stg3, root, stg3_ld38, stg3_ld37, dynamic_address);
	set_at<0, 16>(result, stg3_load_to_stg3_to_gp_113639_sm164_0249_100_res);
	return result;
}

// stg3_update_0_sm149_0219_write
//	stg3_stg3_update_0_sm149_0219_30
inline void stg3_stg3_update_0_sm149_0219_write_bundle_write(hw_uint<16>& stg3_update_0_sm149_0219_write, stg3_cache& stg3, int root, int stg3_0, int stg3_1, int dynamic_address) {
	hw_uint<16> stg3_stg3_update_0_sm149_0219_30_res = stg3_update_0_sm149_0219_write.extract<0, 15>();
	stg3_stg3_update_0_sm149_0219_30_write(stg3_stg3_update_0_sm149_0219_30_res, stg3, root, stg3_0, stg3_1, dynamic_address);
}

struct stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101_merged_banks_4_cache {
	// RAM Box: {[0, 1090], [-11, 1929]}
	// Capacity: 2184
	// # of read delays: 5
  // 0, 1, 1091, 1092, 2183
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1089> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 1090> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1090() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1091() {
		return f4;
	}

	inline hw_uint<16> peek_1092() {
		return f6;
	}

	inline hw_uint<16> peek_2182() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_2183() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1090
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1090 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1089
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1089 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_FIFO_buf100_cache {
  // Reader addrs...
    // { stg4_update_0_sm150_0221[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[stg4_1, -11 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 1089 }
    // { stg4_update_0_sm150_0221[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 1089 }
    // { stg4_update_0_sm150_0221[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 1089 }
    // { stg4_update_0_sm150_0221[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[stg4_1, -9 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 1089 }
  // # of banks: 1
  stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101_merged_banks_4_cache stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101_merged_banks_4;
};



inline void stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101_write(hw_uint<16>& stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101, stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg3_to_gp_1136_ld102, int stg3_to_gp_1136_ld101, int dynamic_address) {
  stg3_FIFO_buf100.stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101_merged_banks_4.push(stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101);
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_update_0_sm150_0221_26_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_update_0_sm150_0221_26 read pattern: { stg4_update_0_sm150_0221[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[stg4_1, -11 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 1089 }
  // Read schedule : { stg4_update_0_sm150_0221[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 1089 }
  // Write schedule: { load_to_stg3_FIFO_buf100103_sm175_0271[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 1090 }
  auto value_stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101 = stg3_FIFO_buf100.stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101_merged_banks_4.peek_2183();
  return value_stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_update_0_sm150_0221_27_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_update_0_sm150_0221_27 read pattern: { stg4_update_0_sm150_0221[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 1089 }
  // Read schedule : { stg4_update_0_sm150_0221[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 1089 }
  // Write schedule: { load_to_stg3_FIFO_buf100103_sm175_0271[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 1090 }
  auto value_stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101 = stg3_FIFO_buf100.stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101_merged_banks_4.peek_1092();
  return value_stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_update_0_sm150_0221_28_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_update_0_sm150_0221_28 read pattern: { stg4_update_0_sm150_0221[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 1089 }
  // Read schedule : { stg4_update_0_sm150_0221[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 1089 }
  // Write schedule: { load_to_stg3_FIFO_buf100103_sm175_0271[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 1090 }
  auto value_stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101 = stg3_FIFO_buf100.stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101_merged_banks_4.peek_1091();
  return value_stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_update_0_sm150_0221_29_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_update_0_sm150_0221_29 read pattern: { stg4_update_0_sm150_0221[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[stg4_1, -9 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 1089 }
  // Read schedule : { stg4_update_0_sm150_0221[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 1089 }
  // Write schedule: { load_to_stg3_FIFO_buf100103_sm175_0271[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 1090 }
  auto value_stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101 = stg3_FIFO_buf100.stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101_merged_banks_4.peek_1();
  return value_stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101;
  return 0;
}

// # of bundles = 2
// load_to_stg3_FIFO_buf100103_sm175_0271_write
//	stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101
inline void stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_write_bundle_write(hw_uint<16>& load_to_stg3_FIFO_buf100103_sm175_0271_write, stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg3_to_gp_1136_ld102, int stg3_to_gp_1136_ld101, int dynamic_address) {
	hw_uint<16> stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101_res = load_to_stg3_FIFO_buf100103_sm175_0271_write.extract<0, 15>();
	stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101_write(stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_101_res, stg3_FIFO_buf100, root, stg3_to_gp_1136_ld102, stg3_to_gp_1136_ld101, dynamic_address);
}

// stg4_update_0_sm150_0221_read
//	stg3_FIFO_buf100_stg4_update_0_sm150_0221_26
//	stg3_FIFO_buf100_stg4_update_0_sm150_0221_27
//	stg3_FIFO_buf100_stg4_update_0_sm150_0221_28
//	stg3_FIFO_buf100_stg4_update_0_sm150_0221_29
inline hw_uint<64> stg3_FIFO_buf100_stg4_update_0_sm150_0221_read_bundle_read(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg3_FIFO_buf100_stg4_update_0_sm150_0221_26
    // stg3_FIFO_buf100_stg4_update_0_sm150_0221_27
    // stg3_FIFO_buf100_stg4_update_0_sm150_0221_28
    // stg3_FIFO_buf100_stg4_update_0_sm150_0221_29

	hw_uint<64> result;
	hw_uint<16> stg3_FIFO_buf100_stg4_update_0_sm150_0221_26_res = stg3_FIFO_buf100_stg4_update_0_sm150_0221_26_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<0, 64>(result, stg3_FIFO_buf100_stg4_update_0_sm150_0221_26_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_update_0_sm150_0221_27_res = stg3_FIFO_buf100_stg4_update_0_sm150_0221_27_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<16, 64>(result, stg3_FIFO_buf100_stg4_update_0_sm150_0221_27_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_update_0_sm150_0221_28_res = stg3_FIFO_buf100_stg4_update_0_sm150_0221_28_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<32, 64>(result, stg3_FIFO_buf100_stg4_update_0_sm150_0221_28_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_update_0_sm150_0221_29_res = stg3_FIFO_buf100_stg4_update_0_sm150_0221_29_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<48, 64>(result, stg3_FIFO_buf100_stg4_update_0_sm150_0221_29_res);
	return result;
}

struct stg4_stg4_update_0_sm150_0221_25_to_stg4_load_to_stg4_to_gp_124043_sm136_0193_96_cache {
	// RAM Box: {[0, 1089], [-10, 1929]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stg4_cache {
  // Reader addrs...
    // { load_to_stg4_to_gp_124043_sm136_0193[root = 0, stg4_ld42, stg4_ld41] -> stg4[stg4_ld41, -10 + stg4_ld42] : 0 <= stg4_ld42 <= 1939 and 0 <= stg4_ld41 <= 1089 }
  // # of banks: 1
  stg4_stg4_update_0_sm150_0221_25_to_stg4_load_to_stg4_to_gp_124043_sm136_0193_96_cache stg4_stg4_update_0_sm150_0221_25_to_stg4_load_to_stg4_to_gp_124043_sm136_0193_96;
};



inline void stg4_stg4_update_0_sm150_0221_25_write(hw_uint<16>& stg4_stg4_update_0_sm150_0221_25, stg4_cache& stg4, int root, int stg4_0, int stg4_1, int dynamic_address) {
  stg4.stg4_stg4_update_0_sm150_0221_25_to_stg4_load_to_stg4_to_gp_124043_sm136_0193_96.push(stg4_stg4_update_0_sm150_0221_25);
}

inline hw_uint<16> stg4_load_to_stg4_to_gp_124043_sm136_0193_96_select(stg4_cache& stg4, int root, int stg4_ld42, int stg4_ld41, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_load_to_stg4_to_gp_124043_sm136_0193_96 read pattern: { load_to_stg4_to_gp_124043_sm136_0193[root = 0, stg4_ld42, stg4_ld41] -> stg4[stg4_ld41, -10 + stg4_ld42] : 0 <= stg4_ld42 <= 1939 and 0 <= stg4_ld41 <= 1089 }
  // Read schedule : { load_to_stg4_to_gp_124043_sm136_0193[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 16] : 0 <= d1 <= 1939 and 0 <= d2 <= 1089 }
  // Write schedule: { stg4_update_0_sm150_0221[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 1089 }
  auto value_stg4_stg4_update_0_sm150_0221_25 = stg4.stg4_stg4_update_0_sm150_0221_25_to_stg4_load_to_stg4_to_gp_124043_sm136_0193_96.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_sm150_0221_25;
  return 0;
}

// # of bundles = 2
// load_to_stg4_to_gp_124043_sm136_0193_read
//	stg4_load_to_stg4_to_gp_124043_sm136_0193_96
inline hw_uint<16> stg4_load_to_stg4_to_gp_124043_sm136_0193_read_bundle_read(stg4_cache& stg4, int root, int stg4_ld42, int stg4_ld41, int dynamic_address) {
  // # of ports in bundle: 1
    // stg4_load_to_stg4_to_gp_124043_sm136_0193_96

	hw_uint<16> result;
	hw_uint<16> stg4_load_to_stg4_to_gp_124043_sm136_0193_96_res = stg4_load_to_stg4_to_gp_124043_sm136_0193_96_select(stg4, root, stg4_ld42, stg4_ld41, dynamic_address);
	set_at<0, 16>(result, stg4_load_to_stg4_to_gp_124043_sm136_0193_96_res);
	return result;
}

// stg4_update_0_sm150_0221_write
//	stg4_stg4_update_0_sm150_0221_25
inline void stg4_stg4_update_0_sm150_0221_write_bundle_write(hw_uint<16>& stg4_update_0_sm150_0221_write, stg4_cache& stg4, int root, int stg4_0, int stg4_1, int dynamic_address) {
	hw_uint<16> stg4_stg4_update_0_sm150_0221_25_res = stg4_update_0_sm150_0221_write.extract<0, 15>();
	stg4_stg4_update_0_sm150_0221_25_write(stg4_stg4_update_0_sm150_0221_25_res, stg4, root, stg4_0, stg4_1, dynamic_address);
}

struct stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97_merged_banks_4_cache {
	// RAM Box: {[0, 1089], [-10, 1928]}
	// Capacity: 2182
	// # of read delays: 5
  // 0, 1, 1090, 1091, 2181
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1088> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 1089> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1089() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1090() {
		return f4;
	}

	inline hw_uint<16> peek_1091() {
		return f6;
	}

	inline hw_uint<16> peek_2180() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_2181() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1089
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1089 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1088
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1088 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg4_FIFO_buf104_cache {
  // Reader addrs...
    // { stg5_update_0_sm151_0223[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[stg5_1, -10 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 1088 }
    // { stg5_update_0_sm151_0223[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 1088 }
    // { stg5_update_0_sm151_0223[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 1088 }
    // { stg5_update_0_sm151_0223[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[stg5_1, -8 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 1088 }
  // # of banks: 1
  stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97_merged_banks_4_cache stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97_merged_banks_4;
};



inline void stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97_write(hw_uint<16>& stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97, stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg4_to_gp_1240_ld106, int stg4_to_gp_1240_ld105, int dynamic_address) {
  stg4_FIFO_buf104.stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97_merged_banks_4.push(stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97);
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_update_0_sm151_0223_21_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_update_0_sm151_0223_21 read pattern: { stg5_update_0_sm151_0223[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[stg5_1, -10 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 1088 }
  // Read schedule : { stg5_update_0_sm151_0223[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 1088 }
  // Write schedule: { load_to_stg4_FIFO_buf104107_sm128_0177[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 1089 }
  auto value_stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97 = stg4_FIFO_buf104.stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97_merged_banks_4.peek_2181();
  return value_stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_update_0_sm151_0223_22_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_update_0_sm151_0223_22 read pattern: { stg5_update_0_sm151_0223[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 1088 }
  // Read schedule : { stg5_update_0_sm151_0223[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 1088 }
  // Write schedule: { load_to_stg4_FIFO_buf104107_sm128_0177[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 1089 }
  auto value_stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97 = stg4_FIFO_buf104.stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97_merged_banks_4.peek_1091();
  return value_stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_update_0_sm151_0223_23_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_update_0_sm151_0223_23 read pattern: { stg5_update_0_sm151_0223[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 1088 }
  // Read schedule : { stg5_update_0_sm151_0223[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 1088 }
  // Write schedule: { load_to_stg4_FIFO_buf104107_sm128_0177[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 1089 }
  auto value_stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97 = stg4_FIFO_buf104.stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97_merged_banks_4.peek_1090();
  return value_stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_update_0_sm151_0223_24_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_update_0_sm151_0223_24 read pattern: { stg5_update_0_sm151_0223[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[stg5_1, -8 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 1088 }
  // Read schedule : { stg5_update_0_sm151_0223[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 1088 }
  // Write schedule: { load_to_stg4_FIFO_buf104107_sm128_0177[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 1089 }
  auto value_stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97 = stg4_FIFO_buf104.stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97_merged_banks_4.peek_1();
  return value_stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97;
  return 0;
}

// # of bundles = 2
// load_to_stg4_FIFO_buf104107_sm128_0177_write
//	stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97
inline void stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_write_bundle_write(hw_uint<16>& load_to_stg4_FIFO_buf104107_sm128_0177_write, stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg4_to_gp_1240_ld106, int stg4_to_gp_1240_ld105, int dynamic_address) {
	hw_uint<16> stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97_res = load_to_stg4_FIFO_buf104107_sm128_0177_write.extract<0, 15>();
	stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97_write(stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_97_res, stg4_FIFO_buf104, root, stg4_to_gp_1240_ld106, stg4_to_gp_1240_ld105, dynamic_address);
}

// stg5_update_0_sm151_0223_read
//	stg4_FIFO_buf104_stg5_update_0_sm151_0223_21
//	stg4_FIFO_buf104_stg5_update_0_sm151_0223_22
//	stg4_FIFO_buf104_stg5_update_0_sm151_0223_23
//	stg4_FIFO_buf104_stg5_update_0_sm151_0223_24
inline hw_uint<64> stg4_FIFO_buf104_stg5_update_0_sm151_0223_read_bundle_read(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg4_FIFO_buf104_stg5_update_0_sm151_0223_21
    // stg4_FIFO_buf104_stg5_update_0_sm151_0223_22
    // stg4_FIFO_buf104_stg5_update_0_sm151_0223_23
    // stg4_FIFO_buf104_stg5_update_0_sm151_0223_24

	hw_uint<64> result;
	hw_uint<16> stg4_FIFO_buf104_stg5_update_0_sm151_0223_21_res = stg4_FIFO_buf104_stg5_update_0_sm151_0223_21_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<0, 64>(result, stg4_FIFO_buf104_stg5_update_0_sm151_0223_21_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_update_0_sm151_0223_22_res = stg4_FIFO_buf104_stg5_update_0_sm151_0223_22_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<16, 64>(result, stg4_FIFO_buf104_stg5_update_0_sm151_0223_22_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_update_0_sm151_0223_23_res = stg4_FIFO_buf104_stg5_update_0_sm151_0223_23_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<32, 64>(result, stg4_FIFO_buf104_stg5_update_0_sm151_0223_23_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_update_0_sm151_0223_24_res = stg4_FIFO_buf104_stg5_update_0_sm151_0223_24_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<48, 64>(result, stg4_FIFO_buf104_stg5_update_0_sm151_0223_24_res);
	return result;
}

struct stg5_stg5_update_0_sm151_0223_20_to_stg5_load_to_stg5_to_gp_134447_sm165_0251_92_cache {
	// RAM Box: {[0, 1088], [-9, 1928]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stg5_cache {
  // Reader addrs...
    // { load_to_stg5_to_gp_134447_sm165_0251[root = 0, stg5_ld46, stg5_ld45] -> stg5[stg5_ld45, -9 + stg5_ld46] : 0 <= stg5_ld46 <= 1937 and 0 <= stg5_ld45 <= 1088 }
  // # of banks: 1
  stg5_stg5_update_0_sm151_0223_20_to_stg5_load_to_stg5_to_gp_134447_sm165_0251_92_cache stg5_stg5_update_0_sm151_0223_20_to_stg5_load_to_stg5_to_gp_134447_sm165_0251_92;
};



inline void stg5_stg5_update_0_sm151_0223_20_write(hw_uint<16>& stg5_stg5_update_0_sm151_0223_20, stg5_cache& stg5, int root, int stg5_0, int stg5_1, int dynamic_address) {
  stg5.stg5_stg5_update_0_sm151_0223_20_to_stg5_load_to_stg5_to_gp_134447_sm165_0251_92.push(stg5_stg5_update_0_sm151_0223_20);
}

inline hw_uint<16> stg5_load_to_stg5_to_gp_134447_sm165_0251_92_select(stg5_cache& stg5, int root, int stg5_ld46, int stg5_ld45, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_load_to_stg5_to_gp_134447_sm165_0251_92 read pattern: { load_to_stg5_to_gp_134447_sm165_0251[root = 0, stg5_ld46, stg5_ld45] -> stg5[stg5_ld45, -9 + stg5_ld46] : 0 <= stg5_ld46 <= 1937 and 0 <= stg5_ld45 <= 1088 }
  // Read schedule : { load_to_stg5_to_gp_134447_sm165_0251[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 19] : 0 <= d1 <= 1937 and 0 <= d2 <= 1088 }
  // Write schedule: { stg5_update_0_sm151_0223[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 1088 }
  auto value_stg5_stg5_update_0_sm151_0223_20 = stg5.stg5_stg5_update_0_sm151_0223_20_to_stg5_load_to_stg5_to_gp_134447_sm165_0251_92.peek(/* one reader or all rams */ 0);
  return value_stg5_stg5_update_0_sm151_0223_20;
  return 0;
}

// # of bundles = 2
// load_to_stg5_to_gp_134447_sm165_0251_read
//	stg5_load_to_stg5_to_gp_134447_sm165_0251_92
inline hw_uint<16> stg5_load_to_stg5_to_gp_134447_sm165_0251_read_bundle_read(stg5_cache& stg5, int root, int stg5_ld46, int stg5_ld45, int dynamic_address) {
  // # of ports in bundle: 1
    // stg5_load_to_stg5_to_gp_134447_sm165_0251_92

	hw_uint<16> result;
	hw_uint<16> stg5_load_to_stg5_to_gp_134447_sm165_0251_92_res = stg5_load_to_stg5_to_gp_134447_sm165_0251_92_select(stg5, root, stg5_ld46, stg5_ld45, dynamic_address);
	set_at<0, 16>(result, stg5_load_to_stg5_to_gp_134447_sm165_0251_92_res);
	return result;
}

// stg5_update_0_sm151_0223_write
//	stg5_stg5_update_0_sm151_0223_20
inline void stg5_stg5_update_0_sm151_0223_write_bundle_write(hw_uint<16>& stg5_update_0_sm151_0223_write, stg5_cache& stg5, int root, int stg5_0, int stg5_1, int dynamic_address) {
	hw_uint<16> stg5_stg5_update_0_sm151_0223_20_res = stg5_update_0_sm151_0223_write.extract<0, 15>();
	stg5_stg5_update_0_sm151_0223_20_write(stg5_stg5_update_0_sm151_0223_20_res, stg5, root, stg5_0, stg5_1, dynamic_address);
}

struct stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93_merged_banks_4_cache {
	// RAM Box: {[0, 1088], [-9, 1927]}
	// Capacity: 2180
	// # of read delays: 5
  // 0, 1, 1089, 1090, 2179
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1087> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 1088> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1088() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1089() {
		return f4;
	}

	inline hw_uint<16> peek_1090() {
		return f6;
	}

	inline hw_uint<16> peek_2178() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_2179() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1088
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1088 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1087
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1087 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_FIFO_buf108_cache {
  // Reader addrs...
    // { stg6_update_0_sm152_0225[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[stg6_1, -9 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 1087 }
    // { stg6_update_0_sm152_0225[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 1087 }
    // { stg6_update_0_sm152_0225[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 1087 }
    // { stg6_update_0_sm152_0225[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[stg6_1, -7 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 1087 }
  // # of banks: 1
  stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93_merged_banks_4_cache stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93_merged_banks_4;
};



inline void stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93_write(hw_uint<16>& stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93, stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg5_to_gp_1344_ld110, int stg5_to_gp_1344_ld109, int dynamic_address) {
  stg5_FIFO_buf108.stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93_merged_banks_4.push(stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93);
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_update_0_sm152_0225_16_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_update_0_sm152_0225_16 read pattern: { stg6_update_0_sm152_0225[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[stg6_1, -9 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 1087 }
  // Read schedule : { stg6_update_0_sm152_0225[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 1087 }
  // Write schedule: { load_to_stg5_FIFO_buf108111_sm170_0261[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 1088 }
  auto value_stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93 = stg5_FIFO_buf108.stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93_merged_banks_4.peek_2179();
  return value_stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_update_0_sm152_0225_17_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_update_0_sm152_0225_17 read pattern: { stg6_update_0_sm152_0225[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 1087 }
  // Read schedule : { stg6_update_0_sm152_0225[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 1087 }
  // Write schedule: { load_to_stg5_FIFO_buf108111_sm170_0261[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 1088 }
  auto value_stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93 = stg5_FIFO_buf108.stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93_merged_banks_4.peek_1090();
  return value_stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_update_0_sm152_0225_18_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_update_0_sm152_0225_18 read pattern: { stg6_update_0_sm152_0225[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 1087 }
  // Read schedule : { stg6_update_0_sm152_0225[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 1087 }
  // Write schedule: { load_to_stg5_FIFO_buf108111_sm170_0261[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 1088 }
  auto value_stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93 = stg5_FIFO_buf108.stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93_merged_banks_4.peek_1089();
  return value_stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_update_0_sm152_0225_19_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_update_0_sm152_0225_19 read pattern: { stg6_update_0_sm152_0225[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[stg6_1, -7 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 1087 }
  // Read schedule : { stg6_update_0_sm152_0225[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 1087 }
  // Write schedule: { load_to_stg5_FIFO_buf108111_sm170_0261[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 1088 }
  auto value_stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93 = stg5_FIFO_buf108.stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93_merged_banks_4.peek_1();
  return value_stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93;
  return 0;
}

// # of bundles = 2
// load_to_stg5_FIFO_buf108111_sm170_0261_write
//	stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93
inline void stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_write_bundle_write(hw_uint<16>& load_to_stg5_FIFO_buf108111_sm170_0261_write, stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg5_to_gp_1344_ld110, int stg5_to_gp_1344_ld109, int dynamic_address) {
	hw_uint<16> stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93_res = load_to_stg5_FIFO_buf108111_sm170_0261_write.extract<0, 15>();
	stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93_write(stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_93_res, stg5_FIFO_buf108, root, stg5_to_gp_1344_ld110, stg5_to_gp_1344_ld109, dynamic_address);
}

// stg6_update_0_sm152_0225_read
//	stg5_FIFO_buf108_stg6_update_0_sm152_0225_16
//	stg5_FIFO_buf108_stg6_update_0_sm152_0225_17
//	stg5_FIFO_buf108_stg6_update_0_sm152_0225_18
//	stg5_FIFO_buf108_stg6_update_0_sm152_0225_19
inline hw_uint<64> stg5_FIFO_buf108_stg6_update_0_sm152_0225_read_bundle_read(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg5_FIFO_buf108_stg6_update_0_sm152_0225_16
    // stg5_FIFO_buf108_stg6_update_0_sm152_0225_17
    // stg5_FIFO_buf108_stg6_update_0_sm152_0225_18
    // stg5_FIFO_buf108_stg6_update_0_sm152_0225_19

	hw_uint<64> result;
	hw_uint<16> stg5_FIFO_buf108_stg6_update_0_sm152_0225_16_res = stg5_FIFO_buf108_stg6_update_0_sm152_0225_16_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<0, 64>(result, stg5_FIFO_buf108_stg6_update_0_sm152_0225_16_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_update_0_sm152_0225_17_res = stg5_FIFO_buf108_stg6_update_0_sm152_0225_17_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<16, 64>(result, stg5_FIFO_buf108_stg6_update_0_sm152_0225_17_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_update_0_sm152_0225_18_res = stg5_FIFO_buf108_stg6_update_0_sm152_0225_18_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<32, 64>(result, stg5_FIFO_buf108_stg6_update_0_sm152_0225_18_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_update_0_sm152_0225_19_res = stg5_FIFO_buf108_stg6_update_0_sm152_0225_19_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<48, 64>(result, stg5_FIFO_buf108_stg6_update_0_sm152_0225_19_res);
	return result;
}

struct stg6_stg6_update_0_sm152_0225_15_to_stg6_load_to_stg6_to_gp_144851_sm137_0195_88_cache {
	// RAM Box: {[0, 1087], [-8, 1927]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stg6_cache {
  // Reader addrs...
    // { load_to_stg6_to_gp_144851_sm137_0195[root = 0, stg6_ld50, stg6_ld49] -> stg6[stg6_ld49, -8 + stg6_ld50] : 0 <= stg6_ld50 <= 1935 and 0 <= stg6_ld49 <= 1087 }
  // # of banks: 1
  stg6_stg6_update_0_sm152_0225_15_to_stg6_load_to_stg6_to_gp_144851_sm137_0195_88_cache stg6_stg6_update_0_sm152_0225_15_to_stg6_load_to_stg6_to_gp_144851_sm137_0195_88;
};



inline void stg6_stg6_update_0_sm152_0225_15_write(hw_uint<16>& stg6_stg6_update_0_sm152_0225_15, stg6_cache& stg6, int root, int stg6_0, int stg6_1, int dynamic_address) {
  stg6.stg6_stg6_update_0_sm152_0225_15_to_stg6_load_to_stg6_to_gp_144851_sm137_0195_88.push(stg6_stg6_update_0_sm152_0225_15);
}

inline hw_uint<16> stg6_load_to_stg6_to_gp_144851_sm137_0195_88_select(stg6_cache& stg6, int root, int stg6_ld50, int stg6_ld49, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_load_to_stg6_to_gp_144851_sm137_0195_88 read pattern: { load_to_stg6_to_gp_144851_sm137_0195[root = 0, stg6_ld50, stg6_ld49] -> stg6[stg6_ld49, -8 + stg6_ld50] : 0 <= stg6_ld50 <= 1935 and 0 <= stg6_ld49 <= 1087 }
  // Read schedule : { load_to_stg6_to_gp_144851_sm137_0195[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 22] : 0 <= d1 <= 1935 and 0 <= d2 <= 1087 }
  // Write schedule: { stg6_update_0_sm152_0225[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 1087 }
  auto value_stg6_stg6_update_0_sm152_0225_15 = stg6.stg6_stg6_update_0_sm152_0225_15_to_stg6_load_to_stg6_to_gp_144851_sm137_0195_88.peek(/* one reader or all rams */ 0);
  return value_stg6_stg6_update_0_sm152_0225_15;
  return 0;
}

// # of bundles = 2
// load_to_stg6_to_gp_144851_sm137_0195_read
//	stg6_load_to_stg6_to_gp_144851_sm137_0195_88
inline hw_uint<16> stg6_load_to_stg6_to_gp_144851_sm137_0195_read_bundle_read(stg6_cache& stg6, int root, int stg6_ld50, int stg6_ld49, int dynamic_address) {
  // # of ports in bundle: 1
    // stg6_load_to_stg6_to_gp_144851_sm137_0195_88

	hw_uint<16> result;
	hw_uint<16> stg6_load_to_stg6_to_gp_144851_sm137_0195_88_res = stg6_load_to_stg6_to_gp_144851_sm137_0195_88_select(stg6, root, stg6_ld50, stg6_ld49, dynamic_address);
	set_at<0, 16>(result, stg6_load_to_stg6_to_gp_144851_sm137_0195_88_res);
	return result;
}

// stg6_update_0_sm152_0225_write
//	stg6_stg6_update_0_sm152_0225_15
inline void stg6_stg6_update_0_sm152_0225_write_bundle_write(hw_uint<16>& stg6_update_0_sm152_0225_write, stg6_cache& stg6, int root, int stg6_0, int stg6_1, int dynamic_address) {
	hw_uint<16> stg6_stg6_update_0_sm152_0225_15_res = stg6_update_0_sm152_0225_write.extract<0, 15>();
	stg6_stg6_update_0_sm152_0225_15_write(stg6_stg6_update_0_sm152_0225_15_res, stg6, root, stg6_0, stg6_1, dynamic_address);
}

struct stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89_merged_banks_4_cache {
	// RAM Box: {[0, 1087], [-8, 1926]}
	// Capacity: 2178
	// # of read delays: 5
  // 0, 1, 1088, 1089, 2177
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1086> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 1087> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1087() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1088() {
		return f4;
	}

	inline hw_uint<16> peek_1089() {
		return f6;
	}

	inline hw_uint<16> peek_2176() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_2177() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1087
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1087 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1086
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1086 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_FIFO_buf112_cache {
  // Reader addrs...
    // { stg7_update_0_sm153_0227[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[stg7_1, -8 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 1086 }
    // { stg7_update_0_sm153_0227[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 1086 }
    // { stg7_update_0_sm153_0227[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 1086 }
    // { stg7_update_0_sm153_0227[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[stg7_1, -6 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 1086 }
  // # of banks: 1
  stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89_merged_banks_4_cache stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89_merged_banks_4;
};



inline void stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89_write(hw_uint<16>& stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89, stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg6_to_gp_1448_ld114, int stg6_to_gp_1448_ld113, int dynamic_address) {
  stg6_FIFO_buf112.stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89_merged_banks_4.push(stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89);
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_update_0_sm153_0227_11_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_update_0_sm153_0227_11 read pattern: { stg7_update_0_sm153_0227[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[stg7_1, -8 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 1086 }
  // Read schedule : { stg7_update_0_sm153_0227[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 1086 }
  // Write schedule: { load_to_stg6_FIFO_buf112115_sm171_0263[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 1087 }
  auto value_stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89 = stg6_FIFO_buf112.stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89_merged_banks_4.peek_2177();
  return value_stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_update_0_sm153_0227_12_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_update_0_sm153_0227_12 read pattern: { stg7_update_0_sm153_0227[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 1086 }
  // Read schedule : { stg7_update_0_sm153_0227[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 1086 }
  // Write schedule: { load_to_stg6_FIFO_buf112115_sm171_0263[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 1087 }
  auto value_stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89 = stg6_FIFO_buf112.stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89_merged_banks_4.peek_1089();
  return value_stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_update_0_sm153_0227_13_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_update_0_sm153_0227_13 read pattern: { stg7_update_0_sm153_0227[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 1086 }
  // Read schedule : { stg7_update_0_sm153_0227[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 1086 }
  // Write schedule: { load_to_stg6_FIFO_buf112115_sm171_0263[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 1087 }
  auto value_stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89 = stg6_FIFO_buf112.stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89_merged_banks_4.peek_1088();
  return value_stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_update_0_sm153_0227_14_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_update_0_sm153_0227_14 read pattern: { stg7_update_0_sm153_0227[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[stg7_1, -6 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 1086 }
  // Read schedule : { stg7_update_0_sm153_0227[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 1086 }
  // Write schedule: { load_to_stg6_FIFO_buf112115_sm171_0263[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 1087 }
  auto value_stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89 = stg6_FIFO_buf112.stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89_merged_banks_4.peek_1();
  return value_stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89;
  return 0;
}

// # of bundles = 2
// load_to_stg6_FIFO_buf112115_sm171_0263_write
//	stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89
inline void stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_write_bundle_write(hw_uint<16>& load_to_stg6_FIFO_buf112115_sm171_0263_write, stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg6_to_gp_1448_ld114, int stg6_to_gp_1448_ld113, int dynamic_address) {
	hw_uint<16> stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89_res = load_to_stg6_FIFO_buf112115_sm171_0263_write.extract<0, 15>();
	stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89_write(stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_89_res, stg6_FIFO_buf112, root, stg6_to_gp_1448_ld114, stg6_to_gp_1448_ld113, dynamic_address);
}

// stg7_update_0_sm153_0227_read
//	stg6_FIFO_buf112_stg7_update_0_sm153_0227_11
//	stg6_FIFO_buf112_stg7_update_0_sm153_0227_12
//	stg6_FIFO_buf112_stg7_update_0_sm153_0227_13
//	stg6_FIFO_buf112_stg7_update_0_sm153_0227_14
inline hw_uint<64> stg6_FIFO_buf112_stg7_update_0_sm153_0227_read_bundle_read(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg6_FIFO_buf112_stg7_update_0_sm153_0227_11
    // stg6_FIFO_buf112_stg7_update_0_sm153_0227_12
    // stg6_FIFO_buf112_stg7_update_0_sm153_0227_13
    // stg6_FIFO_buf112_stg7_update_0_sm153_0227_14

	hw_uint<64> result;
	hw_uint<16> stg6_FIFO_buf112_stg7_update_0_sm153_0227_11_res = stg6_FIFO_buf112_stg7_update_0_sm153_0227_11_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<0, 64>(result, stg6_FIFO_buf112_stg7_update_0_sm153_0227_11_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_update_0_sm153_0227_12_res = stg6_FIFO_buf112_stg7_update_0_sm153_0227_12_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<16, 64>(result, stg6_FIFO_buf112_stg7_update_0_sm153_0227_12_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_update_0_sm153_0227_13_res = stg6_FIFO_buf112_stg7_update_0_sm153_0227_13_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<32, 64>(result, stg6_FIFO_buf112_stg7_update_0_sm153_0227_13_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_update_0_sm153_0227_14_res = stg6_FIFO_buf112_stg7_update_0_sm153_0227_14_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<48, 64>(result, stg6_FIFO_buf112_stg7_update_0_sm153_0227_14_res);
	return result;
}

struct stg7_stg7_update_0_sm153_0227_10_to_stg7_load_to_stg7_to_gp_155255_sm138_0197_84_cache {
	// RAM Box: {[0, 1086], [-7, 1926]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stg7_cache {
  // Reader addrs...
    // { load_to_stg7_to_gp_155255_sm138_0197[root = 0, stg7_ld54, stg7_ld53] -> stg7[stg7_ld53, -7 + stg7_ld54] : 0 <= stg7_ld54 <= 1933 and 0 <= stg7_ld53 <= 1086 }
  // # of banks: 1
  stg7_stg7_update_0_sm153_0227_10_to_stg7_load_to_stg7_to_gp_155255_sm138_0197_84_cache stg7_stg7_update_0_sm153_0227_10_to_stg7_load_to_stg7_to_gp_155255_sm138_0197_84;
};



inline void stg7_stg7_update_0_sm153_0227_10_write(hw_uint<16>& stg7_stg7_update_0_sm153_0227_10, stg7_cache& stg7, int root, int stg7_0, int stg7_1, int dynamic_address) {
  stg7.stg7_stg7_update_0_sm153_0227_10_to_stg7_load_to_stg7_to_gp_155255_sm138_0197_84.push(stg7_stg7_update_0_sm153_0227_10);
}

inline hw_uint<16> stg7_load_to_stg7_to_gp_155255_sm138_0197_84_select(stg7_cache& stg7, int root, int stg7_ld54, int stg7_ld53, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_load_to_stg7_to_gp_155255_sm138_0197_84 read pattern: { load_to_stg7_to_gp_155255_sm138_0197[root = 0, stg7_ld54, stg7_ld53] -> stg7[stg7_ld53, -7 + stg7_ld54] : 0 <= stg7_ld54 <= 1933 and 0 <= stg7_ld53 <= 1086 }
  // Read schedule : { load_to_stg7_to_gp_155255_sm138_0197[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 25] : 0 <= d1 <= 1933 and 0 <= d2 <= 1086 }
  // Write schedule: { stg7_update_0_sm153_0227[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 1086 }
  auto value_stg7_stg7_update_0_sm153_0227_10 = stg7.stg7_stg7_update_0_sm153_0227_10_to_stg7_load_to_stg7_to_gp_155255_sm138_0197_84.peek(/* one reader or all rams */ 0);
  return value_stg7_stg7_update_0_sm153_0227_10;
  return 0;
}

// # of bundles = 2
// load_to_stg7_to_gp_155255_sm138_0197_read
//	stg7_load_to_stg7_to_gp_155255_sm138_0197_84
inline hw_uint<16> stg7_load_to_stg7_to_gp_155255_sm138_0197_read_bundle_read(stg7_cache& stg7, int root, int stg7_ld54, int stg7_ld53, int dynamic_address) {
  // # of ports in bundle: 1
    // stg7_load_to_stg7_to_gp_155255_sm138_0197_84

	hw_uint<16> result;
	hw_uint<16> stg7_load_to_stg7_to_gp_155255_sm138_0197_84_res = stg7_load_to_stg7_to_gp_155255_sm138_0197_84_select(stg7, root, stg7_ld54, stg7_ld53, dynamic_address);
	set_at<0, 16>(result, stg7_load_to_stg7_to_gp_155255_sm138_0197_84_res);
	return result;
}

// stg7_update_0_sm153_0227_write
//	stg7_stg7_update_0_sm153_0227_10
inline void stg7_stg7_update_0_sm153_0227_write_bundle_write(hw_uint<16>& stg7_update_0_sm153_0227_write, stg7_cache& stg7, int root, int stg7_0, int stg7_1, int dynamic_address) {
	hw_uint<16> stg7_stg7_update_0_sm153_0227_10_res = stg7_update_0_sm153_0227_write.extract<0, 15>();
	stg7_stg7_update_0_sm153_0227_10_write(stg7_stg7_update_0_sm153_0227_10_res, stg7, root, stg7_0, stg7_1, dynamic_address);
}

struct stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85_merged_banks_4_cache {
	// RAM Box: {[0, 1086], [-7, 1925]}
	// Capacity: 2176
	// # of read delays: 5
  // 0, 1, 1087, 1088, 2175
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1085> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 1086> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1086() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1087() {
		return f4;
	}

	inline hw_uint<16> peek_1088() {
		return f6;
	}

	inline hw_uint<16> peek_2174() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_2175() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1086
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1086 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1085
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1085 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_FIFO_buf116_cache {
  // Reader addrs...
    // { stg8_update_0_sm154_0229[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[stg8_1, -7 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 1085 }
    // { stg8_update_0_sm154_0229[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 1085 }
    // { stg8_update_0_sm154_0229[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 1085 }
    // { stg8_update_0_sm154_0229[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[stg8_1, -5 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 1085 }
  // # of banks: 1
  stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85_merged_banks_4_cache stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85_merged_banks_4;
};



inline void stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85_write(hw_uint<16>& stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85, stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg7_to_gp_1552_ld118, int stg7_to_gp_1552_ld117, int dynamic_address) {
  stg7_FIFO_buf116.stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85_merged_banks_4.push(stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85);
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_update_0_sm154_0229_6_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_update_0_sm154_0229_6 read pattern: { stg8_update_0_sm154_0229[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[stg8_1, -7 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 1085 }
  // Read schedule : { stg8_update_0_sm154_0229[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 1085 }
  // Write schedule: { load_to_stg7_FIFO_buf116119_sm144_0209[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 1086 }
  auto value_stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85 = stg7_FIFO_buf116.stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85_merged_banks_4.peek_2175();
  return value_stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_update_0_sm154_0229_7_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_update_0_sm154_0229_7 read pattern: { stg8_update_0_sm154_0229[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 1085 }
  // Read schedule : { stg8_update_0_sm154_0229[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 1085 }
  // Write schedule: { load_to_stg7_FIFO_buf116119_sm144_0209[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 1086 }
  auto value_stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85 = stg7_FIFO_buf116.stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85_merged_banks_4.peek_1088();
  return value_stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_update_0_sm154_0229_8_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_update_0_sm154_0229_8 read pattern: { stg8_update_0_sm154_0229[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 1085 }
  // Read schedule : { stg8_update_0_sm154_0229[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 1085 }
  // Write schedule: { load_to_stg7_FIFO_buf116119_sm144_0209[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 1086 }
  auto value_stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85 = stg7_FIFO_buf116.stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85_merged_banks_4.peek_1087();
  return value_stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_update_0_sm154_0229_9_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_update_0_sm154_0229_9 read pattern: { stg8_update_0_sm154_0229[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[stg8_1, -5 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 1085 }
  // Read schedule : { stg8_update_0_sm154_0229[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 1085 }
  // Write schedule: { load_to_stg7_FIFO_buf116119_sm144_0209[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 1086 }
  auto value_stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85 = stg7_FIFO_buf116.stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85_merged_banks_4.peek_1();
  return value_stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85;
  return 0;
}

// # of bundles = 2
// load_to_stg7_FIFO_buf116119_sm144_0209_write
//	stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85
inline void stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_write_bundle_write(hw_uint<16>& load_to_stg7_FIFO_buf116119_sm144_0209_write, stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg7_to_gp_1552_ld118, int stg7_to_gp_1552_ld117, int dynamic_address) {
	hw_uint<16> stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85_res = load_to_stg7_FIFO_buf116119_sm144_0209_write.extract<0, 15>();
	stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85_write(stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_85_res, stg7_FIFO_buf116, root, stg7_to_gp_1552_ld118, stg7_to_gp_1552_ld117, dynamic_address);
}

// stg8_update_0_sm154_0229_read
//	stg7_FIFO_buf116_stg8_update_0_sm154_0229_6
//	stg7_FIFO_buf116_stg8_update_0_sm154_0229_7
//	stg7_FIFO_buf116_stg8_update_0_sm154_0229_8
//	stg7_FIFO_buf116_stg8_update_0_sm154_0229_9
inline hw_uint<64> stg7_FIFO_buf116_stg8_update_0_sm154_0229_read_bundle_read(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg7_FIFO_buf116_stg8_update_0_sm154_0229_6
    // stg7_FIFO_buf116_stg8_update_0_sm154_0229_7
    // stg7_FIFO_buf116_stg8_update_0_sm154_0229_8
    // stg7_FIFO_buf116_stg8_update_0_sm154_0229_9

	hw_uint<64> result;
	hw_uint<16> stg7_FIFO_buf116_stg8_update_0_sm154_0229_6_res = stg7_FIFO_buf116_stg8_update_0_sm154_0229_6_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<0, 64>(result, stg7_FIFO_buf116_stg8_update_0_sm154_0229_6_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_update_0_sm154_0229_7_res = stg7_FIFO_buf116_stg8_update_0_sm154_0229_7_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<16, 64>(result, stg7_FIFO_buf116_stg8_update_0_sm154_0229_7_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_update_0_sm154_0229_8_res = stg7_FIFO_buf116_stg8_update_0_sm154_0229_8_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<32, 64>(result, stg7_FIFO_buf116_stg8_update_0_sm154_0229_8_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_update_0_sm154_0229_9_res = stg7_FIFO_buf116_stg8_update_0_sm154_0229_9_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<48, 64>(result, stg7_FIFO_buf116_stg8_update_0_sm154_0229_9_res);
	return result;
}

struct stg8_stg8_update_0_sm154_0229_5_to_stg8_load_to_stg8_to_gp_165659_sm166_0253_80_cache {
	// RAM Box: {[0, 1085], [-6, 1925]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stg8_cache {
  // Reader addrs...
    // { load_to_stg8_to_gp_165659_sm166_0253[root = 0, stg8_ld58, stg8_ld57] -> stg8[stg8_ld57, -6 + stg8_ld58] : 0 <= stg8_ld58 <= 1931 and 0 <= stg8_ld57 <= 1085 }
  // # of banks: 1
  stg8_stg8_update_0_sm154_0229_5_to_stg8_load_to_stg8_to_gp_165659_sm166_0253_80_cache stg8_stg8_update_0_sm154_0229_5_to_stg8_load_to_stg8_to_gp_165659_sm166_0253_80;
};



inline void stg8_stg8_update_0_sm154_0229_5_write(hw_uint<16>& stg8_stg8_update_0_sm154_0229_5, stg8_cache& stg8, int root, int stg8_0, int stg8_1, int dynamic_address) {
  stg8.stg8_stg8_update_0_sm154_0229_5_to_stg8_load_to_stg8_to_gp_165659_sm166_0253_80.push(stg8_stg8_update_0_sm154_0229_5);
}

inline hw_uint<16> stg8_load_to_stg8_to_gp_165659_sm166_0253_80_select(stg8_cache& stg8, int root, int stg8_ld58, int stg8_ld57, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_load_to_stg8_to_gp_165659_sm166_0253_80 read pattern: { load_to_stg8_to_gp_165659_sm166_0253[root = 0, stg8_ld58, stg8_ld57] -> stg8[stg8_ld57, -6 + stg8_ld58] : 0 <= stg8_ld58 <= 1931 and 0 <= stg8_ld57 <= 1085 }
  // Read schedule : { load_to_stg8_to_gp_165659_sm166_0253[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 28] : 0 <= d1 <= 1931 and 0 <= d2 <= 1085 }
  // Write schedule: { stg8_update_0_sm154_0229[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 1085 }
  auto value_stg8_stg8_update_0_sm154_0229_5 = stg8.stg8_stg8_update_0_sm154_0229_5_to_stg8_load_to_stg8_to_gp_165659_sm166_0253_80.peek(/* one reader or all rams */ 0);
  return value_stg8_stg8_update_0_sm154_0229_5;
  return 0;
}

// # of bundles = 2
// load_to_stg8_to_gp_165659_sm166_0253_read
//	stg8_load_to_stg8_to_gp_165659_sm166_0253_80
inline hw_uint<16> stg8_load_to_stg8_to_gp_165659_sm166_0253_read_bundle_read(stg8_cache& stg8, int root, int stg8_ld58, int stg8_ld57, int dynamic_address) {
  // # of ports in bundle: 1
    // stg8_load_to_stg8_to_gp_165659_sm166_0253_80

	hw_uint<16> result;
	hw_uint<16> stg8_load_to_stg8_to_gp_165659_sm166_0253_80_res = stg8_load_to_stg8_to_gp_165659_sm166_0253_80_select(stg8, root, stg8_ld58, stg8_ld57, dynamic_address);
	set_at<0, 16>(result, stg8_load_to_stg8_to_gp_165659_sm166_0253_80_res);
	return result;
}

// stg8_update_0_sm154_0229_write
//	stg8_stg8_update_0_sm154_0229_5
inline void stg8_stg8_update_0_sm154_0229_write_bundle_write(hw_uint<16>& stg8_update_0_sm154_0229_write, stg8_cache& stg8, int root, int stg8_0, int stg8_1, int dynamic_address) {
	hw_uint<16> stg8_stg8_update_0_sm154_0229_5_res = stg8_update_0_sm154_0229_write.extract<0, 15>();
	stg8_stg8_update_0_sm154_0229_5_write(stg8_stg8_update_0_sm154_0229_5_res, stg8, root, stg8_0, stg8_1, dynamic_address);
}

struct stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81_merged_banks_4_cache {
	// RAM Box: {[0, 1085], [-6, 1924]}
	// Capacity: 2174
	// # of read delays: 5
  // 0, 1, 1086, 1087, 2173
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1084> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 1085> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1085() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1086() {
		return f4;
	}

	inline hw_uint<16> peek_1087() {
		return f6;
	}

	inline hw_uint<16> peek_2172() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_2173() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1085
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1085 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1084
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1084 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_FIFO_buf120_cache {
  // Reader addrs...
    // { stg9_update_0_sm155_0231[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[stg9_1, -6 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 1084 }
    // { stg9_update_0_sm155_0231[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 1084 }
    // { stg9_update_0_sm155_0231[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 1084 }
    // { stg9_update_0_sm155_0231[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[stg9_1, -4 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 1084 }
  // # of banks: 1
  stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81_merged_banks_4_cache stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81_merged_banks_4;
};



inline void stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81_write(hw_uint<16>& stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81, stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg8_to_gp_1656_ld122, int stg8_to_gp_1656_ld121, int dynamic_address) {
  stg8_FIFO_buf120.stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81_merged_banks_4.push(stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81);
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_update_0_sm155_0231_1_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_update_0_sm155_0231_1 read pattern: { stg9_update_0_sm155_0231[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[stg9_1, -6 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 1084 }
  // Read schedule : { stg9_update_0_sm155_0231[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 1084 }
  // Write schedule: { load_to_stg8_FIFO_buf120123_sm176_0273[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 1085 }
  auto value_stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81 = stg8_FIFO_buf120.stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81_merged_banks_4.peek_2173();
  return value_stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_update_0_sm155_0231_2_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_update_0_sm155_0231_2 read pattern: { stg9_update_0_sm155_0231[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 1084 }
  // Read schedule : { stg9_update_0_sm155_0231[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 1084 }
  // Write schedule: { load_to_stg8_FIFO_buf120123_sm176_0273[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 1085 }
  auto value_stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81 = stg8_FIFO_buf120.stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81_merged_banks_4.peek_1087();
  return value_stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_update_0_sm155_0231_3_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_update_0_sm155_0231_3 read pattern: { stg9_update_0_sm155_0231[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 1084 }
  // Read schedule : { stg9_update_0_sm155_0231[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 1084 }
  // Write schedule: { load_to_stg8_FIFO_buf120123_sm176_0273[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 1085 }
  auto value_stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81 = stg8_FIFO_buf120.stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81_merged_banks_4.peek_1086();
  return value_stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_update_0_sm155_0231_4_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_update_0_sm155_0231_4 read pattern: { stg9_update_0_sm155_0231[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[stg9_1, -4 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 1084 }
  // Read schedule : { stg9_update_0_sm155_0231[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 1084 }
  // Write schedule: { load_to_stg8_FIFO_buf120123_sm176_0273[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 1085 }
  auto value_stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81 = stg8_FIFO_buf120.stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81_merged_banks_4.peek_1();
  return value_stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81;
  return 0;
}

// # of bundles = 2
// load_to_stg8_FIFO_buf120123_sm176_0273_write
//	stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81
inline void stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_write_bundle_write(hw_uint<16>& load_to_stg8_FIFO_buf120123_sm176_0273_write, stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg8_to_gp_1656_ld122, int stg8_to_gp_1656_ld121, int dynamic_address) {
	hw_uint<16> stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81_res = load_to_stg8_FIFO_buf120123_sm176_0273_write.extract<0, 15>();
	stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81_write(stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_81_res, stg8_FIFO_buf120, root, stg8_to_gp_1656_ld122, stg8_to_gp_1656_ld121, dynamic_address);
}

// stg9_update_0_sm155_0231_read
//	stg8_FIFO_buf120_stg9_update_0_sm155_0231_1
//	stg8_FIFO_buf120_stg9_update_0_sm155_0231_2
//	stg8_FIFO_buf120_stg9_update_0_sm155_0231_3
//	stg8_FIFO_buf120_stg9_update_0_sm155_0231_4
inline hw_uint<64> stg8_FIFO_buf120_stg9_update_0_sm155_0231_read_bundle_read(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg8_FIFO_buf120_stg9_update_0_sm155_0231_1
    // stg8_FIFO_buf120_stg9_update_0_sm155_0231_2
    // stg8_FIFO_buf120_stg9_update_0_sm155_0231_3
    // stg8_FIFO_buf120_stg9_update_0_sm155_0231_4

	hw_uint<64> result;
	hw_uint<16> stg8_FIFO_buf120_stg9_update_0_sm155_0231_1_res = stg8_FIFO_buf120_stg9_update_0_sm155_0231_1_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<0, 64>(result, stg8_FIFO_buf120_stg9_update_0_sm155_0231_1_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_update_0_sm155_0231_2_res = stg8_FIFO_buf120_stg9_update_0_sm155_0231_2_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<16, 64>(result, stg8_FIFO_buf120_stg9_update_0_sm155_0231_2_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_update_0_sm155_0231_3_res = stg8_FIFO_buf120_stg9_update_0_sm155_0231_3_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<32, 64>(result, stg8_FIFO_buf120_stg9_update_0_sm155_0231_3_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_update_0_sm155_0231_4_res = stg8_FIFO_buf120_stg9_update_0_sm155_0231_4_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<48, 64>(result, stg8_FIFO_buf120_stg9_update_0_sm155_0231_4_res);
	return result;
}

struct stg9_stg9_update_0_sm155_0231_0_to_stg9_load_to_stg9_to_gp_36063_sm139_0199_76_cache {
	// RAM Box: {[0, 1084], [-5, 1924]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stg9_cache {
  // Reader addrs...
    // { load_to_stg9_to_gp_36063_sm139_0199[root = 0, stg9_ld62, stg9_ld61] -> stg9[stg9_ld61, -5 + stg9_ld62] : 0 <= stg9_ld62 <= 1929 and 0 <= stg9_ld61 <= 1084 }
  // # of banks: 1
  stg9_stg9_update_0_sm155_0231_0_to_stg9_load_to_stg9_to_gp_36063_sm139_0199_76_cache stg9_stg9_update_0_sm155_0231_0_to_stg9_load_to_stg9_to_gp_36063_sm139_0199_76;
};



inline void stg9_stg9_update_0_sm155_0231_0_write(hw_uint<16>& stg9_stg9_update_0_sm155_0231_0, stg9_cache& stg9, int root, int stg9_0, int stg9_1, int dynamic_address) {
  stg9.stg9_stg9_update_0_sm155_0231_0_to_stg9_load_to_stg9_to_gp_36063_sm139_0199_76.push(stg9_stg9_update_0_sm155_0231_0);
}

inline hw_uint<16> stg9_load_to_stg9_to_gp_36063_sm139_0199_76_select(stg9_cache& stg9, int root, int stg9_ld62, int stg9_ld61, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_load_to_stg9_to_gp_36063_sm139_0199_76 read pattern: { load_to_stg9_to_gp_36063_sm139_0199[root = 0, stg9_ld62, stg9_ld61] -> stg9[stg9_ld61, -5 + stg9_ld62] : 0 <= stg9_ld62 <= 1929 and 0 <= stg9_ld61 <= 1084 }
  // Read schedule : { load_to_stg9_to_gp_36063_sm139_0199[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 31] : 0 <= d1 <= 1929 and 0 <= d2 <= 1084 }
  // Write schedule: { stg9_update_0_sm155_0231[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 1084 }
  auto value_stg9_stg9_update_0_sm155_0231_0 = stg9.stg9_stg9_update_0_sm155_0231_0_to_stg9_load_to_stg9_to_gp_36063_sm139_0199_76.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_sm155_0231_0;
  return 0;
}

// # of bundles = 2
// load_to_stg9_to_gp_36063_sm139_0199_read
//	stg9_load_to_stg9_to_gp_36063_sm139_0199_76
inline hw_uint<16> stg9_load_to_stg9_to_gp_36063_sm139_0199_read_bundle_read(stg9_cache& stg9, int root, int stg9_ld62, int stg9_ld61, int dynamic_address) {
  // # of ports in bundle: 1
    // stg9_load_to_stg9_to_gp_36063_sm139_0199_76

	hw_uint<16> result;
	hw_uint<16> stg9_load_to_stg9_to_gp_36063_sm139_0199_76_res = stg9_load_to_stg9_to_gp_36063_sm139_0199_76_select(stg9, root, stg9_ld62, stg9_ld61, dynamic_address);
	set_at<0, 16>(result, stg9_load_to_stg9_to_gp_36063_sm139_0199_76_res);
	return result;
}

// stg9_update_0_sm155_0231_write
//	stg9_stg9_update_0_sm155_0231_0
inline void stg9_stg9_update_0_sm155_0231_write_bundle_write(hw_uint<16>& stg9_update_0_sm155_0231_write, stg9_cache& stg9, int root, int stg9_0, int stg9_1, int dynamic_address) {
	hw_uint<16> stg9_stg9_update_0_sm155_0231_0_res = stg9_update_0_sm155_0231_write.extract<0, 15>();
	stg9_stg9_update_0_sm155_0231_0_write(stg9_stg9_update_0_sm155_0231_0_res, stg9, root, stg9_0, stg9_1, dynamic_address);
}

struct stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77_merged_banks_4_cache {
	// RAM Box: {[0, 1084], [-5, 1923]}
	// Capacity: 2172
	// # of read delays: 5
  // 0, 1, 1085, 1086, 2171
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1083> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 1084> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1084() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1085() {
		return f4;
	}

	inline hw_uint<16> peek_1086() {
		return f6;
	}

	inline hw_uint<16> peek_2170() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_2171() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1084
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1084 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1083
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1083 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg9_FIFO_buf124_cache {
  // Reader addrs...
    // { stg10_update_0_sm156_0233[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[stg10_1, -5 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 1083 }
    // { stg10_update_0_sm156_0233[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 1083 }
    // { stg10_update_0_sm156_0233[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 1083 }
    // { stg10_update_0_sm156_0233[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[stg10_1, -3 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 1083 }
  // # of banks: 1
  stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77_merged_banks_4_cache stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77_merged_banks_4;
};



inline void stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77_write(hw_uint<16>& stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg9_to_gp_360_ld126, int stg9_to_gp_360_ld125, int dynamic_address) {
  stg9_FIFO_buf124.stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77_merged_banks_4.push(stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77);
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_update_0_sm156_0233_66_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_update_0_sm156_0233_66 read pattern: { stg10_update_0_sm156_0233[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[stg10_1, -5 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 1083 }
  // Read schedule : { stg10_update_0_sm156_0233[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_stg9_FIFO_buf124127_sm130_0181[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 1084 }
  auto value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77 = stg9_FIFO_buf124.stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77_merged_banks_4.peek_2171();
  return value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_update_0_sm156_0233_67_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_update_0_sm156_0233_67 read pattern: { stg10_update_0_sm156_0233[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 1083 }
  // Read schedule : { stg10_update_0_sm156_0233[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_stg9_FIFO_buf124127_sm130_0181[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 1084 }
  auto value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77 = stg9_FIFO_buf124.stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77_merged_banks_4.peek_1086();
  return value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_update_0_sm156_0233_68_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_update_0_sm156_0233_68 read pattern: { stg10_update_0_sm156_0233[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 1083 }
  // Read schedule : { stg10_update_0_sm156_0233[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_stg9_FIFO_buf124127_sm130_0181[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 1084 }
  auto value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77 = stg9_FIFO_buf124.stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77_merged_banks_4.peek_1085();
  return value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_update_0_sm156_0233_69_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_update_0_sm156_0233_69 read pattern: { stg10_update_0_sm156_0233[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[stg10_1, -3 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 1083 }
  // Read schedule : { stg10_update_0_sm156_0233[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_stg9_FIFO_buf124127_sm130_0181[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 1084 }
  auto value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77 = stg9_FIFO_buf124.stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77_merged_banks_4.peek_1();
  return value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77;
  return 0;
}

// # of bundles = 2
// load_to_stg9_FIFO_buf124127_sm130_0181_write
//	stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77
inline void stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_write_bundle_write(hw_uint<16>& load_to_stg9_FIFO_buf124127_sm130_0181_write, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg9_to_gp_360_ld126, int stg9_to_gp_360_ld125, int dynamic_address) {
	hw_uint<16> stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77_res = load_to_stg9_FIFO_buf124127_sm130_0181_write.extract<0, 15>();
	stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77_write(stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_77_res, stg9_FIFO_buf124, root, stg9_to_gp_360_ld126, stg9_to_gp_360_ld125, dynamic_address);
}

// stg10_update_0_sm156_0233_read
//	stg9_FIFO_buf124_stg10_update_0_sm156_0233_66
//	stg9_FIFO_buf124_stg10_update_0_sm156_0233_67
//	stg9_FIFO_buf124_stg10_update_0_sm156_0233_68
//	stg9_FIFO_buf124_stg10_update_0_sm156_0233_69
inline hw_uint<64> stg9_FIFO_buf124_stg10_update_0_sm156_0233_read_bundle_read(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg9_FIFO_buf124_stg10_update_0_sm156_0233_66
    // stg9_FIFO_buf124_stg10_update_0_sm156_0233_67
    // stg9_FIFO_buf124_stg10_update_0_sm156_0233_68
    // stg9_FIFO_buf124_stg10_update_0_sm156_0233_69

	hw_uint<64> result;
	hw_uint<16> stg9_FIFO_buf124_stg10_update_0_sm156_0233_66_res = stg9_FIFO_buf124_stg10_update_0_sm156_0233_66_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<0, 64>(result, stg9_FIFO_buf124_stg10_update_0_sm156_0233_66_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_update_0_sm156_0233_67_res = stg9_FIFO_buf124_stg10_update_0_sm156_0233_67_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<16, 64>(result, stg9_FIFO_buf124_stg10_update_0_sm156_0233_67_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_update_0_sm156_0233_68_res = stg9_FIFO_buf124_stg10_update_0_sm156_0233_68_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<32, 64>(result, stg9_FIFO_buf124_stg10_update_0_sm156_0233_68_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_update_0_sm156_0233_69_res = stg9_FIFO_buf124_stg10_update_0_sm156_0233_69_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<48, 64>(result, stg9_FIFO_buf124_stg10_update_0_sm156_0233_69_res);
	return result;
}

// Operation logic
inline void in_update_0_sm145_0211(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_off_chip, in_cache& in, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_1_m__lp_1_m_in_1__p__0_rp___p__0_c_____1_m__lp_in_0__p___m_15_rp___p__0_value = in_off_chip.read();
	auto compute_result = in_generated_compute_unrolled_1(in_off_chip_1_m__lp_1_m_in_1__p__0_rp___p__0_c_____1_m__lp_in_0__p___m_15_rp___p__0_value);
	// Produce: in
	in_in_update_0_sm145_0211_write_bundle_write(/* arg names */compute_result, in, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in_to_gp_203_sm131_0183(in_cache& in, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_to_gp_20, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in__lp_1_m_in_ld1__p__0_rp__c______lp_in_ld2__p___m_15_rp__value = in_load_to_in_to_gp_203_sm131_0183_read_bundle_read(in/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: in_to_gp_20
	in_to_gp_20.write(in__lp_1_m_in_ld1__p__0_rp__c______lp_in_ld2__p___m_15_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in_0_in_ld2_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_to_gp_20) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_in_0_in_ld2__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in_update_0_sm145_0211[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1949 and 0 <= d2 <= 1094; load_to_in_to_gp_203_sm131_0183[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1949 and 0 <= d2 <= 1094 }
//   { in_update_0_sm145_0211[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1949 and 0 <= d2 <= 1094 }
// Condition for in_update_0_sm145_0211(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_in_to_gp_203_sm131_0183[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1949 and 0 <= d2 <= 1094 }
// Condition for load_to_in_to_gp_203_sm131_0183(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 1949 and 0 <= i2 <= 1094 and 0 <= i3 <= 1 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 0; i1 <= 1949; i1++) {
	    for (int i2 = 0; i2 <= 1094; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          in_update_0_sm145_0211(in_off_chip /* buf name */, in, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_in_to_gp_203_sm131_0183(in /* buf name */, in_to_gp_20, 0, ((1*i1)), ((1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg14_FIFO_buf9295_sm168_0257(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg14_to_gp_128, stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg14_to_gp_128
	auto stg14_to_gp_128__lp_1_m_stg14_to_gp_128_ld93__p__0_rp__c____stg14_to_gp_128_ld94_value = stg14_to_gp_128.read();
	// Produce: stg14_FIFO_buf92
	stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_sm168_0257_write_bundle_write(/* arg names */stg14_to_gp_128__lp_1_m_stg14_to_gp_128_ld93__p__0_rp__c____stg14_to_gp_128_ld94_value, stg14_FIFO_buf92, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void jacdynl_1_update_0_sm161_0243(stg14_FIFO_buf92_cache& stg14_FIFO_buf92, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */jacdynl_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg14_FIFO_buf92
	auto stg14_FIFO_buf92_1_m__lp_1_m_jacdynl_1_1__p__0_rp___p__0_c____1_m_jacdynl_1_0__p__0_value = stg14_FIFO_buf92_jacdynl_1_update_0_sm161_0243_read_bundle_read(stg14_FIFO_buf92/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = jacdynl_1_generated_compute_unrolled_1(stg14_FIFO_buf92_1_m__lp_1_m_jacdynl_1_1__p__0_rp___p__0_c____1_m_jacdynl_1_0__p__0_value);
	// Produce: jacdynl_1
	jacdynl_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_jacdynl_1_0_stg14_to_gp_128_ld94_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg14_to_gp_128, HWStream<hw_uint<16> >& /* get_args num ports = 1 */jacdynl_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_jacdynl_1_0_stg14_to_gp_128_ld94__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg14_FIFO_buf92_cache stg14_FIFO_buf92;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg14_FIFO_buf9295_sm168_0257[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 47] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079; jacdynl_1_update_0_sm161_0243[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 48] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079 }
//   { load_to_stg14_FIFO_buf9295_sm168_0257[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 47] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079 }
// Condition for load_to_stg14_FIFO_buf9295_sm168_0257(((((-47 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-30 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-15 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { jacdynl_1_update_0_sm161_0243[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 48] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079 }
// Condition for jacdynl_1_update_0_sm161_0243(((((-48 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-30 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-15 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 30 <= i1 <= 1949 and 15 <= i2 <= 1094 and 47 <= i3 <= 48 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 30; i1 <= 1949; i1++) {
	    for (int i2 = 15; i2 <= 1094; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg14_FIFO_buf9295_sm168_0257(stg14_to_gp_128 /* buf name */, stg14_FIFO_buf92, 0, ((-30 + 1*i1)), ((-15 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          jacdynl_1_update_0_sm161_0243(stg14_FIFO_buf92 /* buf name */, jacdynl_1, 0, ((-30 + 1*i1)), ((-15 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg2_FIFO_buf9699_sm143_0207(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg2_to_gp_1032, stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg2_to_gp_1032
	auto stg2_to_gp_1032__lp_1_m_stg2_to_gp_1032_ld97__p__0_rp__c______lp_stg2_to_gp_1032_ld98__p___m_12_rp__value = stg2_to_gp_1032.read();
	// Produce: stg2_FIFO_buf96
	stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_sm143_0207_write_bundle_write(/* arg names */stg2_to_gp_1032__lp_1_m_stg2_to_gp_1032_ld97__p__0_rp__c______lp_stg2_to_gp_1032_ld98__p___m_12_rp__value, stg2_FIFO_buf96, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg3_update_0_sm149_0219(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, stg3_cache& stg3, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg2_FIFO_buf96
	auto stg2_FIFO_buf96_1_m__lp_1_m_stg3_1__p__0_rp___p__0_c_____1_m__lp_stg3_0__p___m_11_rp___p___m_1_value = stg2_FIFO_buf96_stg3_update_0_sm149_0219_read_bundle_read(stg2_FIFO_buf96/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_1_m__lp_1_m_stg3_1__p__0_rp___p__0_c_____1_m__lp_stg3_0__p___m_11_rp___p___m_1_value);
	// Produce: stg3
	stg3_stg3_update_0_sm149_0219_write_bundle_write(/* arg names */compute_result, stg3, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg3_to_gp_113639_sm164_0249(stg3_cache& stg3, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg3_to_gp_1136, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg3
	auto stg3__lp_1_m_stg3_ld37__p__0_rp__c______lp_stg3_ld38__p___m_11_rp__value = stg3_load_to_stg3_to_gp_113639_sm164_0249_read_bundle_read(stg3/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg3_to_gp_1136
	stg3_to_gp_1136.write(stg3__lp_1_m_stg3_ld37__p__0_rp__c______lp_stg3_ld38__p___m_11_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg2_to_gp_1032_ld98_stg3_0_stg3_ld38_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg2_to_gp_1032, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg3_to_gp_1136) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg2_to_gp_1032_ld98_stg3_0_stg3_ld38__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg2_FIFO_buf96_cache stg2_FIFO_buf96;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg3_cache stg3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg3_update_0_sm149_0219[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 1090; load_to_stg2_FIFO_buf9699_sm143_0207[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 1091; load_to_stg3_to_gp_113639_sm164_0249[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 13] : 0 <= d1 <= 1941 and 0 <= d2 <= 1090 }
//   { stg3_update_0_sm149_0219[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 1090 }
// Condition for stg3_update_0_sm149_0219(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg2_FIFO_buf9699_sm143_0207[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 1091 }
// Condition for load_to_stg2_FIFO_buf9699_sm143_0207(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg3_to_gp_113639_sm164_0249[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 13] : 0 <= d1 <= 1941 and 0 <= d2 <= 1090 }
// Condition for load_to_stg3_to_gp_113639_sm164_0249(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1949 and 4 <= i2 <= 1094 and 12 <= i3 <= 13; [0, i1, i2, 11] : 6 <= i1 <= 1949 and 3 <= i2 <= 1094 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 6; i1 <= 1949; i1++) {
	    for (int i2 = 3; i2 <= 1094; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg2_FIFO_buf9699_sm143_0207(stg2_to_gp_1032 /* buf name */, stg2_FIFO_buf96, 0, ((-6 + 1*i1)), ((-3 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 4 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          stg3_update_0_sm149_0219(stg2_FIFO_buf96 /* buf name */, stg3, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 4 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          load_to_stg3_to_gp_113639_sm164_0249(stg3 /* buf name */, stg3_to_gp_1136, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg3_FIFO_buf100103_sm175_0271(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg3_to_gp_1136, stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg3_to_gp_1136
	auto stg3_to_gp_1136__lp_1_m_stg3_to_gp_1136_ld101__p__0_rp__c______lp_stg3_to_gp_1136_ld102__p___m_11_rp__value = stg3_to_gp_1136.read();
	// Produce: stg3_FIFO_buf100
	stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_sm175_0271_write_bundle_write(/* arg names */stg3_to_gp_1136__lp_1_m_stg3_to_gp_1136_ld101__p__0_rp__c______lp_stg3_to_gp_1136_ld102__p___m_11_rp__value, stg3_FIFO_buf100, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg4_update_0_sm150_0221(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, stg4_cache& stg4, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg3_FIFO_buf100
	auto stg3_FIFO_buf100_1_m__lp_1_m_stg4_1__p__0_rp___p__0_c_____1_m__lp_stg4_0__p___m_10_rp___p___m_1_value = stg3_FIFO_buf100_stg4_update_0_sm150_0221_read_bundle_read(stg3_FIFO_buf100/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_1_m__lp_1_m_stg4_1__p__0_rp___p__0_c_____1_m__lp_stg4_0__p___m_10_rp___p___m_1_value);
	// Produce: stg4
	stg4_stg4_update_0_sm150_0221_write_bundle_write(/* arg names */compute_result, stg4, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg4_to_gp_124043_sm136_0193(stg4_cache& stg4, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg4_to_gp_1240, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg4
	auto stg4__lp_1_m_stg4_ld41__p__0_rp__c______lp_stg4_ld42__p___m_10_rp__value = stg4_load_to_stg4_to_gp_124043_sm136_0193_read_bundle_read(stg4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg4_to_gp_1240
	stg4_to_gp_1240.write(stg4__lp_1_m_stg4_ld41__p__0_rp__c______lp_stg4_ld42__p___m_10_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg3_to_gp_1136_ld102_stg4_0_stg4_ld42_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg3_to_gp_1136, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg4_to_gp_1240) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg3_to_gp_1136_ld102_stg4_0_stg4_ld42__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg3_FIFO_buf100_cache stg3_FIFO_buf100;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg4_cache stg4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg4_to_gp_124043_sm136_0193[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 16] : 0 <= d1 <= 1939 and 0 <= d2 <= 1089; stg4_update_0_sm150_0221[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 1089; load_to_stg3_FIFO_buf100103_sm175_0271[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 1090 }
//   { load_to_stg4_to_gp_124043_sm136_0193[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 16] : 0 <= d1 <= 1939 and 0 <= d2 <= 1089 }
// Condition for load_to_stg4_to_gp_124043_sm136_0193(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { stg4_update_0_sm150_0221[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 1089 }
// Condition for stg4_update_0_sm150_0221(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg3_FIFO_buf100103_sm175_0271[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 1090 }
// Condition for load_to_stg3_FIFO_buf100103_sm175_0271(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 10 <= i1 <= 1949 and 5 <= i2 <= 1094 and 15 <= i3 <= 16; [0, i1, i2, 14] : 8 <= i1 <= 1949 and 4 <= i2 <= 1094 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 8; i1 <= 1949; i1++) {
	    for (int i2 = 4; i2 <= 1094; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg3_FIFO_buf100103_sm175_0271(stg3_to_gp_1136 /* buf name */, stg3_FIFO_buf100, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 10 and i2 >= 5 }
	        // { [i0, i1, i2] : i1 >= 10 and i2 >= 5 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -5 + i2 >= 0 }
	        if ((((((-10 + 1*i1)) >= 0) && (((-5 + 1*i2)) >= 0)))) {
	          stg4_update_0_sm150_0221(stg3_FIFO_buf100 /* buf name */, stg4, 0, ((-10 + 1*i1)), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 10 and i2 >= 5 }
	        // { [i0, i1, i2] : i1 >= 10 and i2 >= 5 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -5 + i2 >= 0 }
	        if ((((((-10 + 1*i1)) >= 0) && (((-5 + 1*i2)) >= 0)))) {
	          load_to_stg4_to_gp_124043_sm136_0193(stg4 /* buf name */, stg4_to_gp_1240, 0, ((-10 + 1*i1)), ((-5 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg4_FIFO_buf104107_sm128_0177(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg4_to_gp_1240, stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg4_to_gp_1240
	auto stg4_to_gp_1240__lp_1_m_stg4_to_gp_1240_ld105__p__0_rp__c______lp_stg4_to_gp_1240_ld106__p___m_10_rp__value = stg4_to_gp_1240.read();
	// Produce: stg4_FIFO_buf104
	stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_sm128_0177_write_bundle_write(/* arg names */stg4_to_gp_1240__lp_1_m_stg4_to_gp_1240_ld105__p__0_rp__c______lp_stg4_to_gp_1240_ld106__p___m_10_rp__value, stg4_FIFO_buf104, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg5_update_0_sm151_0223(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, stg5_cache& stg5, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg4_FIFO_buf104
	auto stg4_FIFO_buf104_1_m__lp_1_m_stg5_1__p__0_rp___p__0_c_____1_m__lp_stg5_0__p___m_9_rp___p___m_1_value = stg4_FIFO_buf104_stg5_update_0_sm151_0223_read_bundle_read(stg4_FIFO_buf104/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_1_m__lp_1_m_stg5_1__p__0_rp___p__0_c_____1_m__lp_stg5_0__p___m_9_rp___p___m_1_value);
	// Produce: stg5
	stg5_stg5_update_0_sm151_0223_write_bundle_write(/* arg names */compute_result, stg5, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg5_to_gp_134447_sm165_0251(stg5_cache& stg5, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg5_to_gp_1344, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg5
	auto stg5__lp_1_m_stg5_ld45__p__0_rp__c______lp_stg5_ld46__p___m_9_rp__value = stg5_load_to_stg5_to_gp_134447_sm165_0251_read_bundle_read(stg5/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg5_to_gp_1344
	stg5_to_gp_1344.write(stg5__lp_1_m_stg5_ld45__p__0_rp__c______lp_stg5_ld46__p___m_9_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg4_to_gp_1240_ld106_stg5_0_stg5_ld46_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg4_to_gp_1240, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg5_to_gp_1344) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg4_to_gp_1240_ld106_stg5_0_stg5_ld46__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg4_FIFO_buf104_cache stg4_FIFO_buf104;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg5_cache stg5;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg5_update_0_sm151_0223[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 1088; load_to_stg5_to_gp_134447_sm165_0251[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 19] : 0 <= d1 <= 1937 and 0 <= d2 <= 1088; load_to_stg4_FIFO_buf104107_sm128_0177[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 1089 }
//   { stg5_update_0_sm151_0223[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 1088 }
// Condition for stg5_update_0_sm151_0223(((((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-12 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg5_to_gp_134447_sm165_0251[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 19] : 0 <= d1 <= 1937 and 0 <= d2 <= 1088 }
// Condition for load_to_stg5_to_gp_134447_sm165_0251(((((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-12 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg4_FIFO_buf104107_sm128_0177[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 1089 }
// Condition for load_to_stg4_FIFO_buf104107_sm128_0177(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 12 <= i1 <= 1949 and 6 <= i2 <= 1094 and 18 <= i3 <= 19; [0, i1, i2, 17] : 10 <= i1 <= 1949 and 5 <= i2 <= 1094 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 10; i1 <= 1949; i1++) {
	    for (int i2 = 5; i2 <= 1094; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg4_FIFO_buf104107_sm128_0177(stg4_to_gp_1240 /* buf name */, stg4_FIFO_buf104, 0, ((-10 + 1*i1)), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 12 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 12 and i2 >= 6 }
	          // { [i0, i1, i2] : -12 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-12 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          stg5_update_0_sm151_0223(stg4_FIFO_buf104 /* buf name */, stg5, 0, ((-12 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 12 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 12 and i2 >= 6 }
	          // { [i0, i1, i2] : -12 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-12 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          load_to_stg5_to_gp_134447_sm165_0251(stg5 /* buf name */, stg5_to_gp_1344, 0, ((-12 + 1*i1)), ((-6 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg5_FIFO_buf108111_sm170_0261(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg5_to_gp_1344, stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg5_to_gp_1344
	auto stg5_to_gp_1344__lp_1_m_stg5_to_gp_1344_ld109__p__0_rp__c______lp_stg5_to_gp_1344_ld110__p___m_9_rp__value = stg5_to_gp_1344.read();
	// Produce: stg5_FIFO_buf108
	stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_sm170_0261_write_bundle_write(/* arg names */stg5_to_gp_1344__lp_1_m_stg5_to_gp_1344_ld109__p__0_rp__c______lp_stg5_to_gp_1344_ld110__p___m_9_rp__value, stg5_FIFO_buf108, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg6_update_0_sm152_0225(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, stg6_cache& stg6, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg5_FIFO_buf108
	auto stg5_FIFO_buf108_1_m__lp_1_m_stg6_1__p__0_rp___p__0_c_____1_m__lp_stg6_0__p___m_8_rp___p___m_1_value = stg5_FIFO_buf108_stg6_update_0_sm152_0225_read_bundle_read(stg5_FIFO_buf108/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_1_m__lp_1_m_stg6_1__p__0_rp___p__0_c_____1_m__lp_stg6_0__p___m_8_rp___p___m_1_value);
	// Produce: stg6
	stg6_stg6_update_0_sm152_0225_write_bundle_write(/* arg names */compute_result, stg6, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg6_to_gp_144851_sm137_0195(stg6_cache& stg6, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg6_to_gp_1448, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg6
	auto stg6__lp_1_m_stg6_ld49__p__0_rp__c______lp_stg6_ld50__p___m_8_rp__value = stg6_load_to_stg6_to_gp_144851_sm137_0195_read_bundle_read(stg6/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg6_to_gp_1448
	stg6_to_gp_1448.write(stg6__lp_1_m_stg6_ld49__p__0_rp__c______lp_stg6_ld50__p___m_8_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg5_to_gp_1344_ld110_stg6_0_stg6_ld50_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg5_to_gp_1344, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg6_to_gp_1448) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg5_to_gp_1344_ld110_stg6_0_stg6_ld50__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg5_FIFO_buf108_cache stg5_FIFO_buf108;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg6_cache stg6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg5_FIFO_buf108111_sm170_0261[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 1088; stg6_update_0_sm152_0225[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 1087; load_to_stg6_to_gp_144851_sm137_0195[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 22] : 0 <= d1 <= 1935 and 0 <= d2 <= 1087 }
//   { load_to_stg5_FIFO_buf108111_sm170_0261[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 1088 }
// Condition for load_to_stg5_FIFO_buf108111_sm170_0261(((((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-12 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { stg6_update_0_sm152_0225[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 1087 }
// Condition for stg6_update_0_sm152_0225(((((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg6_to_gp_144851_sm137_0195[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 22] : 0 <= d1 <= 1935 and 0 <= d2 <= 1087 }
// Condition for load_to_stg6_to_gp_144851_sm137_0195(((((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 14 <= i1 <= 1949 and 7 <= i2 <= 1094 and 21 <= i3 <= 22; [0, i1, i2, 20] : 12 <= i1 <= 1949 and 6 <= i2 <= 1094 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 12; i1 <= 1949; i1++) {
	    for (int i2 = 6; i2 <= 1094; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg5_FIFO_buf108111_sm170_0261(stg5_to_gp_1344 /* buf name */, stg5_FIFO_buf108, 0, ((-12 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 14 and i2 >= 7 }
	        // { [i0, i1, i2] : i1 >= 14 and i2 >= 7 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((-14 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          stg6_update_0_sm152_0225(stg5_FIFO_buf108 /* buf name */, stg6, 0, ((-14 + 1*i1)), ((-7 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 14 and i2 >= 7 }
	        // { [i0, i1, i2] : i1 >= 14 and i2 >= 7 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((-14 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          load_to_stg6_to_gp_144851_sm137_0195(stg6 /* buf name */, stg6_to_gp_1448, 0, ((-14 + 1*i1)), ((-7 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg6_FIFO_buf112115_sm171_0263(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg6_to_gp_1448, stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg6_to_gp_1448
	auto stg6_to_gp_1448__lp_1_m_stg6_to_gp_1448_ld113__p__0_rp__c______lp_stg6_to_gp_1448_ld114__p___m_8_rp__value = stg6_to_gp_1448.read();
	// Produce: stg6_FIFO_buf112
	stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_sm171_0263_write_bundle_write(/* arg names */stg6_to_gp_1448__lp_1_m_stg6_to_gp_1448_ld113__p__0_rp__c______lp_stg6_to_gp_1448_ld114__p___m_8_rp__value, stg6_FIFO_buf112, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg7_update_0_sm153_0227(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, stg7_cache& stg7, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg6_FIFO_buf112
	auto stg6_FIFO_buf112_1_m__lp_1_m_stg7_1__p__0_rp___p__0_c_____1_m__lp_stg7_0__p___m_7_rp___p___m_1_value = stg6_FIFO_buf112_stg7_update_0_sm153_0227_read_bundle_read(stg6_FIFO_buf112/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_1_m__lp_1_m_stg7_1__p__0_rp___p__0_c_____1_m__lp_stg7_0__p___m_7_rp___p___m_1_value);
	// Produce: stg7
	stg7_stg7_update_0_sm153_0227_write_bundle_write(/* arg names */compute_result, stg7, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg7_to_gp_155255_sm138_0197(stg7_cache& stg7, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg7_to_gp_1552, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg7
	auto stg7__lp_1_m_stg7_ld53__p__0_rp__c______lp_stg7_ld54__p___m_7_rp__value = stg7_load_to_stg7_to_gp_155255_sm138_0197_read_bundle_read(stg7/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg7_to_gp_1552
	stg7_to_gp_1552.write(stg7__lp_1_m_stg7_ld53__p__0_rp__c______lp_stg7_ld54__p___m_7_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg6_to_gp_1448_ld114_stg7_0_stg7_ld54_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg6_to_gp_1448, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg7_to_gp_1552) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg6_to_gp_1448_ld114_stg7_0_stg7_ld54__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg6_FIFO_buf112_cache stg6_FIFO_buf112;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg7_cache stg7;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg7_update_0_sm153_0227[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 1086; load_to_stg7_to_gp_155255_sm138_0197[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 25] : 0 <= d1 <= 1933 and 0 <= d2 <= 1086; load_to_stg6_FIFO_buf112115_sm171_0263[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 1087 }
//   { stg7_update_0_sm153_0227[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 1086 }
// Condition for stg7_update_0_sm153_0227(((((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-16 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg7_to_gp_155255_sm138_0197[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 25] : 0 <= d1 <= 1933 and 0 <= d2 <= 1086 }
// Condition for load_to_stg7_to_gp_155255_sm138_0197(((((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-16 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg6_FIFO_buf112115_sm171_0263[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 1087 }
// Condition for load_to_stg6_FIFO_buf112115_sm171_0263(((((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 16 <= i1 <= 1949 and 8 <= i2 <= 1094 and 24 <= i3 <= 25; [0, i1, i2, 23] : 14 <= i1 <= 1949 and 7 <= i2 <= 1094 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 14; i1 <= 1949; i1++) {
	    for (int i2 = 7; i2 <= 1094; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg6_FIFO_buf112115_sm171_0263(stg6_to_gp_1448 /* buf name */, stg6_FIFO_buf112, 0, ((-14 + 1*i1)), ((-7 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 16 and i2 >= 8 }
	        // { [i0, i1, i2] : i1 >= 16 and i2 >= 8 }
	          // { [i0, i1, i2] : -16 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-16 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          stg7_update_0_sm153_0227(stg6_FIFO_buf112 /* buf name */, stg7, 0, ((-16 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 16 and i2 >= 8 }
	        // { [i0, i1, i2] : i1 >= 16 and i2 >= 8 }
	          // { [i0, i1, i2] : -16 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-16 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          load_to_stg7_to_gp_155255_sm138_0197(stg7 /* buf name */, stg7_to_gp_1552, 0, ((-16 + 1*i1)), ((-8 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg7_FIFO_buf116119_sm144_0209(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg7_to_gp_1552, stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg7_to_gp_1552
	auto stg7_to_gp_1552__lp_1_m_stg7_to_gp_1552_ld117__p__0_rp__c______lp_stg7_to_gp_1552_ld118__p___m_7_rp__value = stg7_to_gp_1552.read();
	// Produce: stg7_FIFO_buf116
	stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_sm144_0209_write_bundle_write(/* arg names */stg7_to_gp_1552__lp_1_m_stg7_to_gp_1552_ld117__p__0_rp__c______lp_stg7_to_gp_1552_ld118__p___m_7_rp__value, stg7_FIFO_buf116, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg8_update_0_sm154_0229(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, stg8_cache& stg8, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg7_FIFO_buf116
	auto stg7_FIFO_buf116_1_m__lp_1_m_stg8_1__p__0_rp___p__0_c_____1_m__lp_stg8_0__p___m_6_rp___p___m_1_value = stg7_FIFO_buf116_stg8_update_0_sm154_0229_read_bundle_read(stg7_FIFO_buf116/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_1_m__lp_1_m_stg8_1__p__0_rp___p__0_c_____1_m__lp_stg8_0__p___m_6_rp___p___m_1_value);
	// Produce: stg8
	stg8_stg8_update_0_sm154_0229_write_bundle_write(/* arg names */compute_result, stg8, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg8_to_gp_165659_sm166_0253(stg8_cache& stg8, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg8_to_gp_1656, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg8
	auto stg8__lp_1_m_stg8_ld57__p__0_rp__c______lp_stg8_ld58__p___m_6_rp__value = stg8_load_to_stg8_to_gp_165659_sm166_0253_read_bundle_read(stg8/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg8_to_gp_1656
	stg8_to_gp_1656.write(stg8__lp_1_m_stg8_ld57__p__0_rp__c______lp_stg8_ld58__p___m_6_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg7_to_gp_1552_ld118_stg8_0_stg8_ld58_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg7_to_gp_1552, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg8_to_gp_1656) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg7_to_gp_1552_ld118_stg8_0_stg8_ld58__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg7_FIFO_buf116_cache stg7_FIFO_buf116;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg8_cache stg8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg8_to_gp_165659_sm166_0253[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 28] : 0 <= d1 <= 1931 and 0 <= d2 <= 1085; load_to_stg7_FIFO_buf116119_sm144_0209[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 1086; stg8_update_0_sm154_0229[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 1085 }
//   { load_to_stg8_to_gp_165659_sm166_0253[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 28] : 0 <= d1 <= 1931 and 0 <= d2 <= 1085 }
// Condition for load_to_stg8_to_gp_165659_sm166_0253(((((-28 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-18 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg7_FIFO_buf116119_sm144_0209[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 1086 }
// Condition for load_to_stg7_FIFO_buf116119_sm144_0209(((((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-16 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { stg8_update_0_sm154_0229[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 1085 }
// Condition for stg8_update_0_sm154_0229(((((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-18 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 18 <= i1 <= 1949 and 9 <= i2 <= 1094 and 27 <= i3 <= 28; [0, i1, i2, 26] : 16 <= i1 <= 1949 and 8 <= i2 <= 1094 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 16; i1 <= 1949; i1++) {
	    for (int i2 = 8; i2 <= 1094; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg7_FIFO_buf116119_sm144_0209(stg7_to_gp_1552 /* buf name */, stg7_FIFO_buf116, 0, ((-16 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 18 and i2 >= 9 }
	        // { [i0, i1, i2] : i1 >= 18 and i2 >= 9 }
	          // { [i0, i1, i2] : -18 + i1 >= 0 }
	          // { [i0, i1, i2] : -9 + i2 >= 0 }
	        if ((((((-18 + 1*i1)) >= 0) && (((-9 + 1*i2)) >= 0)))) {
	          stg8_update_0_sm154_0229(stg7_FIFO_buf116 /* buf name */, stg8, 0, ((-18 + 1*i1)), ((-9 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 18 and i2 >= 9 }
	        // { [i0, i1, i2] : i1 >= 18 and i2 >= 9 }
	          // { [i0, i1, i2] : -18 + i1 >= 0 }
	          // { [i0, i1, i2] : -9 + i2 >= 0 }
	        if ((((((-18 + 1*i1)) >= 0) && (((-9 + 1*i2)) >= 0)))) {
	          load_to_stg8_to_gp_165659_sm166_0253(stg8 /* buf name */, stg8_to_gp_1656, 0, ((-18 + 1*i1)), ((-9 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg8_FIFO_buf120123_sm176_0273(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg8_to_gp_1656, stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg8_to_gp_1656
	auto stg8_to_gp_1656__lp_1_m_stg8_to_gp_1656_ld121__p__0_rp__c______lp_stg8_to_gp_1656_ld122__p___m_6_rp__value = stg8_to_gp_1656.read();
	// Produce: stg8_FIFO_buf120
	stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_sm176_0273_write_bundle_write(/* arg names */stg8_to_gp_1656__lp_1_m_stg8_to_gp_1656_ld121__p__0_rp__c______lp_stg8_to_gp_1656_ld122__p___m_6_rp__value, stg8_FIFO_buf120, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg9_update_0_sm155_0231(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, stg9_cache& stg9, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg8_FIFO_buf120
	auto stg8_FIFO_buf120_1_m__lp_1_m_stg9_1__p__0_rp___p__0_c_____1_m__lp_stg9_0__p___m_5_rp___p___m_1_value = stg8_FIFO_buf120_stg9_update_0_sm155_0231_read_bundle_read(stg8_FIFO_buf120/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_1_m__lp_1_m_stg9_1__p__0_rp___p__0_c_____1_m__lp_stg9_0__p___m_5_rp___p___m_1_value);
	// Produce: stg9
	stg9_stg9_update_0_sm155_0231_write_bundle_write(/* arg names */compute_result, stg9, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg9_to_gp_36063_sm139_0199(stg9_cache& stg9, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg9_to_gp_360, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg9
	auto stg9__lp_1_m_stg9_ld61__p__0_rp__c______lp_stg9_ld62__p___m_5_rp__value = stg9_load_to_stg9_to_gp_36063_sm139_0199_read_bundle_read(stg9/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg9_to_gp_360
	stg9_to_gp_360.write(stg9__lp_1_m_stg9_ld61__p__0_rp__c______lp_stg9_ld62__p___m_5_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg8_to_gp_1656_ld122_stg9_0_stg9_ld62_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg8_to_gp_1656, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg9_to_gp_360) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg8_to_gp_1656_ld122_stg9_0_stg9_ld62__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg8_FIFO_buf120_cache stg8_FIFO_buf120;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg9_cache stg9;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg8_FIFO_buf120123_sm176_0273[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 1085; stg9_update_0_sm155_0231[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 1084; load_to_stg9_to_gp_36063_sm139_0199[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 31] : 0 <= d1 <= 1929 and 0 <= d2 <= 1084 }
//   { load_to_stg8_FIFO_buf120123_sm176_0273[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 1085 }
// Condition for load_to_stg8_FIFO_buf120123_sm176_0273(((((-29 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-18 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { stg9_update_0_sm155_0231[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 1084 }
// Condition for stg9_update_0_sm155_0231(((((-30 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-20 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg9_to_gp_36063_sm139_0199[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 31] : 0 <= d1 <= 1929 and 0 <= d2 <= 1084 }
// Condition for load_to_stg9_to_gp_36063_sm139_0199(((((-31 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-20 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 20 <= i1 <= 1949 and 10 <= i2 <= 1094 and 30 <= i3 <= 31; [0, i1, i2, 29] : 18 <= i1 <= 1949 and 9 <= i2 <= 1094 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 18; i1 <= 1949; i1++) {
	    for (int i2 = 9; i2 <= 1094; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg8_FIFO_buf120123_sm176_0273(stg8_to_gp_1656 /* buf name */, stg8_FIFO_buf120, 0, ((-18 + 1*i1)), ((-9 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 20 and i2 >= 10 }
	        // { [i0, i1, i2] : i1 >= 20 and i2 >= 10 }
	          // { [i0, i1, i2] : -20 + i1 >= 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	        if ((((((-20 + 1*i1)) >= 0) && (((-10 + 1*i2)) >= 0)))) {
	          stg9_update_0_sm155_0231(stg8_FIFO_buf120 /* buf name */, stg9, 0, ((-20 + 1*i1)), ((-10 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 20 and i2 >= 10 }
	        // { [i0, i1, i2] : i1 >= 20 and i2 >= 10 }
	          // { [i0, i1, i2] : -20 + i1 >= 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	        if ((((((-20 + 1*i1)) >= 0) && (((-10 + 1*i2)) >= 0)))) {
	          load_to_stg9_to_gp_36063_sm139_0199(stg9 /* buf name */, stg9_to_gp_360, 0, ((-20 + 1*i1)), ((-10 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_in_FIFO_buf6467_sm174_0269(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_to_gp_20, in_FIFO_buf64_cache& in_FIFO_buf64, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_to_gp_20
	auto in_to_gp_20__lp_1_m_in_to_gp_20_ld65__p__0_rp__c______lp_in_to_gp_20_ld66__p___m_15_rp__value = in_to_gp_20.read();
	// Produce: in_FIFO_buf64
	in_FIFO_buf64_load_to_in_FIFO_buf6467_sm174_0269_write_bundle_write(/* arg names */in_to_gp_20__lp_1_m_in_to_gp_20_ld65__p__0_rp__c______lp_in_to_gp_20_ld66__p___m_15_rp__value, in_FIFO_buf64, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg0_update_0_sm146_0213(in_FIFO_buf64_cache& in_FIFO_buf64, stg0_cache& stg0, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_FIFO_buf64
	auto in_FIFO_buf64_1_m__lp_1_m_stg0_1__p__0_rp___p__0_c_____1_m__lp_stg0_0__p___m_14_rp___p___m_1_value = in_FIFO_buf64_stg0_update_0_sm146_0213_read_bundle_read(in_FIFO_buf64/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg0_generated_compute_unrolled_1(in_FIFO_buf64_1_m__lp_1_m_stg0_1__p__0_rp___p__0_c_____1_m__lp_stg0_0__p___m_14_rp___p___m_1_value);
	// Produce: stg0
	stg0_stg0_update_0_sm146_0213_write_bundle_write(/* arg names */compute_result, stg0, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg0_to_gp_847_sm132_0185(stg0_cache& stg0, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg0_to_gp_84, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg0
	auto stg0__lp_1_m_stg0_ld5__p__0_rp__c______lp_stg0_ld6__p___m_14_rp__value = stg0_load_to_stg0_to_gp_847_sm132_0185_read_bundle_read(stg0/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg0_to_gp_84
	stg0_to_gp_84.write(stg0__lp_1_m_stg0_ld5__p__0_rp__c______lp_stg0_ld6__p___m_14_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in_to_gp_20_ld66_stg0_0_stg0_ld6_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_to_gp_20, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg0_to_gp_84) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_in_to_gp_20_ld66_stg0_0_stg0_ld6__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_FIFO_buf64_cache in_FIFO_buf64;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg0_cache stg0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_in_FIFO_buf6467_sm174_0269[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 1094; load_to_stg0_to_gp_847_sm132_0185[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 4] : 0 <= d1 <= 1947 and 0 <= d2 <= 1093; stg0_update_0_sm146_0213[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 1093 }
//   { load_to_in_FIFO_buf6467_sm174_0269[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 1094 }
// Condition for load_to_in_FIFO_buf6467_sm174_0269(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg0_to_gp_847_sm132_0185[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 4] : 0 <= d1 <= 1947 and 0 <= d2 <= 1093 }
// Condition for load_to_stg0_to_gp_847_sm132_0185(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { stg0_update_0_sm146_0213[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 1093 }
// Condition for stg0_update_0_sm146_0213(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 1949 and 0 < i2 <= 1094 and 3 <= i3 <= 4; [0, i1, i2, 2] : 0 <= i1 <= 1949 and 0 <= i2 <= 1094 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 0; i1 <= 1949; i1++) {
	    for (int i2 = 0; i2 <= 1094; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_in_FIFO_buf6467_sm174_0269(in_to_gp_20 /* buf name */, in_FIFO_buf64, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          stg0_update_0_sm146_0213(in_FIFO_buf64 /* buf name */, stg0, 0, ((-2 + 1*i1)), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          load_to_stg0_to_gp_847_sm132_0185(stg0 /* buf name */, stg0_to_gp_84, 0, ((-2 + 1*i1)), ((-1 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg9_FIFO_buf124127_sm130_0181(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg9_to_gp_360, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg9_to_gp_360
	auto stg9_to_gp_360__lp_1_m_stg9_to_gp_360_ld125__p__0_rp__c______lp_stg9_to_gp_360_ld126__p___m_5_rp__value = stg9_to_gp_360.read();
	// Produce: stg9_FIFO_buf124
	stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm130_0181_write_bundle_write(/* arg names */stg9_to_gp_360__lp_1_m_stg9_to_gp_360_ld125__p__0_rp__c______lp_stg9_to_gp_360_ld126__p___m_5_rp__value, stg9_FIFO_buf124, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg10_update_0_sm156_0233(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, stg10_cache& stg10, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg9_FIFO_buf124
	auto stg9_FIFO_buf124_1_m__lp_1_m_stg10_1__p__0_rp___p__0_c_____1_m__lp_stg10_0__p___m_4_rp___p___m_1_value = stg9_FIFO_buf124_stg10_update_0_sm156_0233_read_bundle_read(stg9_FIFO_buf124/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_1_m__lp_1_m_stg10_1__p__0_rp___p__0_c_____1_m__lp_stg10_0__p___m_4_rp___p___m_1_value);
	// Produce: stg10
	stg10_stg10_update_0_sm156_0233_write_bundle_write(/* arg names */compute_result, stg10, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg10_to_gp_41215_sm172_0265(stg10_cache& stg10, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg10_to_gp_412, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg10
	auto stg10__lp_1_m_stg10_ld13__p__0_rp__c______lp_stg10_ld14__p___m_4_rp__value = stg10_load_to_stg10_to_gp_41215_sm172_0265_read_bundle_read(stg10/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg10_to_gp_412
	stg10_to_gp_412.write(stg10__lp_1_m_stg10_ld13__p__0_rp__c______lp_stg10_ld14__p___m_4_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg10_0_stg10_ld14_stg9_to_gp_360_ld126_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg9_to_gp_360, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg10_to_gp_412) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg10_0_stg10_ld14_stg9_to_gp_360_ld126__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg10_cache stg10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg9_FIFO_buf124_cache stg9_FIFO_buf124;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg9_FIFO_buf124127_sm130_0181[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 1084; load_to_stg10_to_gp_41215_sm172_0265[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 34] : 0 <= d1 <= 1927 and 0 <= d2 <= 1083; stg10_update_0_sm156_0233[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 1083 }
//   { load_to_stg9_FIFO_buf124127_sm130_0181[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 1084 }
// Condition for load_to_stg9_FIFO_buf124127_sm130_0181(((((-32 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-20 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg10_to_gp_41215_sm172_0265[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 34] : 0 <= d1 <= 1927 and 0 <= d2 <= 1083 }
// Condition for load_to_stg10_to_gp_41215_sm172_0265(((((-34 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-22 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-11 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { stg10_update_0_sm156_0233[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 1083 }
// Condition for stg10_update_0_sm156_0233(((((-33 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-22 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-11 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 22 <= i1 <= 1949 and 11 <= i2 <= 1094 and 33 <= i3 <= 34; [0, i1, i2, 32] : 20 <= i1 <= 1949 and 10 <= i2 <= 1094 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 20; i1 <= 1949; i1++) {
	    for (int i2 = 10; i2 <= 1094; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg9_FIFO_buf124127_sm130_0181(stg9_to_gp_360 /* buf name */, stg9_FIFO_buf124, 0, ((-20 + 1*i1)), ((-10 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 22 and i2 >= 11 }
	        // { [i0, i1, i2] : i1 >= 22 and i2 >= 11 }
	          // { [i0, i1, i2] : -22 + i1 >= 0 }
	          // { [i0, i1, i2] : -11 + i2 >= 0 }
	        if ((((((-22 + 1*i1)) >= 0) && (((-11 + 1*i2)) >= 0)))) {
	          stg10_update_0_sm156_0233(stg9_FIFO_buf124 /* buf name */, stg10, 0, ((-22 + 1*i1)), ((-11 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 22 and i2 >= 11 }
	        // { [i0, i1, i2] : i1 >= 22 and i2 >= 11 }
	          // { [i0, i1, i2] : -22 + i1 >= 0 }
	          // { [i0, i1, i2] : -11 + i2 >= 0 }
	        if ((((((-22 + 1*i1)) >= 0) && (((-11 + 1*i2)) >= 0)))) {
	          load_to_stg10_to_gp_41215_sm172_0265(stg10 /* buf name */, stg10_to_gp_412, 0, ((-22 + 1*i1)), ((-11 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg10_FIFO_buf7679_sm140_0201(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg10_to_gp_412, stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg10_to_gp_412
	auto stg10_to_gp_412__lp_1_m_stg10_to_gp_412_ld77__p__0_rp__c______lp_stg10_to_gp_412_ld78__p___m_4_rp__value = stg10_to_gp_412.read();
	// Produce: stg10_FIFO_buf76
	stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_sm140_0201_write_bundle_write(/* arg names */stg10_to_gp_412__lp_1_m_stg10_to_gp_412_ld77__p__0_rp__c______lp_stg10_to_gp_412_ld78__p___m_4_rp__value, stg10_FIFO_buf76, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg11_update_0_sm157_0235(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, stg11_cache& stg11, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg10_FIFO_buf76
	auto stg10_FIFO_buf76_1_m__lp_1_m_stg11_1__p__0_rp___p__0_c_____1_m__lp_stg11_0__p___m_3_rp___p___m_1_value = stg10_FIFO_buf76_stg11_update_0_sm157_0235_read_bundle_read(stg10_FIFO_buf76/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_1_m__lp_1_m_stg11_1__p__0_rp___p__0_c_____1_m__lp_stg11_0__p___m_3_rp___p___m_1_value);
	// Produce: stg11
	stg11_stg11_update_0_sm157_0235_write_bundle_write(/* arg names */compute_result, stg11, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg11_to_gp_51619_sm163_0247(stg11_cache& stg11, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg11_to_gp_516, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg11
	auto stg11__lp_1_m_stg11_ld17__p__0_rp__c______lp_stg11_ld18__p___m_3_rp__value = stg11_load_to_stg11_to_gp_51619_sm163_0247_read_bundle_read(stg11/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg11_to_gp_516
	stg11_to_gp_516.write(stg11__lp_1_m_stg11_ld17__p__0_rp__c______lp_stg11_ld18__p___m_3_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg10_to_gp_412_ld78_stg11_0_stg11_ld18_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg10_to_gp_412, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg11_to_gp_516) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg10_to_gp_412_ld78_stg11_0_stg11_ld18__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg10_FIFO_buf76_cache stg10_FIFO_buf76;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg11_cache stg11;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg11_update_0_sm157_0235[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 1082; load_to_stg10_FIFO_buf7679_sm140_0201[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 1083; load_to_stg11_to_gp_51619_sm163_0247[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 37] : 0 <= d1 <= 1925 and 0 <= d2 <= 1082 }
//   { stg11_update_0_sm157_0235[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 1082 }
// Condition for stg11_update_0_sm157_0235(((((-36 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-24 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-12 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg10_FIFO_buf7679_sm140_0201[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 1083 }
// Condition for load_to_stg10_FIFO_buf7679_sm140_0201(((((-35 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-22 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-11 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg11_to_gp_51619_sm163_0247[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 37] : 0 <= d1 <= 1925 and 0 <= d2 <= 1082 }
// Condition for load_to_stg11_to_gp_51619_sm163_0247(((((-37 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-24 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-12 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 24 <= i1 <= 1949 and 12 <= i2 <= 1094 and 36 <= i3 <= 37; [0, i1, i2, 35] : 22 <= i1 <= 1949 and 11 <= i2 <= 1094 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 22; i1 <= 1949; i1++) {
	    for (int i2 = 11; i2 <= 1094; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg10_FIFO_buf7679_sm140_0201(stg10_to_gp_412 /* buf name */, stg10_FIFO_buf76, 0, ((-22 + 1*i1)), ((-11 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 24 and i2 >= 12 }
	        // { [i0, i1, i2] : i1 >= 24 and i2 >= 12 }
	          // { [i0, i1, i2] : -24 + i1 >= 0 }
	          // { [i0, i1, i2] : -12 + i2 >= 0 }
	        if ((((((-24 + 1*i1)) >= 0) && (((-12 + 1*i2)) >= 0)))) {
	          stg11_update_0_sm157_0235(stg10_FIFO_buf76 /* buf name */, stg11, 0, ((-24 + 1*i1)), ((-12 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 24 and i2 >= 12 }
	        // { [i0, i1, i2] : i1 >= 24 and i2 >= 12 }
	          // { [i0, i1, i2] : -24 + i1 >= 0 }
	          // { [i0, i1, i2] : -12 + i2 >= 0 }
	        if ((((((-24 + 1*i1)) >= 0) && (((-12 + 1*i2)) >= 0)))) {
	          load_to_stg11_to_gp_51619_sm163_0247(stg11 /* buf name */, stg11_to_gp_516, 0, ((-24 + 1*i1)), ((-12 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg11_FIFO_buf8083_sm142_0205(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg11_to_gp_516, stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg11_to_gp_516
	auto stg11_to_gp_516__lp_1_m_stg11_to_gp_516_ld81__p__0_rp__c______lp_stg11_to_gp_516_ld82__p___m_3_rp__value = stg11_to_gp_516.read();
	// Produce: stg11_FIFO_buf80
	stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_sm142_0205_write_bundle_write(/* arg names */stg11_to_gp_516__lp_1_m_stg11_to_gp_516_ld81__p__0_rp__c______lp_stg11_to_gp_516_ld82__p___m_3_rp__value, stg11_FIFO_buf80, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg12_update_0_sm158_0237(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, stg12_cache& stg12, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg11_FIFO_buf80
	auto stg11_FIFO_buf80_1_m__lp_1_m_stg12_1__p__0_rp___p__0_c_____1_m__lp_stg12_0__p___m_2_rp___p___m_1_value = stg11_FIFO_buf80_stg12_update_0_sm158_0237_read_bundle_read(stg11_FIFO_buf80/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_1_m__lp_1_m_stg12_1__p__0_rp___p__0_c_____1_m__lp_stg12_0__p___m_2_rp___p___m_1_value);
	// Produce: stg12
	stg12_stg12_update_0_sm158_0237_write_bundle_write(/* arg names */compute_result, stg12, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg12_to_gp_62023_sm133_0187(stg12_cache& stg12, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg12_to_gp_620, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg12
	auto stg12__lp_1_m_stg12_ld21__p__0_rp__c______lp_stg12_ld22__p___m_2_rp__value = stg12_load_to_stg12_to_gp_62023_sm133_0187_read_bundle_read(stg12/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg12_to_gp_620
	stg12_to_gp_620.write(stg12__lp_1_m_stg12_ld21__p__0_rp__c______lp_stg12_ld22__p___m_2_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg11_to_gp_516_ld82_stg12_0_stg12_ld22_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg11_to_gp_516, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg12_to_gp_620) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg11_to_gp_516_ld82_stg12_0_stg12_ld22__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg11_FIFO_buf80_cache stg11_FIFO_buf80;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg12_cache stg12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg12_to_gp_62023_sm133_0187[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 40] : 0 <= d1 <= 1923 and 0 <= d2 <= 1081; stg12_update_0_sm158_0237[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 1081; load_to_stg11_FIFO_buf8083_sm142_0205[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 1082 }
//   { load_to_stg12_to_gp_62023_sm133_0187[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 40] : 0 <= d1 <= 1923 and 0 <= d2 <= 1081 }
// Condition for load_to_stg12_to_gp_62023_sm133_0187(((((-40 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-26 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-13 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { stg12_update_0_sm158_0237[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 1081 }
// Condition for stg12_update_0_sm158_0237(((((-39 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-26 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-13 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg11_FIFO_buf8083_sm142_0205[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 1082 }
// Condition for load_to_stg11_FIFO_buf8083_sm142_0205(((((-38 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-24 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-12 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 26 <= i1 <= 1949 and 13 <= i2 <= 1094 and 39 <= i3 <= 40; [0, i1, i2, 38] : 24 <= i1 <= 1949 and 12 <= i2 <= 1094 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 24; i1 <= 1949; i1++) {
	    for (int i2 = 12; i2 <= 1094; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg11_FIFO_buf8083_sm142_0205(stg11_to_gp_516 /* buf name */, stg11_FIFO_buf80, 0, ((-24 + 1*i1)), ((-12 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 26 and i2 >= 13 }
	        // { [i0, i1, i2] : i1 >= 26 and i2 >= 13 }
	          // { [i0, i1, i2] : -26 + i1 >= 0 }
	          // { [i0, i1, i2] : -13 + i2 >= 0 }
	        if ((((((-26 + 1*i1)) >= 0) && (((-13 + 1*i2)) >= 0)))) {
	          stg12_update_0_sm158_0237(stg11_FIFO_buf80 /* buf name */, stg12, 0, ((-26 + 1*i1)), ((-13 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 26 and i2 >= 13 }
	        // { [i0, i1, i2] : i1 >= 26 and i2 >= 13 }
	          // { [i0, i1, i2] : -26 + i1 >= 0 }
	          // { [i0, i1, i2] : -13 + i2 >= 0 }
	        if ((((((-26 + 1*i1)) >= 0) && (((-13 + 1*i2)) >= 0)))) {
	          load_to_stg12_to_gp_62023_sm133_0187(stg12 /* buf name */, stg12_to_gp_620, 0, ((-26 + 1*i1)), ((-13 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg12_FIFO_buf8487_sm129_0179(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg12_to_gp_620, stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg12_to_gp_620
	auto stg12_to_gp_620__lp_1_m_stg12_to_gp_620_ld85__p__0_rp__c______lp_stg12_to_gp_620_ld86__p___m_2_rp__value = stg12_to_gp_620.read();
	// Produce: stg12_FIFO_buf84
	stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_sm129_0179_write_bundle_write(/* arg names */stg12_to_gp_620__lp_1_m_stg12_to_gp_620_ld85__p__0_rp__c______lp_stg12_to_gp_620_ld86__p___m_2_rp__value, stg12_FIFO_buf84, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg13_update_0_sm159_0239(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, stg13_cache& stg13, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg12_FIFO_buf84
	auto stg12_FIFO_buf84_1_m__lp_1_m_stg13_1__p__0_rp___p__0_c_____1_m__lp_stg13_0__p___m_1_rp___p___m_1_value = stg12_FIFO_buf84_stg13_update_0_sm159_0239_read_bundle_read(stg12_FIFO_buf84/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_1_m__lp_1_m_stg13_1__p__0_rp___p__0_c_____1_m__lp_stg13_0__p___m_1_rp___p___m_1_value);
	// Produce: stg13
	stg13_stg13_update_0_sm159_0239_write_bundle_write(/* arg names */compute_result, stg13, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg13_to_gp_72427_sm173_0267(stg13_cache& stg13, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg13_to_gp_724, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg13
	auto stg13__lp_1_m_stg13_ld25__p__0_rp__c______lp_stg13_ld26__p___m_1_rp__value = stg13_load_to_stg13_to_gp_72427_sm173_0267_read_bundle_read(stg13/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg13_to_gp_724
	stg13_to_gp_724.write(stg13__lp_1_m_stg13_ld25__p__0_rp__c______lp_stg13_ld26__p___m_1_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg12_to_gp_620_ld86_stg13_0_stg13_ld26_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg12_to_gp_620, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg13_to_gp_724) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg12_to_gp_620_ld86_stg13_0_stg13_ld26__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg12_FIFO_buf84_cache stg12_FIFO_buf84;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg13_cache stg13;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg13_to_gp_72427_sm173_0267[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 43] : 0 <= d1 <= 1921 and 0 <= d2 <= 1080; stg13_update_0_sm159_0239[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 1080; load_to_stg12_FIFO_buf8487_sm129_0179[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 1081 }
//   { load_to_stg13_to_gp_72427_sm173_0267[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 43] : 0 <= d1 <= 1921 and 0 <= d2 <= 1080 }
// Condition for load_to_stg13_to_gp_72427_sm173_0267(((((-43 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-28 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { stg13_update_0_sm159_0239[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 1080 }
// Condition for stg13_update_0_sm159_0239(((((-42 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-28 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg12_FIFO_buf8487_sm129_0179[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 1081 }
// Condition for load_to_stg12_FIFO_buf8487_sm129_0179(((((-41 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-26 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-13 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 28 <= i1 <= 1949 and 14 <= i2 <= 1094 and 42 <= i3 <= 43; [0, i1, i2, 41] : 26 <= i1 <= 1949 and 13 <= i2 <= 1094 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 26; i1 <= 1949; i1++) {
	    for (int i2 = 13; i2 <= 1094; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg12_FIFO_buf8487_sm129_0179(stg12_to_gp_620 /* buf name */, stg12_FIFO_buf84, 0, ((-26 + 1*i1)), ((-13 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 28 and i2 >= 14 }
	        // { [i0, i1, i2] : i1 >= 28 and i2 >= 14 }
	          // { [i0, i1, i2] : -28 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-28 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          stg13_update_0_sm159_0239(stg12_FIFO_buf84 /* buf name */, stg13, 0, ((-28 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 28 and i2 >= 14 }
	        // { [i0, i1, i2] : i1 >= 28 and i2 >= 14 }
	          // { [i0, i1, i2] : -28 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-28 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          load_to_stg13_to_gp_72427_sm173_0267(stg13 /* buf name */, stg13_to_gp_724, 0, ((-28 + 1*i1)), ((-14 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg13_FIFO_buf8891_sm169_0259(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg13_to_gp_724, stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg13_to_gp_724
	auto stg13_to_gp_724__lp_1_m_stg13_to_gp_724_ld89__p__0_rp__c______lp_stg13_to_gp_724_ld90__p___m_1_rp__value = stg13_to_gp_724.read();
	// Produce: stg13_FIFO_buf88
	stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_sm169_0259_write_bundle_write(/* arg names */stg13_to_gp_724__lp_1_m_stg13_to_gp_724_ld89__p__0_rp__c______lp_stg13_to_gp_724_ld90__p___m_1_rp__value, stg13_FIFO_buf88, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg14_update_0_sm160_0241(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, stg14_cache& stg14, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg13_FIFO_buf88
	auto stg13_FIFO_buf88_1_m__lp_1_m_stg14_1__p__0_rp___p__0_c____1_m_stg14_0__p___m_1_value = stg13_FIFO_buf88_stg14_update_0_sm160_0241_read_bundle_read(stg13_FIFO_buf88/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_1_m__lp_1_m_stg14_1__p__0_rp___p__0_c____1_m_stg14_0__p___m_1_value);
	// Produce: stg14
	stg14_stg14_update_0_sm160_0241_write_bundle_write(/* arg names */compute_result, stg14, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg14_to_gp_12831_sm134_0189(stg14_cache& stg14, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg14_to_gp_128, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg14
	auto stg14__lp_1_m_stg14_ld29__p__0_rp__c____stg14_ld30_value = stg14_load_to_stg14_to_gp_12831_sm134_0189_read_bundle_read(stg14/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg14_to_gp_128
	stg14_to_gp_128.write(stg14__lp_1_m_stg14_ld29__p__0_rp__c____stg14_ld30_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg13_to_gp_724_ld90_stg14_0_stg14_ld30_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg13_to_gp_724, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg14_to_gp_128) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg13_to_gp_724_ld90_stg14_0_stg14_ld30__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg13_FIFO_buf88_cache stg13_FIFO_buf88;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg14_cache stg14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg13_FIFO_buf8891_sm169_0259[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 1080; load_to_stg14_to_gp_12831_sm134_0189[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 46] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079; stg14_update_0_sm160_0241[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079 }
//   { load_to_stg13_FIFO_buf8891_sm169_0259[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 1080 }
// Condition for load_to_stg13_FIFO_buf8891_sm169_0259(((((-44 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-28 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg14_to_gp_12831_sm134_0189[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 46] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079 }
// Condition for load_to_stg14_to_gp_12831_sm134_0189(((((-46 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-30 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-15 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { stg14_update_0_sm160_0241[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079 }
// Condition for stg14_update_0_sm160_0241(((((-45 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-30 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-15 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 30 <= i1 <= 1949 and 15 <= i2 <= 1094 and 45 <= i3 <= 46; [0, i1, i2, 44] : 28 <= i1 <= 1949 and 14 <= i2 <= 1094 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 28; i1 <= 1949; i1++) {
	    for (int i2 = 14; i2 <= 1094; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg13_FIFO_buf8891_sm169_0259(stg13_to_gp_724 /* buf name */, stg13_FIFO_buf88, 0, ((-28 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 30 and i2 >= 15 }
	        // { [i0, i1, i2] : i1 >= 30 and i2 >= 15 }
	          // { [i0, i1, i2] : -30 + i1 >= 0 }
	          // { [i0, i1, i2] : -15 + i2 >= 0 }
	        if ((((((-30 + 1*i1)) >= 0) && (((-15 + 1*i2)) >= 0)))) {
	          stg14_update_0_sm160_0241(stg13_FIFO_buf88 /* buf name */, stg14, 0, ((-30 + 1*i1)), ((-15 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 30 and i2 >= 15 }
	        // { [i0, i1, i2] : i1 >= 30 and i2 >= 15 }
	          // { [i0, i1, i2] : -30 + i1 >= 0 }
	          // { [i0, i1, i2] : -15 + i2 >= 0 }
	        if ((((((-30 + 1*i1)) >= 0) && (((-15 + 1*i2)) >= 0)))) {
	          load_to_stg14_to_gp_12831_sm134_0189(stg14 /* buf name */, stg14_to_gp_128, 0, ((-30 + 1*i1)), ((-15 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg0_FIFO_buf6871_sm167_0255(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg0_to_gp_84, stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg0_to_gp_84
	auto stg0_to_gp_84__lp_1_m_stg0_to_gp_84_ld69__p__0_rp__c______lp_stg0_to_gp_84_ld70__p___m_14_rp__value = stg0_to_gp_84.read();
	// Produce: stg0_FIFO_buf68
	stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_sm167_0255_write_bundle_write(/* arg names */stg0_to_gp_84__lp_1_m_stg0_to_gp_84_ld69__p__0_rp__c______lp_stg0_to_gp_84_ld70__p___m_14_rp__value, stg0_FIFO_buf68, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg1_update_0_sm147_0215(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, stg1_cache& stg1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg0_FIFO_buf68
	auto stg0_FIFO_buf68_1_m__lp_1_m_stg1_1__p__0_rp___p__0_c_____1_m__lp_stg1_0__p___m_13_rp___p___m_1_value = stg0_FIFO_buf68_stg1_update_0_sm147_0215_read_bundle_read(stg0_FIFO_buf68/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_1_m__lp_1_m_stg1_1__p__0_rp___p__0_c_____1_m__lp_stg1_0__p___m_13_rp___p___m_1_value);
	// Produce: stg1
	stg1_stg1_update_0_sm147_0215_write_bundle_write(/* arg names */compute_result, stg1, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg1_to_gp_9811_sm162_0245(stg1_cache& stg1, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg1_to_gp_98, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg1
	auto stg1__lp_1_m_stg1_ld9__p__0_rp__c______lp_stg1_ld10__p___m_13_rp__value = stg1_load_to_stg1_to_gp_9811_sm162_0245_read_bundle_read(stg1/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg1_to_gp_98
	stg1_to_gp_98.write(stg1__lp_1_m_stg1_ld9__p__0_rp__c______lp_stg1_ld10__p___m_13_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg0_to_gp_84_ld70_stg1_0_stg1_ld10_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg0_to_gp_84, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg1_to_gp_98) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg0_to_gp_84_ld70_stg1_0_stg1_ld10__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg0_FIFO_buf68_cache stg0_FIFO_buf68;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg1_cache stg1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg1_update_0_sm147_0215[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 1092; load_to_stg0_FIFO_buf6871_sm167_0255[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 1093; load_to_stg1_to_gp_9811_sm162_0245[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 7] : 0 <= d1 <= 1945 and 0 <= d2 <= 1092 }
//   { stg1_update_0_sm147_0215[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 1092 }
// Condition for stg1_update_0_sm147_0215(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg0_FIFO_buf6871_sm167_0255[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 1093 }
// Condition for load_to_stg0_FIFO_buf6871_sm167_0255(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg1_to_gp_9811_sm162_0245[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 7] : 0 <= d1 <= 1945 and 0 <= d2 <= 1092 }
// Condition for load_to_stg1_to_gp_9811_sm162_0245(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 4 <= i1 <= 1949 and 2 <= i2 <= 1094 and 6 <= i3 <= 7; [0, i1, i2, 5] : 2 <= i1 <= 1949 and 0 < i2 <= 1094 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 2; i1 <= 1949; i1++) {
	    for (int i2 = 1; i2 <= 1094; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg0_FIFO_buf6871_sm167_0255(stg0_to_gp_84 /* buf name */, stg0_FIFO_buf68, 0, ((-2 + 1*i1)), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 2 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          stg1_update_0_sm147_0215(stg0_FIFO_buf68 /* buf name */, stg1, 0, ((-4 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 2 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          load_to_stg1_to_gp_9811_sm162_0245(stg1 /* buf name */, stg1_to_gp_98, 0, ((-4 + 1*i1)), ((-2 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg1_FIFO_buf7275_sm141_0203(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg1_to_gp_98, stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg1_to_gp_98
	auto stg1_to_gp_98__lp_1_m_stg1_to_gp_98_ld73__p__0_rp__c______lp_stg1_to_gp_98_ld74__p___m_13_rp__value = stg1_to_gp_98.read();
	// Produce: stg1_FIFO_buf72
	stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_sm141_0203_write_bundle_write(/* arg names */stg1_to_gp_98__lp_1_m_stg1_to_gp_98_ld73__p__0_rp__c______lp_stg1_to_gp_98_ld74__p___m_13_rp__value, stg1_FIFO_buf72, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg2_update_0_sm148_0217(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, stg2_cache& stg2, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg1_FIFO_buf72
	auto stg1_FIFO_buf72_1_m__lp_1_m_stg2_1__p__0_rp___p__0_c_____1_m__lp_stg2_0__p___m_12_rp___p___m_1_value = stg1_FIFO_buf72_stg2_update_0_sm148_0217_read_bundle_read(stg1_FIFO_buf72/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_1_m__lp_1_m_stg2_1__p__0_rp___p__0_c_____1_m__lp_stg2_0__p___m_12_rp___p___m_1_value);
	// Produce: stg2
	stg2_stg2_update_0_sm148_0217_write_bundle_write(/* arg names */compute_result, stg2, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg2_to_gp_103235_sm135_0191(stg2_cache& stg2, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg2_to_gp_1032, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg2
	auto stg2__lp_1_m_stg2_ld33__p__0_rp__c______lp_stg2_ld34__p___m_12_rp__value = stg2_load_to_stg2_to_gp_103235_sm135_0191_read_bundle_read(stg2/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg2_to_gp_1032
	stg2_to_gp_1032.write(stg2__lp_1_m_stg2_ld33__p__0_rp__c______lp_stg2_ld34__p___m_12_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg1_to_gp_98_ld74_stg2_0_stg2_ld34_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg1_to_gp_98, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg2_to_gp_1032) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg1_to_gp_98_ld74_stg2_0_stg2_ld34__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg1_FIFO_buf72_cache stg1_FIFO_buf72;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg2_cache stg2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg2_update_0_sm148_0217[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 1091; load_to_stg2_to_gp_103235_sm135_0191[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 10] : 0 <= d1 <= 1943 and 0 <= d2 <= 1091; load_to_stg1_FIFO_buf7275_sm141_0203[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 1092 }
//   { stg2_update_0_sm148_0217[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 1091 }
// Condition for stg2_update_0_sm148_0217(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg2_to_gp_103235_sm135_0191[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 10] : 0 <= d1 <= 1943 and 0 <= d2 <= 1091 }
// Condition for load_to_stg2_to_gp_103235_sm135_0191(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))
//   { load_to_stg1_FIFO_buf7275_sm141_0203[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 1092 }
// Condition for load_to_stg1_FIFO_buf7275_sm141_0203(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1094 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 6 <= i1 <= 1949 and 3 <= i2 <= 1094 and 9 <= i3 <= 10; [0, i1, i2, 8] : 4 <= i1 <= 1949 and 2 <= i2 <= 1094 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 4; i1 <= 1949; i1++) {
	    for (int i2 = 2; i2 <= 1094; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg1_FIFO_buf7275_sm141_0203(stg1_to_gp_98 /* buf name */, stg1_FIFO_buf72, 0, ((-4 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 3 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 3 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-3 + 1*i2)) >= 0)))) {
	          stg2_update_0_sm148_0217(stg1_FIFO_buf72 /* buf name */, stg2, 0, ((-6 + 1*i1)), ((-3 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 3 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 3 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-3 + 1*i2)) >= 0)))) {
	          load_to_stg2_to_gp_103235_sm135_0191(stg2 /* buf name */, stg2_to_gp_1032, 0, ((-6 + 1*i1)), ((-3 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void jacdynl_1_opt(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */jacdynl_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("jacdynl_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream< hw_uint<16> > in_to_gp_20;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in_to_gp_20.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg14_to_gp_128;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg14_to_gp_128.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg2_to_gp_1032;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg2_to_gp_1032.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg3_to_gp_1136;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg3_to_gp_1136.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg4_to_gp_1240;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg4_to_gp_1240.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg5_to_gp_1344;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg5_to_gp_1344.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg6_to_gp_1448;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg6_to_gp_1448.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg7_to_gp_1552;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg7_to_gp_1552.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg8_to_gp_1656;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg8_to_gp_1656.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg9_to_gp_360;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg9_to_gp_360.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg0_to_gp_84;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg0_to_gp_84.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg10_to_gp_412;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg10_to_gp_412.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg11_to_gp_516;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg11_to_gp_516.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg12_to_gp_620;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg12_to_gp_620.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg13_to_gp_724;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg13_to_gp_724.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg1_to_gp_98;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg1_to_gp_98.values depth=32
#endif //__VIVADO_SYNTH__


  Extracted_in_0_in_ld2_(in_off_chip, in_to_gp_20);
  Extracted_in_to_gp_20_ld66_stg0_0_stg0_ld6_(in_to_gp_20, stg0_to_gp_84);
  Extracted_stg0_to_gp_84_ld70_stg1_0_stg1_ld10_(stg0_to_gp_84, stg1_to_gp_98);
  Extracted_stg1_to_gp_98_ld74_stg2_0_stg2_ld34_(stg1_to_gp_98, stg2_to_gp_1032);
  Extracted_stg2_to_gp_1032_ld98_stg3_0_stg3_ld38_(stg2_to_gp_1032, stg3_to_gp_1136);
  Extracted_stg3_to_gp_1136_ld102_stg4_0_stg4_ld42_(stg3_to_gp_1136, stg4_to_gp_1240);
  Extracted_stg4_to_gp_1240_ld106_stg5_0_stg5_ld46_(stg4_to_gp_1240, stg5_to_gp_1344);
  Extracted_stg5_to_gp_1344_ld110_stg6_0_stg6_ld50_(stg5_to_gp_1344, stg6_to_gp_1448);
  Extracted_stg6_to_gp_1448_ld114_stg7_0_stg7_ld54_(stg6_to_gp_1448, stg7_to_gp_1552);
  Extracted_stg7_to_gp_1552_ld118_stg8_0_stg8_ld58_(stg7_to_gp_1552, stg8_to_gp_1656);
  Extracted_stg8_to_gp_1656_ld122_stg9_0_stg9_ld62_(stg8_to_gp_1656, stg9_to_gp_360);
  Extracted_stg10_0_stg10_ld14_stg9_to_gp_360_ld126_(stg9_to_gp_360, stg10_to_gp_412);
  Extracted_stg10_to_gp_412_ld78_stg11_0_stg11_ld18_(stg10_to_gp_412, stg11_to_gp_516);
  Extracted_stg11_to_gp_516_ld82_stg12_0_stg12_ld22_(stg11_to_gp_516, stg12_to_gp_620);
  Extracted_stg12_to_gp_620_ld86_stg13_0_stg13_ld26_(stg12_to_gp_620, stg13_to_gp_724);
  Extracted_stg13_to_gp_724_ld90_stg14_0_stg14_ld30_(stg13_to_gp_724, stg14_to_gp_128);
  Extracted_jacdynl_1_0_stg14_to_gp_128_ld94_(stg14_to_gp_128, jacdynl_1);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void jacdynl_1_opt_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */jacdynl_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    jacdynl_1_opt(in_off_chip, jacdynl_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { in_update_0_sm145_0211[root = 0, in_0, in_1] -> in_off_chip[in_1, -15 + in_0] : 0 <= in_0 <= 1949 and 0 <= in_1 <= 1094 }
const int in_update_0_sm145_0211_read_pipe0_num_transfers = 2135250;
  // { jacdynl_1_update_0_sm161_0243[root = 0, jacdynl_1_0, jacdynl_1_1] -> jacdynl_1[jacdynl_1_1, jacdynl_1_0] : 0 <= jacdynl_1_0 <= 1919 and 0 <= jacdynl_1_1 <= 1079 }
const int jacdynl_1_update_0_sm161_0243_write_pipe0_num_transfers = 2073600;


extern "C" {

void jacdynl_1_opt_accel(hw_uint<16>* in_update_0_sm145_0211_read_pipe0, hw_uint<16>* jacdynl_1_update_0_sm161_0243_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_sm145_0211_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = jacdynl_1_update_0_sm161_0243_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_sm145_0211_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = jacdynl_1_update_0_sm161_0243_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > in_update_0_sm145_0211_read_pipe0_channel;
  static HWStream<hw_uint<16> > jacdynl_1_update_0_sm161_0243_write_pipe0_channel;

  burst_read<16>(in_update_0_sm145_0211_read_pipe0, in_update_0_sm145_0211_read_pipe0_channel, in_update_0_sm145_0211_read_pipe0_num_transfers*size);

  jacdynl_1_opt_wrapper(in_update_0_sm145_0211_read_pipe0_channel, jacdynl_1_update_0_sm161_0243_write_pipe0_channel, size);

  burst_write<16>(jacdynl_1_update_0_sm161_0243_write_pipe0, jacdynl_1_update_0_sm161_0243_write_pipe0_channel, jacdynl_1_update_0_sm161_0243_write_pipe0_num_transfers*size);
}

}
extern "C" {

void jacdynl_1_opt_rdai(HWStream<hw_uint<16> >& in_update_0_sm145_0211_read_pipe0, HWStream<hw_uint<16> >&  jacdynl_1_update_0_sm161_0243_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_sm145_0211_read_pipe0
#pragma HLS INTERFACE axis register port = jacdynl_1_update_0_sm161_0243_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  jacdynl_1_opt(in_update_0_sm145_0211_read_pipe0, jacdynl_1_update_0_sm161_0243_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

