#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: blur9_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "blur9_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct blurx_blurx_update_0_sm19_029_10_to_blurx_load_to_blurx_to_gp_003_sm21_033_5_cache {
	// RAM Box: {[0, 1921], [0, 1079]}
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

struct blurx_cache {
  // Reader addrs...
    // { load_to_blurx_to_gp_003_sm21_033[root = 0, blurx_ld2, blurx_ld1] -> blurx[blurx_ld1, blurx_ld2] : 0 <= blurx_ld2 <= 1079 and 0 <= blurx_ld1 <= 1921 }
  // # of banks: 1
  blurx_blurx_update_0_sm19_029_10_to_blurx_load_to_blurx_to_gp_003_sm21_033_5_cache blurx_blurx_update_0_sm19_029_10_to_blurx_load_to_blurx_to_gp_003_sm21_033_5;
};



inline void blurx_blurx_update_0_sm19_029_10_write(hw_uint<16>& blurx_blurx_update_0_sm19_029_10, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_update_0_sm19_029_10_to_blurx_load_to_blurx_to_gp_003_sm21_033_5.push(blurx_blurx_update_0_sm19_029_10);
}

inline hw_uint<16> blurx_load_to_blurx_to_gp_003_sm21_033_5_select(blurx_cache& blurx, int root, int blurx_ld2, int blurx_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_load_to_blurx_to_gp_003_sm21_033_5 read pattern: { load_to_blurx_to_gp_003_sm21_033[root = 0, blurx_ld2, blurx_ld1] -> blurx[blurx_ld1, blurx_ld2] : 0 <= blurx_ld2 <= 1079 and 0 <= blurx_ld1 <= 1921 }
  // Read schedule : { load_to_blurx_to_gp_003_sm21_033[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 4] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
  // Write schedule: { blurx_update_0_sm19_029[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
  auto value_blurx_blurx_update_0_sm19_029_10 = blurx.blurx_blurx_update_0_sm19_029_10_to_blurx_load_to_blurx_to_gp_003_sm21_033_5.peek(/* one reader or all rams */ 0);
  return value_blurx_blurx_update_0_sm19_029_10;
  return 0;
}

// # of bundles = 2
// blurx_update_0_sm19_029_write
//	blurx_blurx_update_0_sm19_029_10
inline void blurx_blurx_update_0_sm19_029_write_bundle_write(hw_uint<16>& blurx_update_0_sm19_029_write, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
	hw_uint<16> blurx_blurx_update_0_sm19_029_10_res = blurx_update_0_sm19_029_write.extract<0, 15>();
	blurx_blurx_update_0_sm19_029_10_write(blurx_blurx_update_0_sm19_029_10_res, blurx, root, blurx_0, blurx_1, dynamic_address);
}

// load_to_blurx_to_gp_003_sm21_033_read
//	blurx_load_to_blurx_to_gp_003_sm21_033_5
inline hw_uint<16> blurx_load_to_blurx_to_gp_003_sm21_033_read_bundle_read(blurx_cache& blurx, int root, int blurx_ld2, int blurx_ld1, int dynamic_address) {
  // # of ports in bundle: 1
    // blurx_load_to_blurx_to_gp_003_sm21_033_5

	hw_uint<16> result;
	hw_uint<16> blurx_load_to_blurx_to_gp_003_sm21_033_5_res = blurx_load_to_blurx_to_gp_003_sm21_033_5_select(blurx, root, blurx_ld2, blurx_ld1, dynamic_address);
	set_at<0, 16>(result, blurx_load_to_blurx_to_gp_003_sm21_033_5_res);
	return result;
}

struct blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_to_blurx_FIFO_buf4_blur9_1_update_0_sm20_031_15_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 3
	// # of read delays: 2
  // 0, 2
	fifo<hw_uint<16>, 3> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(2 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_to_blurx_FIFO_buf4_blur9_1_update_0_sm20_031_16_cache {
	// RAM Box: {[1, 1920], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_to_blurx_FIFO_buf4_blur9_1_update_0_sm20_031_17_cache {
	// RAM Box: {[2, 1921], [0, 1079]}
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

struct blurx_FIFO_buf4_cache {
  // Reader addrs...
    // { blur9_1_update_0_sm20_031[root = 0, blur9_1_0, blur9_1_1] -> blurx_FIFO_buf4[blur9_1_1, blur9_1_0] : 0 <= blur9_1_0 <= 1079 and 0 <= blur9_1_1 <= 1919 }
    // { blur9_1_update_0_sm20_031[root = 0, blur9_1_0, blur9_1_1] -> blurx_FIFO_buf4[1 + blur9_1_1, blur9_1_0] : 0 <= blur9_1_0 <= 1079 and 0 <= blur9_1_1 <= 1919 }
    // { blur9_1_update_0_sm20_031[root = 0, blur9_1_0, blur9_1_1] -> blurx_FIFO_buf4[2 + blur9_1_1, blur9_1_0] : 0 <= blur9_1_0 <= 1079 and 0 <= blur9_1_1 <= 1919 }
  // # of banks: 3
  blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_to_blurx_FIFO_buf4_blur9_1_update_0_sm20_031_15_cache blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_to_blurx_FIFO_buf4_blur9_1_update_0_sm20_031_15;
  blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_to_blurx_FIFO_buf4_blur9_1_update_0_sm20_031_16_cache blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_to_blurx_FIFO_buf4_blur9_1_update_0_sm20_031_16;
  blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_to_blurx_FIFO_buf4_blur9_1_update_0_sm20_031_17_cache blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_to_blurx_FIFO_buf4_blur9_1_update_0_sm20_031_17;
};



inline void blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_write(hw_uint<16>& blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6, blurx_FIFO_buf4_cache& blurx_FIFO_buf4, int root, int blurx_to_gp_00_ld6, int blurx_to_gp_00_ld5, int dynamic_address) {
  blurx_FIFO_buf4.blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_to_blurx_FIFO_buf4_blur9_1_update_0_sm20_031_15.push(blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6);
  blurx_FIFO_buf4.blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_to_blurx_FIFO_buf4_blur9_1_update_0_sm20_031_16.push(blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6);
  blurx_FIFO_buf4.blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_to_blurx_FIFO_buf4_blur9_1_update_0_sm20_031_17.push(blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6);
}

inline hw_uint<16> blurx_FIFO_buf4_blur9_1_update_0_sm20_031_15_select(blurx_FIFO_buf4_cache& blurx_FIFO_buf4, int root, int blur9_1_0, int blur9_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_FIFO_buf4_blur9_1_update_0_sm20_031_15 read pattern: { blur9_1_update_0_sm20_031[root = 0, blur9_1_0, blur9_1_1] -> blurx_FIFO_buf4[blur9_1_1, blur9_1_0] : 0 <= blur9_1_0 <= 1079 and 0 <= blur9_1_1 <= 1919 }
  // Read schedule : { blur9_1_update_0_sm20_031[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_blurx_FIFO_buf47_sm22_035[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
  auto value_blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6 = blurx_FIFO_buf4.blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_to_blurx_FIFO_buf4_blur9_1_update_0_sm20_031_15.peek(/* one reader or all rams */ 2);
  return value_blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6;
  return 0;
}

inline hw_uint<16> blurx_FIFO_buf4_blur9_1_update_0_sm20_031_16_select(blurx_FIFO_buf4_cache& blurx_FIFO_buf4, int root, int blur9_1_0, int blur9_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_FIFO_buf4_blur9_1_update_0_sm20_031_16 read pattern: { blur9_1_update_0_sm20_031[root = 0, blur9_1_0, blur9_1_1] -> blurx_FIFO_buf4[1 + blur9_1_1, blur9_1_0] : 0 <= blur9_1_0 <= 1079 and 0 <= blur9_1_1 <= 1919 }
  // Read schedule : { blur9_1_update_0_sm20_031[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_blurx_FIFO_buf47_sm22_035[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
  auto value_blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6 = blurx_FIFO_buf4.blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_to_blurx_FIFO_buf4_blur9_1_update_0_sm20_031_16.peek(/* one reader or all rams */ 1);
  return value_blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6;
  return 0;
}

inline hw_uint<16> blurx_FIFO_buf4_blur9_1_update_0_sm20_031_17_select(blurx_FIFO_buf4_cache& blurx_FIFO_buf4, int root, int blur9_1_0, int blur9_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_FIFO_buf4_blur9_1_update_0_sm20_031_17 read pattern: { blur9_1_update_0_sm20_031[root = 0, blur9_1_0, blur9_1_1] -> blurx_FIFO_buf4[2 + blur9_1_1, blur9_1_0] : 0 <= blur9_1_0 <= 1079 and 0 <= blur9_1_1 <= 1919 }
  // Read schedule : { blur9_1_update_0_sm20_031[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_blurx_FIFO_buf47_sm22_035[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
  auto value_blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6 = blurx_FIFO_buf4.blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_to_blurx_FIFO_buf4_blur9_1_update_0_sm20_031_17.peek(/* one reader or all rams */ 0);
  return value_blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6;
  return 0;
}

// # of bundles = 2
// blur9_1_update_0_sm20_031_read
//	blurx_FIFO_buf4_blur9_1_update_0_sm20_031_15
//	blurx_FIFO_buf4_blur9_1_update_0_sm20_031_16
//	blurx_FIFO_buf4_blur9_1_update_0_sm20_031_17
inline hw_uint<48> blurx_FIFO_buf4_blur9_1_update_0_sm20_031_read_bundle_read(blurx_FIFO_buf4_cache& blurx_FIFO_buf4, int root, int blur9_1_0, int blur9_1_1, int dynamic_address) {
  // # of ports in bundle: 3
    // blurx_FIFO_buf4_blur9_1_update_0_sm20_031_15
    // blurx_FIFO_buf4_blur9_1_update_0_sm20_031_16
    // blurx_FIFO_buf4_blur9_1_update_0_sm20_031_17

	hw_uint<48> result;
	hw_uint<16> blurx_FIFO_buf4_blur9_1_update_0_sm20_031_15_res = blurx_FIFO_buf4_blur9_1_update_0_sm20_031_15_select(blurx_FIFO_buf4, root, blur9_1_0, blur9_1_1, dynamic_address);
	set_at<0, 48>(result, blurx_FIFO_buf4_blur9_1_update_0_sm20_031_15_res);
	hw_uint<16> blurx_FIFO_buf4_blur9_1_update_0_sm20_031_16_res = blurx_FIFO_buf4_blur9_1_update_0_sm20_031_16_select(blurx_FIFO_buf4, root, blur9_1_0, blur9_1_1, dynamic_address);
	set_at<16, 48>(result, blurx_FIFO_buf4_blur9_1_update_0_sm20_031_16_res);
	hw_uint<16> blurx_FIFO_buf4_blur9_1_update_0_sm20_031_17_res = blurx_FIFO_buf4_blur9_1_update_0_sm20_031_17_select(blurx_FIFO_buf4, root, blur9_1_0, blur9_1_1, dynamic_address);
	set_at<32, 48>(result, blurx_FIFO_buf4_blur9_1_update_0_sm20_031_17_res);
	return result;
}

// load_to_blurx_FIFO_buf47_sm22_035_write
//	blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6
inline void blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_write_bundle_write(hw_uint<16>& load_to_blurx_FIFO_buf47_sm22_035_write, blurx_FIFO_buf4_cache& blurx_FIFO_buf4, int root, int blurx_to_gp_00_ld6, int blurx_to_gp_00_ld5, int dynamic_address) {
	hw_uint<16> blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_res = load_to_blurx_FIFO_buf47_sm22_035_write.extract<0, 15>();
	blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_write(blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_6_res, blurx_FIFO_buf4, root, blurx_to_gp_00_ld6, blurx_to_gp_00_ld5, dynamic_address);
}

struct input_input_update_0_sm18_027_8_to_input_load_to_input_to_gp_1811_sm17_025_1_cache {
	// RAM Box: {[0, 1921], [0, 1081]}
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

struct input_cache {
  // Reader addrs...
    // { load_to_input_to_gp_1811_sm17_025[root = 0, input_ld10, input_ld9] -> input[input_ld9, input_ld10] : 0 <= input_ld10 <= 1081 and 0 <= input_ld9 <= 1921 }
  // # of banks: 1
  input_input_update_0_sm18_027_8_to_input_load_to_input_to_gp_1811_sm17_025_1_cache input_input_update_0_sm18_027_8_to_input_load_to_input_to_gp_1811_sm17_025_1;
};



inline void input_input_update_0_sm18_027_8_write(hw_uint<16>& input_input_update_0_sm18_027_8, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_update_0_sm18_027_8_to_input_load_to_input_to_gp_1811_sm17_025_1.push(input_input_update_0_sm18_027_8);
}

inline hw_uint<16> input_load_to_input_to_gp_1811_sm17_025_1_select(input_cache& input, int root, int input_ld10, int input_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_load_to_input_to_gp_1811_sm17_025_1 read pattern: { load_to_input_to_gp_1811_sm17_025[root = 0, input_ld10, input_ld9] -> input[input_ld9, input_ld10] : 0 <= input_ld10 <= 1081 and 0 <= input_ld9 <= 1921 }
  // Read schedule : { load_to_input_to_gp_1811_sm17_025[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { input_update_0_sm18_027[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_input_input_update_0_sm18_027_8 = input.input_input_update_0_sm18_027_8_to_input_load_to_input_to_gp_1811_sm17_025_1.peek(/* one reader or all rams */ 0);
  return value_input_input_update_0_sm18_027_8;
  return 0;
}

// # of bundles = 2
// input_update_0_sm18_027_write
//	input_input_update_0_sm18_027_8
inline void input_input_update_0_sm18_027_write_bundle_write(hw_uint<16>& input_update_0_sm18_027_write, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
	hw_uint<16> input_input_update_0_sm18_027_8_res = input_update_0_sm18_027_write.extract<0, 15>();
	input_input_update_0_sm18_027_8_write(input_input_update_0_sm18_027_8_res, input, root, input_0, input_1, dynamic_address);
}

// load_to_input_to_gp_1811_sm17_025_read
//	input_load_to_input_to_gp_1811_sm17_025_1
inline hw_uint<16> input_load_to_input_to_gp_1811_sm17_025_read_bundle_read(input_cache& input, int root, int input_ld10, int input_ld9, int dynamic_address) {
  // # of ports in bundle: 1
    // input_load_to_input_to_gp_1811_sm17_025_1

	hw_uint<16> result;
	hw_uint<16> input_load_to_input_to_gp_1811_sm17_025_1_res = input_load_to_input_to_gp_1811_sm17_025_1_select(input, root, input_ld10, input_ld9, dynamic_address);
	set_at<0, 16>(result, input_load_to_input_to_gp_1811_sm17_025_1_res);
	return result;
}

struct input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2_merged_banks_3_cache {
	// RAM Box: {[0, 1921], [0, 1081]}
	// Capacity: 3845
	// # of read delays: 3
  // 0, 1922, 3844
	hw_uint<16> f0;
	fifo<hw_uint<16>, 1921> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1921> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1921() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_1922() {
		return f2;
	}

	inline hw_uint<16> peek_3843() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_3844() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1921
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1921 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1921
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1921 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_FIFO_buf12_cache {
  // Reader addrs...
    // { blurx_update_0_sm19_029[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12[blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1921 }
    // { blurx_update_0_sm19_029[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12[blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1921 }
    // { blurx_update_0_sm19_029[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12[blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1921 }
  // # of banks: 1
  input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2_merged_banks_3_cache input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2_merged_banks_3;
};



inline void input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2_write(hw_uint<16>& input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2, input_FIFO_buf12_cache& input_FIFO_buf12, int root, int input_to_gp_18_ld14, int input_to_gp_18_ld13, int dynamic_address) {
  input_FIFO_buf12.input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2_merged_banks_3.push(input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2);
}

inline hw_uint<16> input_FIFO_buf12_blurx_update_0_sm19_029_11_select(input_FIFO_buf12_cache& input_FIFO_buf12, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf12_blurx_update_0_sm19_029_11 read pattern: { blurx_update_0_sm19_029[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12[blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1921 }
  // Read schedule : { blurx_update_0_sm19_029[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_input_FIFO_buf1215_sm16_023[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2 = input_FIFO_buf12.input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2_merged_banks_3.peek_3844();
  return value_input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2;
  return 0;
}

inline hw_uint<16> input_FIFO_buf12_blurx_update_0_sm19_029_12_select(input_FIFO_buf12_cache& input_FIFO_buf12, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf12_blurx_update_0_sm19_029_12 read pattern: { blurx_update_0_sm19_029[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12[blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1921 }
  // Read schedule : { blurx_update_0_sm19_029[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_input_FIFO_buf1215_sm16_023[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2 = input_FIFO_buf12.input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2_merged_banks_3.peek_1922();
  return value_input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2;
  return 0;
}

inline hw_uint<16> input_FIFO_buf12_blurx_update_0_sm19_029_13_select(input_FIFO_buf12_cache& input_FIFO_buf12, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf12_blurx_update_0_sm19_029_13 read pattern: { blurx_update_0_sm19_029[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12[blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1921 }
  // Read schedule : { blurx_update_0_sm19_029[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_input_FIFO_buf1215_sm16_023[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2 = input_FIFO_buf12.input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2_merged_banks_3.peek_0();
  return value_input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2;
  return 0;
}

// # of bundles = 2
// blurx_update_0_sm19_029_read
//	input_FIFO_buf12_blurx_update_0_sm19_029_11
//	input_FIFO_buf12_blurx_update_0_sm19_029_12
//	input_FIFO_buf12_blurx_update_0_sm19_029_13
inline hw_uint<48> input_FIFO_buf12_blurx_update_0_sm19_029_read_bundle_read(input_FIFO_buf12_cache& input_FIFO_buf12, int root, int blurx_0, int blurx_1, int dynamic_address) {
  // # of ports in bundle: 3
    // input_FIFO_buf12_blurx_update_0_sm19_029_11
    // input_FIFO_buf12_blurx_update_0_sm19_029_12
    // input_FIFO_buf12_blurx_update_0_sm19_029_13

	hw_uint<48> result;
	hw_uint<16> input_FIFO_buf12_blurx_update_0_sm19_029_11_res = input_FIFO_buf12_blurx_update_0_sm19_029_11_select(input_FIFO_buf12, root, blurx_0, blurx_1, dynamic_address);
	set_at<0, 48>(result, input_FIFO_buf12_blurx_update_0_sm19_029_11_res);
	hw_uint<16> input_FIFO_buf12_blurx_update_0_sm19_029_12_res = input_FIFO_buf12_blurx_update_0_sm19_029_12_select(input_FIFO_buf12, root, blurx_0, blurx_1, dynamic_address);
	set_at<16, 48>(result, input_FIFO_buf12_blurx_update_0_sm19_029_12_res);
	hw_uint<16> input_FIFO_buf12_blurx_update_0_sm19_029_13_res = input_FIFO_buf12_blurx_update_0_sm19_029_13_select(input_FIFO_buf12, root, blurx_0, blurx_1, dynamic_address);
	set_at<32, 48>(result, input_FIFO_buf12_blurx_update_0_sm19_029_13_res);
	return result;
}

// load_to_input_FIFO_buf1215_sm16_023_write
//	input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2
inline void input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_write_bundle_write(hw_uint<16>& load_to_input_FIFO_buf1215_sm16_023_write, input_FIFO_buf12_cache& input_FIFO_buf12, int root, int input_to_gp_18_ld14, int input_to_gp_18_ld13, int dynamic_address) {
	hw_uint<16> input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2_res = load_to_input_FIFO_buf1215_sm16_023_write.extract<0, 15>();
	input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2_write(input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_2_res, input_FIFO_buf12, root, input_to_gp_18_ld14, input_to_gp_18_ld13, dynamic_address);
}

// Total re-use buffer capacity: 61552 bits
// Operation logic
inline void blur9_1_update_0_sm20_031(blurx_FIFO_buf4_cache& blurx_FIFO_buf4, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blur9_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurx_FIFO_buf4
	auto blurx_FIFO_buf4_1_m__lp_1_m_blur9_1_1__p__0_rp___p__0_p_0_c_____1_m_blur9_1_0__p__0_p_0_value = blurx_FIFO_buf4_blur9_1_update_0_sm20_031_read_bundle_read(blurx_FIFO_buf4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blur9_1_generated_compute_unrolled_1(blurx_FIFO_buf4_1_m__lp_1_m_blur9_1_1__p__0_rp___p__0_p_0_c_____1_m_blur9_1_0__p__0_p_0_value);
	// Produce: blur9_1
	blur9_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_blurx_FIFO_buf47_sm22_035(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blurx_to_gp_00, blurx_FIFO_buf4_cache& blurx_FIFO_buf4, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurx_to_gp_00
	auto blurx_to_gp_00__lp_1_m_blurx_to_gp_00_ld5__p__0_rp__c____blurx_to_gp_00_ld6_value = blurx_to_gp_00.read();
	// Produce: blurx_FIFO_buf4
	blurx_FIFO_buf4_load_to_blurx_FIFO_buf47_sm22_035_write_bundle_write(/* arg names */blurx_to_gp_00__lp_1_m_blurx_to_gp_00_ld5__p__0_rp__c____blurx_to_gp_00_ld6_value, blurx_FIFO_buf4, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_blur9_1_0_blurx_to_gp_00_ld6_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */blurx_to_gp_00, HWStream<hw_uint<16> >& /* get_args num ports = 1 */blur9_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_blur9_1_0_blurx_to_gp_00_ld6__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurx_FIFO_buf4_cache blurx_FIFO_buf4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_blurx_FIFO_buf47_sm22_035[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921; blur9_1_update_0_sm20_031[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
//   { load_to_blurx_FIFO_buf47_sm22_035[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
// Condition for load_to_blurx_FIFO_buf47_sm22_035(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))
//   { blur9_1_update_0_sm20_031[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for blur9_1_update_0_sm20_031(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 6] : 2 <= i1 <= 1081 and 2 <= i2 <= 1921; [0, i1, i2, 5] : 2 <= i1 <= 1081 and 0 <= i2 <= 1921 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 2; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 1921; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_blurx_FIFO_buf47_sm22_035(blurx_to_gp_00 /* buf name */, blurx_FIFO_buf4, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 2 }
	        // { [i0, i1, i2] : i2 >= 2 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-2 + 1*i2)) >= 0)))) {
	          blur9_1_update_0_sm20_031(blurx_FIFO_buf4 /* buf name */, blur9_1, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_input_FIFO_buf1215_sm16_023(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_to_gp_18, input_FIFO_buf12_cache& input_FIFO_buf12, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_to_gp_18
	auto input_to_gp_18__lp_1_m_input_to_gp_18_ld13__p__0_rp__c____input_to_gp_18_ld14_value = input_to_gp_18.read();
	// Produce: input_FIFO_buf12
	input_FIFO_buf12_load_to_input_FIFO_buf1215_sm16_023_write_bundle_write(/* arg names */input_to_gp_18__lp_1_m_input_to_gp_18_ld13__p__0_rp__c____input_to_gp_18_ld14_value, input_FIFO_buf12, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_blurx_to_gp_003_sm21_033(blurx_cache& blurx, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blurx_to_gp_00, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurx
	auto blurx__lp_1_m_blurx_ld1__p__0_rp__c____blurx_ld2_value = blurx_load_to_blurx_to_gp_003_sm21_033_read_bundle_read(blurx/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: blurx_to_gp_00
	blurx_to_gp_00.write(blurx__lp_1_m_blurx_ld1__p__0_rp__c____blurx_ld2_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blurx_update_0_sm19_029(input_FIFO_buf12_cache& input_FIFO_buf12, blurx_cache& blurx, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_FIFO_buf12
	auto input_FIFO_buf12_1_m__lp_1_m_blurx_1__p__0_rp___p__0_p_0_c_____1_m_blurx_0__p__0_p_0_value = input_FIFO_buf12_blurx_update_0_sm19_029_read_bundle_read(input_FIFO_buf12/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blurx_generated_compute_unrolled_1(input_FIFO_buf12_1_m__lp_1_m_blurx_1__p__0_rp___p__0_p_0_c_____1_m_blurx_0__p__0_p_0_value);
	// Produce: blurx
	blurx_blurx_update_0_sm19_029_write_bundle_write(/* arg names */compute_result, blurx, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_blurx_0_blurx_ld2_input_to_gp_18_ld14_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_to_gp_18, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */blurx_to_gp_00) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_blurx_0_blurx_ld2_input_to_gp_18_ld14__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurx_cache blurx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  input_FIFO_buf12_cache input_FIFO_buf12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_input_FIFO_buf1215_sm16_023[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921; load_to_blurx_to_gp_003_sm21_033[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 4] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921; blurx_update_0_sm19_029[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
//   { load_to_input_FIFO_buf1215_sm16_023[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for load_to_input_FIFO_buf1215_sm16_023(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))
//   { load_to_blurx_to_gp_003_sm21_033[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 4] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
// Condition for load_to_blurx_to_gp_003_sm21_033(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))
//   { blurx_update_0_sm19_029[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
// Condition for blurx_update_0_sm19_029(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 1081 and 0 <= i2 <= 1921 and 3 <= i3 <= 4; [0, i1, i2, 2] : 0 <= i1 <= 1081 and 0 <= i2 <= 1921 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 1921; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_input_FIFO_buf1215_sm16_023(input_to_gp_18 /* buf name */, input_FIFO_buf12, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0)))) {
	          blurx_update_0_sm19_029(input_FIFO_buf12 /* buf name */, blurx, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0)))) {
	          load_to_blurx_to_gp_003_sm21_033(blurx /* buf name */, blurx_to_gp_00, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void input_update_0_sm18_027(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_arg, input_cache& input, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_arg
	auto input_arg_1_m__lp_1_m_input_1__p__0_rp___p__0_p_0_c_____1_m_input_0__p__0_p_0_value = input_arg.read();
	auto compute_result = input_generated_compute_unrolled_1(input_arg_1_m__lp_1_m_input_1__p__0_rp___p__0_p_0_c_____1_m_input_0__p__0_p_0_value);
	// Produce: input
	input_input_update_0_sm18_027_write_bundle_write(/* arg names */compute_result, input, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_input_to_gp_1811_sm17_025(input_cache& input, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_to_gp_18, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input
	auto input__lp_1_m_input_ld9__p__0_rp__c____input_ld10_value = input_load_to_input_to_gp_1811_sm17_025_read_bundle_read(input/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: input_to_gp_18
	input_to_gp_18.write(input__lp_1_m_input_ld9__p__0_rp__c____input_ld10_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_input_0_input_ld10_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_to_gp_18) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_input_0_input_ld10__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  input_cache input;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { input_update_0_sm18_027[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921; load_to_input_to_gp_1811_sm17_025[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
//   { input_update_0_sm18_027[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for input_update_0_sm18_027(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))
//   { load_to_input_to_gp_1811_sm17_025[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for load_to_input_to_gp_1811_sm17_025(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 1081 and 0 <= i2 <= 1921 and 0 <= i3 <= 1 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 1921; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          input_update_0_sm18_027(input_arg /* buf name */, input, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_input_to_gp_1811_sm17_025(input /* buf name */, input_to_gp_18, 0, ((1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void blur9_1_opt_d32(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */blur9_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("blur9_1_opt_d32_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match blurx_to_gp_00 = 512
// Bits to slack match blurx_to_gp_00 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match input_to_gp_18 = 512
// Bits to slack match input_to_gp_18 = 512
// Bits in internal re-use buffers               : 61552 bits
// Bits in channels needed to guarantee causality: 0
// Bits in channels needed to match slack        : 1024
  HWStream< hw_uint<16> > blurx_to_gp_00;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=blurx_to_gp_00.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > input_to_gp_18;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=input_to_gp_18.values depth=32
#endif //__VIVADO_SYNTH__


  Extracted_input_0_input_ld10_(input_arg, input_to_gp_18);
  Extracted_blurx_0_blurx_ld2_input_to_gp_18_ld14_(input_to_gp_18, blurx_to_gp_00);
  Extracted_blur9_1_0_blurx_to_gp_00_ld6_(blurx_to_gp_00, blur9_1);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void blur9_1_opt_d32_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */blur9_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    blur9_1_opt_d32(input_arg, blur9_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { blur9_1_update_0_sm20_031[root = 0, blur9_1_0, blur9_1_1] -> blur9_1[blur9_1_1, blur9_1_0] : 0 <= blur9_1_0 <= 1079 and 0 <= blur9_1_1 <= 1919 }
const int blur9_1_update_0_sm20_031_write_pipe0_num_transfers = 2073600;
  // { input_update_0_sm18_027[root = 0, input_0, input_1] -> input_arg[input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 1921 }
const int input_update_0_sm18_027_read_pipe0_num_transfers = 2079604;


extern "C" {

void blur9_1_opt_d32_accel(hw_uint<16>* input_update_0_sm18_027_read_pipe0, hw_uint<16>* blur9_1_update_0_sm20_031_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_update_0_sm18_027_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = blur9_1_update_0_sm20_031_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = input_update_0_sm18_027_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = blur9_1_update_0_sm20_031_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > input_update_0_sm18_027_read_pipe0_channel;
  static HWStream<hw_uint<16> > blur9_1_update_0_sm20_031_write_pipe0_channel;

  burst_read<16>(input_update_0_sm18_027_read_pipe0, input_update_0_sm18_027_read_pipe0_channel, input_update_0_sm18_027_read_pipe0_num_transfers*size);

  blur9_1_opt_d32_wrapper(input_update_0_sm18_027_read_pipe0_channel, blur9_1_update_0_sm20_031_write_pipe0_channel, size);

  burst_write<16>(blur9_1_update_0_sm20_031_write_pipe0, blur9_1_update_0_sm20_031_write_pipe0_channel, blur9_1_update_0_sm20_031_write_pipe0_num_transfers*size);
}

}
extern "C" {

void blur9_1_opt_d32_rdai(HWStream<hw_uint<16> >& input_update_0_sm18_027_read_pipe0, HWStream<hw_uint<16> >&  blur9_1_update_0_sm20_031_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = input_update_0_sm18_027_read_pipe0
#pragma HLS INTERFACE axis register port = blur9_1_update_0_sm20_031_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  blur9_1_opt_d32(input_update_0_sm18_027_read_pipe0, blur9_1_update_0_sm20_031_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

