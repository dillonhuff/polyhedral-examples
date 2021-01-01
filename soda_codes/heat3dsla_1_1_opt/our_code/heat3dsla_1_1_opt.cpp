#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: heat3dsla_1_1_opt_compute_units.h
#include "heat3dsla_1_1_opt_compute_units.h"

struct h3_0_h3_0_update_0_write0_to_heat3dsla_1_1_rd0_cache {
	// RAM Box: {[0, 31], [0, 31], [0, 3]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct h3_0_cache {
  // # of banks: 1
  h3_0_h3_0_update_0_write0_to_heat3dsla_1_1_rd0_cache h3_0_h3_0_update_0_write0_to_heat3dsla_1_1_rd0;
};



inline void h3_0_h3_0_update_0_write0_write(hw_uint<32> & h3_0_h3_0_update_0_write0, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write0_to_heat3dsla_1_1_rd0.push(h3_0_h3_0_update_0_write0);
}

inline hw_uint<32>  heat3dsla_1_1_rd0_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3dsla_1_1_rd0 read pattern: { heat3dsla_1_1_update_0[d0, d1, d2] -> h3_0[d0, d1, d2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { heat3dsla_1_1_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 3] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_to_heat3dsla_1_1_rd0.peek(/* one reader or all rams */ 0);
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_0_update_0_write
//	h3_0_h3_0_update_0_write0
inline void h3_0_h3_0_update_0_write_bundle_write(hw_uint<32>& h3_0_update_0_write, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_0_h3_0_update_0_write0_res = h3_0_update_0_write.extract<0, 31>();
	h3_0_h3_0_update_0_write0_write(h3_0_h3_0_update_0_write0_res, h3_0, d0, d1, d2, dynamic_address);
}

// heat3dsla_1_1_update_0_read
//	heat3dsla_1_1_rd0
inline hw_uint<32> h3_0_heat3dsla_1_1_update_0_read_bundle_read(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 1
    // heat3dsla_1_1_rd0

	hw_uint<32> result;
	hw_uint<32>  heat3dsla_1_1_rd0_res = heat3dsla_1_1_rd0_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<0, 32>(result, heat3dsla_1_1_rd0_res);
	return result;
}

struct in_cc_in_cc_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-1, 32], [0, 31], [0, 3]}
	// Capacity: 2348
	// # of read delays: 8
  // 0, 35, 1157, 1190, 1191, 1192, 1225, 2347
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 34> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 1121> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 32> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 32> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 1121> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_34() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_35() {
		return f2;
	}

	inline hw_uint<32>  peek_1156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_1157() {
		return f4;
	}

	inline hw_uint<32>  peek_1189() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_1190() {
		return f6;
	}

	inline hw_uint<32>  peek_1191() {
		return f8;
	}

	inline hw_uint<32>  peek_1192() {
		return f10;
	}

	inline hw_uint<32>  peek_1224() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_1225() {
		return f12;
	}

	inline hw_uint<32>  peek_2346() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_2347() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1121
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1121 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1121
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1121 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_cache {
  // # of banks: 1
  in_cc_in_cc_update_0_write0_merged_banks_7_cache in_cc_in_cc_update_0_write0_merged_banks_7;
};



inline void in_cc_in_cc_update_0_write0_write(hw_uint<32> & in_cc_in_cc_update_0_write0, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.push(in_cc_in_cc_update_0_write0);
}

inline hw_uint<32>  h3_0_rd0_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd0 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[-1 + d0, d1, d2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_1192();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd1_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd1 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[d0, -1 + d1, d2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_1225();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd2_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd2 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[d0, d1, -1 + d2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_2347();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd3_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd3 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[d0, d1, d2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_1191();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd4_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd4 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[d0, d1, 1 + d2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_35();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd5_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd5 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[d0, 1 + d1, d2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_1157();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd6_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd6 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + d0, d1, d2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_1190();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_0_update_0_read
//	h3_0_rd0
//	h3_0_rd1
//	h3_0_rd2
//	h3_0_rd3
//	h3_0_rd4
//	h3_0_rd5
//	h3_0_rd6
inline hw_uint<224> in_cc_h3_0_update_0_read_bundle_read(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 7
    // h3_0_rd0
    // h3_0_rd1
    // h3_0_rd2
    // h3_0_rd3
    // h3_0_rd4
    // h3_0_rd5
    // h3_0_rd6

	hw_uint<224> result;
	hw_uint<32>  h3_0_rd0_res = h3_0_rd0_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<0, 224>(result, h3_0_rd0_res);
	hw_uint<32>  h3_0_rd1_res = h3_0_rd1_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<32, 224>(result, h3_0_rd1_res);
	hw_uint<32>  h3_0_rd2_res = h3_0_rd2_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<64, 224>(result, h3_0_rd2_res);
	hw_uint<32>  h3_0_rd3_res = h3_0_rd3_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<96, 224>(result, h3_0_rd3_res);
	hw_uint<32>  h3_0_rd4_res = h3_0_rd4_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<128, 224>(result, h3_0_rd4_res);
	hw_uint<32>  h3_0_rd5_res = h3_0_rd5_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<160, 224>(result, h3_0_rd5_res);
	hw_uint<32>  h3_0_rd6_res = h3_0_rd6_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<192, 224>(result, h3_0_rd6_res);
	return result;
}

// in_cc_update_0_write
//	in_cc_in_cc_update_0_write0
inline void in_cc_in_cc_update_0_write_bundle_write(hw_uint<32>& in_cc_update_0_write, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  in_cc_in_cc_update_0_write0_res = in_cc_update_0_write.extract<0, 31>();
	in_cc_in_cc_update_0_write0_write(in_cc_in_cc_update_0_write0_res, in_cc, d0, d1, d2, dynamic_address);
}

// Total re-use buffer capacity: 75104 bits


// Operation logic
inline void in_cc_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, in_cc_cache& in_cc, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in.read();
	auto compute_result = in_cc_generated_compute_unrolled_1(in_0_c__0_value);
	// Produce: in_cc
	in_cc_in_cc_update_0_write_bundle_write(/* arg names */compute_result, in_cc, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_0_update_0(in_cc_cache& in_cc, h3_0_cache& h3_0, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_cc
	auto in_cc_0_c__0_value = in_cc_h3_0_update_0_read_bundle_read(in_cc/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_0_generated_compute_unrolled_1(in_cc_0_c__0_value);
	// Produce: h3_0
	h3_0_h3_0_update_0_write_bundle_write(/* arg names */compute_result, h3_0, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void heat3dsla_1_1_update_0(h3_0_cache& h3_0, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */heat3dsla_1_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_0
	auto h3_0_0_c__0_value = h3_0_heat3dsla_1_1_update_0_read_bundle_read(h3_0/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = heat3dsla_1_1_generated_compute_unrolled_1(h3_0_0_c__0_value);
	// Produce: heat3dsla_1_1
	heat3dsla_1_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void heat3dsla_1_1_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */heat3dsla_1_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("heat3dsla_1_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  h3_0_cache h3_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_cc_cache in_cc;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3; in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 and -1 <= d2 <= 4; heat3dsla_1_1_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 3] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
//   { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
// Condition for h3_0_update_0(((-2 + i3 == 0) && (-1 + i2 >= 0) && (32 - i2 >= 0) && (-1 + i1 >= 0) && (32 - i1 >= 0) && (-1 + i0 >= 0) && (4 - i0 >= 0)))
//   { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
// Condition for in_cc_update_0(((-1 + i3 == 0) && (1 + i2 >= 0) && (32 - i2 >= 0) && (1 + i1 >= 0) && (32 - i1 >= 0) && (1 + i0 >= 0) && (4 - i0 >= 0)))
//   { heat3dsla_1_1_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 3] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
// Condition for heat3dsla_1_1_update_0(((-3 + i3 == 0) && (-1 + i2 >= 0) && (32 - i2 >= 0) && (-1 + i1 >= 0) && (32 - i1 >= 0) && (-1 + i0 >= 0) && (4 - i0 >= 0)))

  /*
  // Schedules...
    // h3_0_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // heat3dsla_1_1_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*3]
    // in_cc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
for (int c0 = -1; c0 <= 4; c0++) {
  for (int c1 = -1; c1 <= 32; c1++) {
    for (int c2 = -1; c2 <= 32; c2++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

      if ((-1 <= c2 && c2 <= 32) && ((c2 - 0) % 1 == 0) && (-1 <= c1 && c1 <= 32) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 4) && ((c0 - 0) % 1 == 0)) {
        in_cc_update_0((c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
      }

      if ((1 <= c2 && c2 <= 32) && ((c2 - 1) % 1 == 0) && (1 <= c1 && c1 <= 32) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 4) && ((c0 - 1) % 1 == 0)) {
        h3_0_update_0((c2 - 1) / 1, (c1 - 1) / 1, (c0 - 1) / 1);
      }

      if ((1 <= c2 && c2 <= 32) && ((c2 - 1) % 1 == 0) && (1 <= c1 && c1 <= 32) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 4) && ((c0 - 1) % 1 == 0)) {
        heat3dsla_1_1_update_0((c2 - 1) / 1, (c1 - 1) / 1, (c0 - 1) / 1);
      }

    }
  }
}

  */
	  // Schedules...
	    // h3_0_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // heat3dsla_1_1_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*3]
	    // in_cc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	for (int c0 = -1; c0 <= 4; c0++) {
	  for (int c1 = -1; c1 <= 32; c1++) {
	    for (int c2 = -1; c2 <= 32; c2++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((-1 <= c2 && c2 <= 32) && ((c2 - 0) % 1 == 0) && (-1 <= c1 && c1 <= 32) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 4) && ((c0 - 0) % 1 == 0)) {
	        in_cc_update_0(in /* buf name */, in_cc, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((1 <= c2 && c2 <= 32) && ((c2 - 1) % 1 == 0) && (1 <= c1 && c1 <= 32) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 4) && ((c0 - 1) % 1 == 0)) {
	        h3_0_update_0(in_cc /* buf name */, h3_0, (c2 - 1) / 1, (c1 - 1) / 1, (c0 - 1) / 1);
	      }
	
	      if ((1 <= c2 && c2 <= 32) && ((c2 - 1) % 1 == 0) && (1 <= c1 && c1 <= 32) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 4) && ((c0 - 1) % 1 == 0)) {
	        heat3dsla_1_1_update_0(h3_0 /* buf name */, heat3dsla_1_1, (c2 - 1) / 1, (c1 - 1) / 1, (c0 - 1) / 1);
	      }
	
	    }
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void heat3dsla_1_1_opt_wrapper(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */heat3dsla_1_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    heat3dsla_1_1_opt(in, heat3dsla_1_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { heat3dsla_1_1_update_0[root = 0, heat3dsla_1_1_0, heat3dsla_1_1_1, heat3dsla_1_1_2] -> heat3dsla_1_1[0, 0] : 0 <= heat3dsla_1_1_0 <= 31 and 0 <= heat3dsla_1_1_1 <= 31 and 0 <= heat3dsla_1_1_2 <= 3 }
const int heat3dsla_1_1_update_0_write_pipe0_num_transfers = 4096;
  // { in_cc_update_0[root = 0, in_cc_0, in_cc_1, in_cc_2] -> in[0, 0] : -1 <= in_cc_0 <= 32 and -1 <= in_cc_1 <= 32 and -1 <= in_cc_2 <= 4 }
const int in_cc_update_0_read_pipe0_num_transfers = 6936;


extern "C" {

void heat3dsla_1_1_opt_accel(hw_uint<32>* in_cc_update_0_read_pipe0, hw_uint<32>* heat3dsla_1_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_cc_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = heat3dsla_1_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_cc_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = heat3dsla_1_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > in_cc_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > heat3dsla_1_1_update_0_write_pipe0_channel;

  burst_read<32>(in_cc_update_0_read_pipe0, in_cc_update_0_read_pipe0_channel, in_cc_update_0_read_pipe0_num_transfers*size);

  heat3dsla_1_1_opt_wrapper(in_cc_update_0_read_pipe0_channel, heat3dsla_1_1_update_0_write_pipe0_channel, size);

  burst_write<32>(heat3dsla_1_1_update_0_write_pipe0, heat3dsla_1_1_update_0_write_pipe0_channel, heat3dsla_1_1_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void heat3dsla_1_1_opt_rdai(HWStream<hw_uint<32> >& in_cc_update_0_read_pipe0, HWStream<hw_uint<32> >&  heat3dsla_1_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_cc_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = heat3dsla_1_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  heat3dsla_1_1_opt(in_cc_update_0_read_pipe0, heat3dsla_1_1_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

