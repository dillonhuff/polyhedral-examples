#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: bxy_noinit_p220_8_opt_compute_units.h
#include "bxy_noinit_p220_8_opt_compute_units.h"

#include "hw_classes.h"

struct blurx_blurx_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 1920], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	hw_uint<16> f0;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blurx_blurx_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 1921], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	hw_uint<16> f0;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blurx_blurx_update_0_write2_merged_banks_3_cache {
	// RAM Box: {[2, 1922], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	hw_uint<16> f0;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blurx_blurx_update_0_write3_merged_banks_3_cache {
	// RAM Box: {[3, 1923], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	hw_uint<16> f0;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blurx_blurx_update_0_write4_merged_banks_3_cache {
	// RAM Box: {[4, 1924], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	hw_uint<16> f0;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blurx_blurx_update_0_write5_merged_banks_3_cache {
	// RAM Box: {[5, 1925], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	hw_uint<16> f0;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blurx_blurx_update_0_write6_merged_banks_3_cache {
	// RAM Box: {[6, 1926], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	hw_uint<16> f0;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blurx_blurx_update_0_write7_merged_banks_3_cache {
	// RAM Box: {[7, 1927], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	hw_uint<16> f0;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blurx_cache {
  // # of banks: 8
  blurx_blurx_update_0_write0_merged_banks_3_cache blurx_blurx_update_0_write0_merged_banks_3;
  blurx_blurx_update_0_write1_merged_banks_3_cache blurx_blurx_update_0_write1_merged_banks_3;
  blurx_blurx_update_0_write2_merged_banks_3_cache blurx_blurx_update_0_write2_merged_banks_3;
  blurx_blurx_update_0_write3_merged_banks_3_cache blurx_blurx_update_0_write3_merged_banks_3;
  blurx_blurx_update_0_write4_merged_banks_3_cache blurx_blurx_update_0_write4_merged_banks_3;
  blurx_blurx_update_0_write5_merged_banks_3_cache blurx_blurx_update_0_write5_merged_banks_3;
  blurx_blurx_update_0_write6_merged_banks_3_cache blurx_blurx_update_0_write6_merged_banks_3;
  blurx_blurx_update_0_write7_merged_banks_3_cache blurx_blurx_update_0_write7_merged_banks_3;
};



inline void blurx_blurx_update_0_write0_write(hw_uint<16>& blurx_blurx_update_0_write0, blurx_cache& blurx, int d0, int d1, int dynamic_address) {
  blurx.blurx_blurx_update_0_write0_merged_banks_3.push(blurx_blurx_update_0_write0);
}

inline void blurx_blurx_update_0_write1_write(hw_uint<16>& blurx_blurx_update_0_write1, blurx_cache& blurx, int d0, int d1, int dynamic_address) {
  blurx.blurx_blurx_update_0_write1_merged_banks_3.push(blurx_blurx_update_0_write1);
}

inline void blurx_blurx_update_0_write2_write(hw_uint<16>& blurx_blurx_update_0_write2, blurx_cache& blurx, int d0, int d1, int dynamic_address) {
  blurx.blurx_blurx_update_0_write2_merged_banks_3.push(blurx_blurx_update_0_write2);
}

inline void blurx_blurx_update_0_write3_write(hw_uint<16>& blurx_blurx_update_0_write3, blurx_cache& blurx, int d0, int d1, int dynamic_address) {
  blurx.blurx_blurx_update_0_write3_merged_banks_3.push(blurx_blurx_update_0_write3);
}

inline void blurx_blurx_update_0_write4_write(hw_uint<16>& blurx_blurx_update_0_write4, blurx_cache& blurx, int d0, int d1, int dynamic_address) {
  blurx.blurx_blurx_update_0_write4_merged_banks_3.push(blurx_blurx_update_0_write4);
}

inline void blurx_blurx_update_0_write5_write(hw_uint<16>& blurx_blurx_update_0_write5, blurx_cache& blurx, int d0, int d1, int dynamic_address) {
  blurx.blurx_blurx_update_0_write5_merged_banks_3.push(blurx_blurx_update_0_write5);
}

inline void blurx_blurx_update_0_write6_write(hw_uint<16>& blurx_blurx_update_0_write6, blurx_cache& blurx, int d0, int d1, int dynamic_address) {
  blurx.blurx_blurx_update_0_write6_merged_banks_3.push(blurx_blurx_update_0_write6);
}

inline void blurx_blurx_update_0_write7_write(hw_uint<16>& blurx_blurx_update_0_write7, blurx_cache& blurx, int d0, int d1, int dynamic_address) {
  blurx.blurx_blurx_update_0_write7_merged_banks_3.push(blurx_blurx_update_0_write7);
}

inline hw_uint<16> bxy_noinit_p220_8_rd0_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd0 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write0 = blurx.blurx_blurx_update_0_write0_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write0;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd1_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd1 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write1 = blurx.blurx_blurx_update_0_write1_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write1;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd10_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd10 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write4 = blurx.blurx_blurx_update_0_write4_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write4;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd11_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd11 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write5 = blurx.blurx_blurx_update_0_write5_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write5;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd12_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd12 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write4 = blurx.blurx_blurx_update_0_write4_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write4;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd13_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd13 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write5 = blurx.blurx_blurx_update_0_write5_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write5;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd14_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd14 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write6 = blurx.blurx_blurx_update_0_write6_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write6;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd15_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd15 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write5 = blurx.blurx_blurx_update_0_write5_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write5;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd16_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd16 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write6 = blurx.blurx_blurx_update_0_write6_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write6;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd17_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd17 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write7 = blurx.blurx_blurx_update_0_write7_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write7;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd18_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd18 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write6 = blurx.blurx_blurx_update_0_write6_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write6;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd19_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd19 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write7 = blurx.blurx_blurx_update_0_write7_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write7;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd2_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd2 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write2 = blurx.blurx_blurx_update_0_write2_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write2;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd20_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd20 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[8 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write0 = blurx.blurx_blurx_update_0_write0_merged_banks_3.peek_0();
  return value_blurx_blurx_update_0_write0;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd21_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd21 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write7 = blurx.blurx_blurx_update_0_write7_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write7;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd22_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd22 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[8 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write0 = blurx.blurx_blurx_update_0_write0_merged_banks_3.peek_0();
  return value_blurx_blurx_update_0_write0;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd23_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd23 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[9 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write1 = blurx.blurx_blurx_update_0_write1_merged_banks_3.peek_0();
  return value_blurx_blurx_update_0_write1;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd3_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd3 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write1 = blurx.blurx_blurx_update_0_write1_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write1;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd4_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd4 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write2 = blurx.blurx_blurx_update_0_write2_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write2;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd5_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd5 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write3 = blurx.blurx_blurx_update_0_write3_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write3;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd6_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd6 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write2 = blurx.blurx_blurx_update_0_write2_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write2;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd7_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd7 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write3 = blurx.blurx_blurx_update_0_write3_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write3;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd8_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd8 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write4 = blurx.blurx_blurx_update_0_write4_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write4;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_8_rd9_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_8_rd9 read pattern: { bxy_noinit_p220_8_update_0[d0, d1] -> blurx[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write3 = blurx.blurx_blurx_update_0_write3_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write3;
  return 0;
}

// # of bundles = 2
// blurx_update_0_write
//	blurx_blurx_update_0_write0
//	blurx_blurx_update_0_write1
//	blurx_blurx_update_0_write2
//	blurx_blurx_update_0_write3
//	blurx_blurx_update_0_write4
//	blurx_blurx_update_0_write5
//	blurx_blurx_update_0_write6
//	blurx_blurx_update_0_write7
inline void blurx_blurx_update_0_write_bundle_write(hw_uint<128>& blurx_update_0_write, blurx_cache& blurx, int d0, int d1, int dynamic_address) {
	hw_uint<16> blurx_blurx_update_0_write0_res = blurx_update_0_write.extract<0, 15>();
	blurx_blurx_update_0_write0_write(blurx_blurx_update_0_write0_res, blurx, d0, d1, dynamic_address);
	hw_uint<16> blurx_blurx_update_0_write1_res = blurx_update_0_write.extract<16, 31>();
	blurx_blurx_update_0_write1_write(blurx_blurx_update_0_write1_res, blurx, d0, d1, dynamic_address);
	hw_uint<16> blurx_blurx_update_0_write2_res = blurx_update_0_write.extract<32, 47>();
	blurx_blurx_update_0_write2_write(blurx_blurx_update_0_write2_res, blurx, d0, d1, dynamic_address);
	hw_uint<16> blurx_blurx_update_0_write3_res = blurx_update_0_write.extract<48, 63>();
	blurx_blurx_update_0_write3_write(blurx_blurx_update_0_write3_res, blurx, d0, d1, dynamic_address);
	hw_uint<16> blurx_blurx_update_0_write4_res = blurx_update_0_write.extract<64, 79>();
	blurx_blurx_update_0_write4_write(blurx_blurx_update_0_write4_res, blurx, d0, d1, dynamic_address);
	hw_uint<16> blurx_blurx_update_0_write5_res = blurx_update_0_write.extract<80, 95>();
	blurx_blurx_update_0_write5_write(blurx_blurx_update_0_write5_res, blurx, d0, d1, dynamic_address);
	hw_uint<16> blurx_blurx_update_0_write6_res = blurx_update_0_write.extract<96, 111>();
	blurx_blurx_update_0_write6_write(blurx_blurx_update_0_write6_res, blurx, d0, d1, dynamic_address);
	hw_uint<16> blurx_blurx_update_0_write7_res = blurx_update_0_write.extract<112, 127>();
	blurx_blurx_update_0_write7_write(blurx_blurx_update_0_write7_res, blurx, d0, d1, dynamic_address);
}

// bxy_noinit_p220_8_update_0_read
//	bxy_noinit_p220_8_rd0
//	bxy_noinit_p220_8_rd1
//	bxy_noinit_p220_8_rd2
//	bxy_noinit_p220_8_rd3
//	bxy_noinit_p220_8_rd4
//	bxy_noinit_p220_8_rd5
//	bxy_noinit_p220_8_rd6
//	bxy_noinit_p220_8_rd7
//	bxy_noinit_p220_8_rd8
//	bxy_noinit_p220_8_rd9
//	bxy_noinit_p220_8_rd10
//	bxy_noinit_p220_8_rd11
//	bxy_noinit_p220_8_rd12
//	bxy_noinit_p220_8_rd13
//	bxy_noinit_p220_8_rd14
//	bxy_noinit_p220_8_rd15
//	bxy_noinit_p220_8_rd16
//	bxy_noinit_p220_8_rd17
//	bxy_noinit_p220_8_rd18
//	bxy_noinit_p220_8_rd19
//	bxy_noinit_p220_8_rd20
//	bxy_noinit_p220_8_rd21
//	bxy_noinit_p220_8_rd22
//	bxy_noinit_p220_8_rd23
inline hw_uint<384> blurx_bxy_noinit_p220_8_update_0_read_bundle_read(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 24
    // bxy_noinit_p220_8_rd0
    // bxy_noinit_p220_8_rd1
    // bxy_noinit_p220_8_rd2
    // bxy_noinit_p220_8_rd3
    // bxy_noinit_p220_8_rd4
    // bxy_noinit_p220_8_rd5
    // bxy_noinit_p220_8_rd6
    // bxy_noinit_p220_8_rd7
    // bxy_noinit_p220_8_rd8
    // bxy_noinit_p220_8_rd9
    // bxy_noinit_p220_8_rd10
    // bxy_noinit_p220_8_rd11
    // bxy_noinit_p220_8_rd12
    // bxy_noinit_p220_8_rd13
    // bxy_noinit_p220_8_rd14
    // bxy_noinit_p220_8_rd15
    // bxy_noinit_p220_8_rd16
    // bxy_noinit_p220_8_rd17
    // bxy_noinit_p220_8_rd18
    // bxy_noinit_p220_8_rd19
    // bxy_noinit_p220_8_rd20
    // bxy_noinit_p220_8_rd21
    // bxy_noinit_p220_8_rd22
    // bxy_noinit_p220_8_rd23

	hw_uint<384> result;
	hw_uint<16> bxy_noinit_p220_8_rd0_res = bxy_noinit_p220_8_rd0_select(blurx, d0, d1, dynamic_address);
	set_at<0, 384>(result, bxy_noinit_p220_8_rd0_res);
	hw_uint<16> bxy_noinit_p220_8_rd1_res = bxy_noinit_p220_8_rd1_select(blurx, d0, d1, dynamic_address);
	set_at<16, 384>(result, bxy_noinit_p220_8_rd1_res);
	hw_uint<16> bxy_noinit_p220_8_rd2_res = bxy_noinit_p220_8_rd2_select(blurx, d0, d1, dynamic_address);
	set_at<32, 384>(result, bxy_noinit_p220_8_rd2_res);
	hw_uint<16> bxy_noinit_p220_8_rd3_res = bxy_noinit_p220_8_rd3_select(blurx, d0, d1, dynamic_address);
	set_at<48, 384>(result, bxy_noinit_p220_8_rd3_res);
	hw_uint<16> bxy_noinit_p220_8_rd4_res = bxy_noinit_p220_8_rd4_select(blurx, d0, d1, dynamic_address);
	set_at<64, 384>(result, bxy_noinit_p220_8_rd4_res);
	hw_uint<16> bxy_noinit_p220_8_rd5_res = bxy_noinit_p220_8_rd5_select(blurx, d0, d1, dynamic_address);
	set_at<80, 384>(result, bxy_noinit_p220_8_rd5_res);
	hw_uint<16> bxy_noinit_p220_8_rd6_res = bxy_noinit_p220_8_rd6_select(blurx, d0, d1, dynamic_address);
	set_at<96, 384>(result, bxy_noinit_p220_8_rd6_res);
	hw_uint<16> bxy_noinit_p220_8_rd7_res = bxy_noinit_p220_8_rd7_select(blurx, d0, d1, dynamic_address);
	set_at<112, 384>(result, bxy_noinit_p220_8_rd7_res);
	hw_uint<16> bxy_noinit_p220_8_rd8_res = bxy_noinit_p220_8_rd8_select(blurx, d0, d1, dynamic_address);
	set_at<128, 384>(result, bxy_noinit_p220_8_rd8_res);
	hw_uint<16> bxy_noinit_p220_8_rd9_res = bxy_noinit_p220_8_rd9_select(blurx, d0, d1, dynamic_address);
	set_at<144, 384>(result, bxy_noinit_p220_8_rd9_res);
	hw_uint<16> bxy_noinit_p220_8_rd10_res = bxy_noinit_p220_8_rd10_select(blurx, d0, d1, dynamic_address);
	set_at<160, 384>(result, bxy_noinit_p220_8_rd10_res);
	hw_uint<16> bxy_noinit_p220_8_rd11_res = bxy_noinit_p220_8_rd11_select(blurx, d0, d1, dynamic_address);
	set_at<176, 384>(result, bxy_noinit_p220_8_rd11_res);
	hw_uint<16> bxy_noinit_p220_8_rd12_res = bxy_noinit_p220_8_rd12_select(blurx, d0, d1, dynamic_address);
	set_at<192, 384>(result, bxy_noinit_p220_8_rd12_res);
	hw_uint<16> bxy_noinit_p220_8_rd13_res = bxy_noinit_p220_8_rd13_select(blurx, d0, d1, dynamic_address);
	set_at<208, 384>(result, bxy_noinit_p220_8_rd13_res);
	hw_uint<16> bxy_noinit_p220_8_rd14_res = bxy_noinit_p220_8_rd14_select(blurx, d0, d1, dynamic_address);
	set_at<224, 384>(result, bxy_noinit_p220_8_rd14_res);
	hw_uint<16> bxy_noinit_p220_8_rd15_res = bxy_noinit_p220_8_rd15_select(blurx, d0, d1, dynamic_address);
	set_at<240, 384>(result, bxy_noinit_p220_8_rd15_res);
	hw_uint<16> bxy_noinit_p220_8_rd16_res = bxy_noinit_p220_8_rd16_select(blurx, d0, d1, dynamic_address);
	set_at<256, 384>(result, bxy_noinit_p220_8_rd16_res);
	hw_uint<16> bxy_noinit_p220_8_rd17_res = bxy_noinit_p220_8_rd17_select(blurx, d0, d1, dynamic_address);
	set_at<272, 384>(result, bxy_noinit_p220_8_rd17_res);
	hw_uint<16> bxy_noinit_p220_8_rd18_res = bxy_noinit_p220_8_rd18_select(blurx, d0, d1, dynamic_address);
	set_at<288, 384>(result, bxy_noinit_p220_8_rd18_res);
	hw_uint<16> bxy_noinit_p220_8_rd19_res = bxy_noinit_p220_8_rd19_select(blurx, d0, d1, dynamic_address);
	set_at<304, 384>(result, bxy_noinit_p220_8_rd19_res);
	hw_uint<16> bxy_noinit_p220_8_rd20_res = bxy_noinit_p220_8_rd20_select(blurx, d0, d1, dynamic_address);
	set_at<320, 384>(result, bxy_noinit_p220_8_rd20_res);
	hw_uint<16> bxy_noinit_p220_8_rd21_res = bxy_noinit_p220_8_rd21_select(blurx, d0, d1, dynamic_address);
	set_at<336, 384>(result, bxy_noinit_p220_8_rd21_res);
	hw_uint<16> bxy_noinit_p220_8_rd22_res = bxy_noinit_p220_8_rd22_select(blurx, d0, d1, dynamic_address);
	set_at<352, 384>(result, bxy_noinit_p220_8_rd22_res);
	hw_uint<16> bxy_noinit_p220_8_rd23_res = bxy_noinit_p220_8_rd23_select(blurx, d0, d1, dynamic_address);
	set_at<368, 384>(result, bxy_noinit_p220_8_rd23_res);
	return result;
}

#include "hw_classes.h"

struct input_input_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
	// Capacity: 483
	// # of read delays: 3
  // 0, 241, 482
	hw_uint<16> f0;
	fifo<hw_uint<16>, 240> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 240> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_240() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_241() {
		return f2;
	}

	inline hw_uint<16> peek_481() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_482() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 1921], [0, 1081]}
	// Capacity: 483
	// # of read delays: 3
  // 0, 241, 482
	hw_uint<16> f0;
	fifo<hw_uint<16>, 240> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 240> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_240() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_241() {
		return f2;
	}

	inline hw_uint<16> peek_481() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_482() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write2_merged_banks_3_cache {
	// RAM Box: {[2, 1922], [0, 1081]}
	// Capacity: 483
	// # of read delays: 3
  // 0, 241, 482
	hw_uint<16> f0;
	fifo<hw_uint<16>, 240> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 240> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_240() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_241() {
		return f2;
	}

	inline hw_uint<16> peek_481() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_482() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write3_merged_banks_3_cache {
	// RAM Box: {[3, 1923], [0, 1081]}
	// Capacity: 483
	// # of read delays: 3
  // 0, 241, 482
	hw_uint<16> f0;
	fifo<hw_uint<16>, 240> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 240> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_240() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_241() {
		return f2;
	}

	inline hw_uint<16> peek_481() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_482() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write4_merged_banks_3_cache {
	// RAM Box: {[4, 1924], [0, 1081]}
	// Capacity: 483
	// # of read delays: 3
  // 0, 241, 482
	hw_uint<16> f0;
	fifo<hw_uint<16>, 240> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 240> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_240() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_241() {
		return f2;
	}

	inline hw_uint<16> peek_481() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_482() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write5_merged_banks_3_cache {
	// RAM Box: {[5, 1925], [0, 1081]}
	// Capacity: 483
	// # of read delays: 3
  // 0, 241, 482
	hw_uint<16> f0;
	fifo<hw_uint<16>, 240> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 240> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_240() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_241() {
		return f2;
	}

	inline hw_uint<16> peek_481() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_482() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write6_merged_banks_3_cache {
	// RAM Box: {[6, 1926], [0, 1081]}
	// Capacity: 483
	// # of read delays: 3
  // 0, 241, 482
	hw_uint<16> f0;
	fifo<hw_uint<16>, 240> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 240> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_240() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_241() {
		return f2;
	}

	inline hw_uint<16> peek_481() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_482() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write7_merged_banks_3_cache {
	// RAM Box: {[7, 1927], [0, 1081]}
	// Capacity: 483
	// # of read delays: 3
  // 0, 241, 482
	hw_uint<16> f0;
	fifo<hw_uint<16>, 240> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 240> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_240() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_241() {
		return f2;
	}

	inline hw_uint<16> peek_481() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_482() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_cache {
  // # of banks: 8
  input_input_update_0_write0_merged_banks_3_cache input_input_update_0_write0_merged_banks_3;
  input_input_update_0_write1_merged_banks_3_cache input_input_update_0_write1_merged_banks_3;
  input_input_update_0_write2_merged_banks_3_cache input_input_update_0_write2_merged_banks_3;
  input_input_update_0_write3_merged_banks_3_cache input_input_update_0_write3_merged_banks_3;
  input_input_update_0_write4_merged_banks_3_cache input_input_update_0_write4_merged_banks_3;
  input_input_update_0_write5_merged_banks_3_cache input_input_update_0_write5_merged_banks_3;
  input_input_update_0_write6_merged_banks_3_cache input_input_update_0_write6_merged_banks_3;
  input_input_update_0_write7_merged_banks_3_cache input_input_update_0_write7_merged_banks_3;
};



inline void input_input_update_0_write0_write(hw_uint<16>& input_input_update_0_write0, input_cache& input, int d0, int d1, int dynamic_address) {
  input.input_input_update_0_write0_merged_banks_3.push(input_input_update_0_write0);
}

inline void input_input_update_0_write1_write(hw_uint<16>& input_input_update_0_write1, input_cache& input, int d0, int d1, int dynamic_address) {
  input.input_input_update_0_write1_merged_banks_3.push(input_input_update_0_write1);
}

inline void input_input_update_0_write2_write(hw_uint<16>& input_input_update_0_write2, input_cache& input, int d0, int d1, int dynamic_address) {
  input.input_input_update_0_write2_merged_banks_3.push(input_input_update_0_write2);
}

inline void input_input_update_0_write3_write(hw_uint<16>& input_input_update_0_write3, input_cache& input, int d0, int d1, int dynamic_address) {
  input.input_input_update_0_write3_merged_banks_3.push(input_input_update_0_write3);
}

inline void input_input_update_0_write4_write(hw_uint<16>& input_input_update_0_write4, input_cache& input, int d0, int d1, int dynamic_address) {
  input.input_input_update_0_write4_merged_banks_3.push(input_input_update_0_write4);
}

inline void input_input_update_0_write5_write(hw_uint<16>& input_input_update_0_write5, input_cache& input, int d0, int d1, int dynamic_address) {
  input.input_input_update_0_write5_merged_banks_3.push(input_input_update_0_write5);
}

inline void input_input_update_0_write6_write(hw_uint<16>& input_input_update_0_write6, input_cache& input, int d0, int d1, int dynamic_address) {
  input.input_input_update_0_write6_merged_banks_3.push(input_input_update_0_write6);
}

inline void input_input_update_0_write7_write(hw_uint<16>& input_input_update_0_write7, input_cache& input, int d0, int d1, int dynamic_address) {
  input.input_input_update_0_write7_merged_banks_3.push(input_input_update_0_write7);
}

inline hw_uint<16> blurx_rd0_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd0 read pattern: { blurx_update_0[d0, d1] -> input[8d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_3.peek_482();
  return value_input_input_update_0_write0;
  return 0;
}

inline hw_uint<16> blurx_rd1_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd1 read pattern: { blurx_update_0[d0, d1] -> input[8d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_3.peek_241();
  return value_input_input_update_0_write0;
  return 0;
}

inline hw_uint<16> blurx_rd10_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd10 read pattern: { blurx_update_0[d0, d1] -> input[3 + 8d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write3 = input.input_input_update_0_write3_merged_banks_3.peek_241();
  return value_input_input_update_0_write3;
  return 0;
}

inline hw_uint<16> blurx_rd11_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd11 read pattern: { blurx_update_0[d0, d1] -> input[3 + 8d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write3 = input.input_input_update_0_write3_merged_banks_3.peek_0();
  return value_input_input_update_0_write3;
  return 0;
}

inline hw_uint<16> blurx_rd12_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd12 read pattern: { blurx_update_0[d0, d1] -> input[4 + 8d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write4 = input.input_input_update_0_write4_merged_banks_3.peek_482();
  return value_input_input_update_0_write4;
  return 0;
}

inline hw_uint<16> blurx_rd13_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd13 read pattern: { blurx_update_0[d0, d1] -> input[4 + 8d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write4 = input.input_input_update_0_write4_merged_banks_3.peek_241();
  return value_input_input_update_0_write4;
  return 0;
}

inline hw_uint<16> blurx_rd14_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd14 read pattern: { blurx_update_0[d0, d1] -> input[4 + 8d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write4 = input.input_input_update_0_write4_merged_banks_3.peek_0();
  return value_input_input_update_0_write4;
  return 0;
}

inline hw_uint<16> blurx_rd15_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd15 read pattern: { blurx_update_0[d0, d1] -> input[5 + 8d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write5 = input.input_input_update_0_write5_merged_banks_3.peek_482();
  return value_input_input_update_0_write5;
  return 0;
}

inline hw_uint<16> blurx_rd16_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd16 read pattern: { blurx_update_0[d0, d1] -> input[5 + 8d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write5 = input.input_input_update_0_write5_merged_banks_3.peek_241();
  return value_input_input_update_0_write5;
  return 0;
}

inline hw_uint<16> blurx_rd17_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd17 read pattern: { blurx_update_0[d0, d1] -> input[5 + 8d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write5 = input.input_input_update_0_write5_merged_banks_3.peek_0();
  return value_input_input_update_0_write5;
  return 0;
}

inline hw_uint<16> blurx_rd18_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd18 read pattern: { blurx_update_0[d0, d1] -> input[6 + 8d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write6 = input.input_input_update_0_write6_merged_banks_3.peek_482();
  return value_input_input_update_0_write6;
  return 0;
}

inline hw_uint<16> blurx_rd19_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd19 read pattern: { blurx_update_0[d0, d1] -> input[6 + 8d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write6 = input.input_input_update_0_write6_merged_banks_3.peek_241();
  return value_input_input_update_0_write6;
  return 0;
}

inline hw_uint<16> blurx_rd2_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd2 read pattern: { blurx_update_0[d0, d1] -> input[8d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_3.peek_0();
  return value_input_input_update_0_write0;
  return 0;
}

inline hw_uint<16> blurx_rd20_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd20 read pattern: { blurx_update_0[d0, d1] -> input[6 + 8d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write6 = input.input_input_update_0_write6_merged_banks_3.peek_0();
  return value_input_input_update_0_write6;
  return 0;
}

inline hw_uint<16> blurx_rd21_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd21 read pattern: { blurx_update_0[d0, d1] -> input[7 + 8d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write7 = input.input_input_update_0_write7_merged_banks_3.peek_482();
  return value_input_input_update_0_write7;
  return 0;
}

inline hw_uint<16> blurx_rd22_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd22 read pattern: { blurx_update_0[d0, d1] -> input[7 + 8d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write7 = input.input_input_update_0_write7_merged_banks_3.peek_241();
  return value_input_input_update_0_write7;
  return 0;
}

inline hw_uint<16> blurx_rd23_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd23 read pattern: { blurx_update_0[d0, d1] -> input[7 + 8d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write7 = input.input_input_update_0_write7_merged_banks_3.peek_0();
  return value_input_input_update_0_write7;
  return 0;
}

inline hw_uint<16> blurx_rd3_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd3 read pattern: { blurx_update_0[d0, d1] -> input[1 + 8d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write1 = input.input_input_update_0_write1_merged_banks_3.peek_482();
  return value_input_input_update_0_write1;
  return 0;
}

inline hw_uint<16> blurx_rd4_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd4 read pattern: { blurx_update_0[d0, d1] -> input[1 + 8d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write1 = input.input_input_update_0_write1_merged_banks_3.peek_241();
  return value_input_input_update_0_write1;
  return 0;
}

inline hw_uint<16> blurx_rd5_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd5 read pattern: { blurx_update_0[d0, d1] -> input[1 + 8d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write1 = input.input_input_update_0_write1_merged_banks_3.peek_0();
  return value_input_input_update_0_write1;
  return 0;
}

inline hw_uint<16> blurx_rd6_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd6 read pattern: { blurx_update_0[d0, d1] -> input[2 + 8d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write2 = input.input_input_update_0_write2_merged_banks_3.peek_482();
  return value_input_input_update_0_write2;
  return 0;
}

inline hw_uint<16> blurx_rd7_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd7 read pattern: { blurx_update_0[d0, d1] -> input[2 + 8d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write2 = input.input_input_update_0_write2_merged_banks_3.peek_241();
  return value_input_input_update_0_write2;
  return 0;
}

inline hw_uint<16> blurx_rd8_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd8 read pattern: { blurx_update_0[d0, d1] -> input[2 + 8d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write2 = input.input_input_update_0_write2_merged_banks_3.peek_0();
  return value_input_input_update_0_write2;
  return 0;
}

inline hw_uint<16> blurx_rd9_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd9 read pattern: { blurx_update_0[d0, d1] -> input[3 + 8d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write3 = input.input_input_update_0_write3_merged_banks_3.peek_482();
  return value_input_input_update_0_write3;
  return 0;
}

// # of bundles = 2
// blurx_update_0_read
//	blurx_rd0
//	blurx_rd1
//	blurx_rd2
//	blurx_rd3
//	blurx_rd4
//	blurx_rd5
//	blurx_rd6
//	blurx_rd7
//	blurx_rd8
//	blurx_rd9
//	blurx_rd10
//	blurx_rd11
//	blurx_rd12
//	blurx_rd13
//	blurx_rd14
//	blurx_rd15
//	blurx_rd16
//	blurx_rd17
//	blurx_rd18
//	blurx_rd19
//	blurx_rd20
//	blurx_rd21
//	blurx_rd22
//	blurx_rd23
inline hw_uint<384> input_blurx_update_0_read_bundle_read(input_cache& input, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 24
    // blurx_rd0
    // blurx_rd1
    // blurx_rd2
    // blurx_rd3
    // blurx_rd4
    // blurx_rd5
    // blurx_rd6
    // blurx_rd7
    // blurx_rd8
    // blurx_rd9
    // blurx_rd10
    // blurx_rd11
    // blurx_rd12
    // blurx_rd13
    // blurx_rd14
    // blurx_rd15
    // blurx_rd16
    // blurx_rd17
    // blurx_rd18
    // blurx_rd19
    // blurx_rd20
    // blurx_rd21
    // blurx_rd22
    // blurx_rd23

	hw_uint<384> result;
	hw_uint<16> blurx_rd0_res = blurx_rd0_select(input, d0, d1, dynamic_address);
	set_at<0, 384>(result, blurx_rd0_res);
	hw_uint<16> blurx_rd1_res = blurx_rd1_select(input, d0, d1, dynamic_address);
	set_at<16, 384>(result, blurx_rd1_res);
	hw_uint<16> blurx_rd2_res = blurx_rd2_select(input, d0, d1, dynamic_address);
	set_at<32, 384>(result, blurx_rd2_res);
	hw_uint<16> blurx_rd3_res = blurx_rd3_select(input, d0, d1, dynamic_address);
	set_at<48, 384>(result, blurx_rd3_res);
	hw_uint<16> blurx_rd4_res = blurx_rd4_select(input, d0, d1, dynamic_address);
	set_at<64, 384>(result, blurx_rd4_res);
	hw_uint<16> blurx_rd5_res = blurx_rd5_select(input, d0, d1, dynamic_address);
	set_at<80, 384>(result, blurx_rd5_res);
	hw_uint<16> blurx_rd6_res = blurx_rd6_select(input, d0, d1, dynamic_address);
	set_at<96, 384>(result, blurx_rd6_res);
	hw_uint<16> blurx_rd7_res = blurx_rd7_select(input, d0, d1, dynamic_address);
	set_at<112, 384>(result, blurx_rd7_res);
	hw_uint<16> blurx_rd8_res = blurx_rd8_select(input, d0, d1, dynamic_address);
	set_at<128, 384>(result, blurx_rd8_res);
	hw_uint<16> blurx_rd9_res = blurx_rd9_select(input, d0, d1, dynamic_address);
	set_at<144, 384>(result, blurx_rd9_res);
	hw_uint<16> blurx_rd10_res = blurx_rd10_select(input, d0, d1, dynamic_address);
	set_at<160, 384>(result, blurx_rd10_res);
	hw_uint<16> blurx_rd11_res = blurx_rd11_select(input, d0, d1, dynamic_address);
	set_at<176, 384>(result, blurx_rd11_res);
	hw_uint<16> blurx_rd12_res = blurx_rd12_select(input, d0, d1, dynamic_address);
	set_at<192, 384>(result, blurx_rd12_res);
	hw_uint<16> blurx_rd13_res = blurx_rd13_select(input, d0, d1, dynamic_address);
	set_at<208, 384>(result, blurx_rd13_res);
	hw_uint<16> blurx_rd14_res = blurx_rd14_select(input, d0, d1, dynamic_address);
	set_at<224, 384>(result, blurx_rd14_res);
	hw_uint<16> blurx_rd15_res = blurx_rd15_select(input, d0, d1, dynamic_address);
	set_at<240, 384>(result, blurx_rd15_res);
	hw_uint<16> blurx_rd16_res = blurx_rd16_select(input, d0, d1, dynamic_address);
	set_at<256, 384>(result, blurx_rd16_res);
	hw_uint<16> blurx_rd17_res = blurx_rd17_select(input, d0, d1, dynamic_address);
	set_at<272, 384>(result, blurx_rd17_res);
	hw_uint<16> blurx_rd18_res = blurx_rd18_select(input, d0, d1, dynamic_address);
	set_at<288, 384>(result, blurx_rd18_res);
	hw_uint<16> blurx_rd19_res = blurx_rd19_select(input, d0, d1, dynamic_address);
	set_at<304, 384>(result, blurx_rd19_res);
	hw_uint<16> blurx_rd20_res = blurx_rd20_select(input, d0, d1, dynamic_address);
	set_at<320, 384>(result, blurx_rd20_res);
	hw_uint<16> blurx_rd21_res = blurx_rd21_select(input, d0, d1, dynamic_address);
	set_at<336, 384>(result, blurx_rd21_res);
	hw_uint<16> blurx_rd22_res = blurx_rd22_select(input, d0, d1, dynamic_address);
	set_at<352, 384>(result, blurx_rd22_res);
	hw_uint<16> blurx_rd23_res = blurx_rd23_select(input, d0, d1, dynamic_address);
	set_at<368, 384>(result, blurx_rd23_res);
	return result;
}

// input_update_0_write
//	input_input_update_0_write0
//	input_input_update_0_write1
//	input_input_update_0_write2
//	input_input_update_0_write3
//	input_input_update_0_write4
//	input_input_update_0_write5
//	input_input_update_0_write6
//	input_input_update_0_write7
inline void input_input_update_0_write_bundle_write(hw_uint<128>& input_update_0_write, input_cache& input, int d0, int d1, int dynamic_address) {
	hw_uint<16> input_input_update_0_write0_res = input_update_0_write.extract<0, 15>();
	input_input_update_0_write0_write(input_input_update_0_write0_res, input, d0, d1, dynamic_address);
	hw_uint<16> input_input_update_0_write1_res = input_update_0_write.extract<16, 31>();
	input_input_update_0_write1_write(input_input_update_0_write1_res, input, d0, d1, dynamic_address);
	hw_uint<16> input_input_update_0_write2_res = input_update_0_write.extract<32, 47>();
	input_input_update_0_write2_write(input_input_update_0_write2_res, input, d0, d1, dynamic_address);
	hw_uint<16> input_input_update_0_write3_res = input_update_0_write.extract<48, 63>();
	input_input_update_0_write3_write(input_input_update_0_write3_res, input, d0, d1, dynamic_address);
	hw_uint<16> input_input_update_0_write4_res = input_update_0_write.extract<64, 79>();
	input_input_update_0_write4_write(input_input_update_0_write4_res, input, d0, d1, dynamic_address);
	hw_uint<16> input_input_update_0_write5_res = input_update_0_write.extract<80, 95>();
	input_input_update_0_write5_write(input_input_update_0_write5_res, input, d0, d1, dynamic_address);
	hw_uint<16> input_input_update_0_write6_res = input_update_0_write.extract<96, 111>();
	input_input_update_0_write6_write(input_input_update_0_write6_res, input, d0, d1, dynamic_address);
	hw_uint<16> input_input_update_0_write7_res = input_update_0_write.extract<112, 127>();
	input_input_update_0_write7_write(input_input_update_0_write7_res, input, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 61824 bits


// Operation logic
inline void bxy_noinit_p220_8_update_0(blurx_cache& blurx, HWStream<hw_uint<128> >& /* buffer_args num ports = 8 */bxy_noinit_p220_8, int d0, int d1) {
  // Dynamic address computation

	// Consume: blurx
	auto blurx_0_c__0_value = blurx_bxy_noinit_p220_8_update_0_read_bundle_read(blurx/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = bxy_noinit_p220_8_generated_compute_unrolled_8(blurx_0_c__0_value);
	// Produce: bxy_noinit_p220_8
	bxy_noinit_p220_8.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void input_update_0(HWStream<hw_uint<128> >& /* buffer_args num ports = 8 */input_arg, input_cache& input, int d0, int d1) {
  // Dynamic address computation

	// Consume: input_arg
	auto input_arg_0_c__0_value = input_arg.read();
	auto compute_result = input_generated_compute_unrolled_8(input_arg_0_c__0_value);
	// Produce: input
	input_input_update_0_write_bundle_write(/* arg names */compute_result, input, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blurx_update_0(input_cache& input, blurx_cache& blurx, int d0, int d1) {
  // Dynamic address computation

	// Consume: input
	auto input_0_c__0_value = input_blurx_update_0_read_bundle_read(input/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blurx_generated_compute_unrolled_8(input_0_c__0_value);
	// Produce: blurx
	blurx_blurx_update_0_write_bundle_write(/* arg names */compute_result, blurx, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void bxy_noinit_p220_8_opt(HWStream<hw_uint<128> >& /* get_args num ports = 8 */input_arg, HWStream<hw_uint<128> >& /* get_args num ports = 8 */bxy_noinit_p220_8) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("bxy_noinit_p220_8_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurx_cache blurx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  input_cache input;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081; bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
//   { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 240 and 0 <= d1 <= 1081 }
// Condition for input_update_0(((-1 + i2 == 0) && (i1 >= 0) && (240 - i1 >= 0) && (i0 >= 0) && (1081 - i0 >= 0)))
//   { bxy_noinit_p220_8_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
// Condition for bxy_noinit_p220_8_update_0(((-3 + i2 == 0) && (-1 + i1 >= 0) && (240 - i1 >= 0) && (-2 + i0 >= 0) && (1081 - i0 >= 0)))
//   { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 240 and 0 <= d1 <= 1079 }
// Condition for blurx_update_0(((-2 + i2 == 0) && (i1 >= 0) && (240 - i1 >= 0) && (-2 + i0 >= 0) && (1081 - i0 >= 0)))

  /*
  // Schedules...
    // blurx_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*0,1*2]
    // bxy_noinit_p220_8_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*3]
    // input_arg_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // input_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
for (int c0 = 0; c0 <= 1081; c0++) {
  for (int c1 = 0; c1 <= 240; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((0 <= c1 && c1 <= 240) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1081) && ((c0 - 0) % 1 == 0)) {
      input_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 240) && ((c1 - 0) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
      blurx_update_0((c1 - 0) / 1, (c0 - 2) / 1);
    }

    if ((1 <= c1 && c1 <= 240) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
      bxy_noinit_p220_8_update_0((c1 - 1) / 1, (c0 - 2) / 1);
    }

  }
}

  */
	  // Schedules...
	    // blurx_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*0,1*2]
	    // bxy_noinit_p220_8_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*3]
	    // input_arg_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // input_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = 0; c0 <= 1081; c0++) {
	  for (int c1 = 0; c1 <= 240; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 240) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1081) && ((c0 - 0) % 1 == 0)) {
	      input_update_0(input_arg /* buf name */, input, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 240) && ((c1 - 0) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	      blurx_update_0(input /* buf name */, blurx, (c1 - 0) / 1, (c0 - 2) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 240) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	      bxy_noinit_p220_8_update_0(blurx /* buf name */, bxy_noinit_p220_8, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void bxy_noinit_p220_8_opt_wrapper(HWStream<hw_uint<128> >& /* get_args num ports = 8 */input_arg, HWStream<hw_uint<128> >& /* get_args num ports = 8 */bxy_noinit_p220_8, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    bxy_noinit_p220_8_opt(input_arg, bxy_noinit_p220_8);
  }
}
#ifdef __VIVADO_SYNTH__
  // { bxy_noinit_p220_8_update_0[root = 0, bxy_noinit_p220_8_0, bxy_noinit_p220_8_1] -> bxy_noinit_p220_8[0, 0] : 0 <= bxy_noinit_p220_8_0 <= 239 and 0 <= bxy_noinit_p220_8_1 <= 1079 }
const int bxy_noinit_p220_8_update_0_write_pipe0_num_transfers = 259200;
  // { input_update_0[root = 0, input_0, input_1] -> input_arg[0, 0] : 0 <= input_0 <= 240 and 0 <= input_1 <= 1081 }
const int input_update_0_read_pipe0_num_transfers = 260762;


extern "C" {

void bxy_noinit_p220_8_opt_accel(hw_uint<128>* input_update_0_read_pipe0, hw_uint<128>* bxy_noinit_p220_8_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = bxy_noinit_p220_8_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = input_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = bxy_noinit_p220_8_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<128> > input_update_0_read_pipe0_channel;
  static HWStream<hw_uint<128> > bxy_noinit_p220_8_update_0_write_pipe0_channel;

  burst_read<128>(input_update_0_read_pipe0, input_update_0_read_pipe0_channel, input_update_0_read_pipe0_num_transfers*size);

  bxy_noinit_p220_8_opt_wrapper(input_update_0_read_pipe0_channel, bxy_noinit_p220_8_update_0_write_pipe0_channel, size);

  burst_write<128>(bxy_noinit_p220_8_update_0_write_pipe0, bxy_noinit_p220_8_update_0_write_pipe0_channel, bxy_noinit_p220_8_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void bxy_noinit_p220_8_opt_rdai(HWStream<hw_uint<128> >& input_update_0_read_pipe0, HWStream<hw_uint<128> >&  bxy_noinit_p220_8_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = input_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = bxy_noinit_p220_8_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  bxy_noinit_p220_8_opt(input_update_0_read_pipe0, bxy_noinit_p220_8_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__
