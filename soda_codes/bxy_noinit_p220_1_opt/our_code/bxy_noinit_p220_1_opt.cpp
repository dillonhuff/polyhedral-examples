#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: bxy_noinit_p220_1_opt_compute_units.h
#include "bxy_noinit_p220_1_opt_compute_units.h"

#include "hw_classes.h"

struct blurx_blurx_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 1921], [0, 1079]}
	// Capacity: 3
	// # of read delays: 3
  // 0, 1, 2
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blurx_cache {
  // # of banks: 1
  blurx_blurx_update_0_write0_merged_banks_3_cache blurx_blurx_update_0_write0_merged_banks_3;
};



inline void blurx_blurx_update_0_write0_write(hw_uint<16>& blurx_blurx_update_0_write0, blurx_cache& blurx, int d0, int d1, int dynamic_address) {
  blurx.blurx_blurx_update_0_write0_merged_banks_3.push(blurx_blurx_update_0_write0);
}

inline hw_uint<16> bxy_noinit_p220_1_rd0_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_1_rd0 read pattern: { bxy_noinit_p220_1_update_0[d0, d1] -> blurx[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 1921 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write0 = blurx.blurx_blurx_update_0_write0_merged_banks_3.peek_2();
  return value_blurx_blurx_update_0_write0;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_1_rd1_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_1_rd1 read pattern: { bxy_noinit_p220_1_update_0[d0, d1] -> blurx[1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 1921 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write0 = blurx.blurx_blurx_update_0_write0_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write0;
  return 0;
}

inline hw_uint<16> bxy_noinit_p220_1_rd2_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_noinit_p220_1_rd2 read pattern: { bxy_noinit_p220_1_update_0[d0, d1] -> blurx[2 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_noinit_p220_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 1921 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write0 = blurx.blurx_blurx_update_0_write0_merged_banks_3.peek_0();
  return value_blurx_blurx_update_0_write0;
  return 0;
}

// # of bundles = 2
// blurx_update_0_write
//	blurx_blurx_update_0_write0
inline void blurx_blurx_update_0_write_bundle_write(hw_uint<16>& blurx_update_0_write, blurx_cache& blurx, int d0, int d1, int dynamic_address) {
	hw_uint<16> blurx_blurx_update_0_write0_res = blurx_update_0_write.extract<0, 15>();
	blurx_blurx_update_0_write0_write(blurx_blurx_update_0_write0_res, blurx, d0, d1, dynamic_address);
}

// bxy_noinit_p220_1_update_0_read
//	bxy_noinit_p220_1_rd0
//	bxy_noinit_p220_1_rd1
//	bxy_noinit_p220_1_rd2
inline hw_uint<48> blurx_bxy_noinit_p220_1_update_0_read_bundle_read(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 3
    // bxy_noinit_p220_1_rd0
    // bxy_noinit_p220_1_rd1
    // bxy_noinit_p220_1_rd2

	hw_uint<48> result;
	hw_uint<16> bxy_noinit_p220_1_rd0_res = bxy_noinit_p220_1_rd0_select(blurx, d0, d1, dynamic_address);
	set_at<0, 48>(result, bxy_noinit_p220_1_rd0_res);
	hw_uint<16> bxy_noinit_p220_1_rd1_res = bxy_noinit_p220_1_rd1_select(blurx, d0, d1, dynamic_address);
	set_at<16, 48>(result, bxy_noinit_p220_1_rd1_res);
	hw_uint<16> bxy_noinit_p220_1_rd2_res = bxy_noinit_p220_1_rd2_select(blurx, d0, d1, dynamic_address);
	set_at<32, 48>(result, bxy_noinit_p220_1_rd2_res);
	return result;
}

#include "hw_classes.h"

struct input_input_update_0_write0_merged_banks_3_cache {
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

struct input_cache {
  // # of banks: 1
  input_input_update_0_write0_merged_banks_3_cache input_input_update_0_write0_merged_banks_3;
};



inline void input_input_update_0_write0_write(hw_uint<16>& input_input_update_0_write0, input_cache& input, int d0, int d1, int dynamic_address) {
  input.input_input_update_0_write0_merged_banks_3.push(input_input_update_0_write0);
}

inline hw_uint<16> blurx_rd0_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd0 read pattern: { blurx_update_0[d0, d1] -> input[d0, d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 1921 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_3.peek_3844();
  return value_input_input_update_0_write0;
  return 0;
}

inline hw_uint<16> blurx_rd1_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd1 read pattern: { blurx_update_0[d0, d1] -> input[d0, 1 + d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 1921 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_3.peek_1922();
  return value_input_input_update_0_write0;
  return 0;
}

inline hw_uint<16> blurx_rd2_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd2 read pattern: { blurx_update_0[d0, d1] -> input[d0, 2 + d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 1921 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_3.peek_0();
  return value_input_input_update_0_write0;
  return 0;
}

// # of bundles = 2
// blurx_update_0_read
//	blurx_rd0
//	blurx_rd1
//	blurx_rd2
inline hw_uint<48> input_blurx_update_0_read_bundle_read(input_cache& input, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 3
    // blurx_rd0
    // blurx_rd1
    // blurx_rd2

	hw_uint<48> result;
	hw_uint<16> blurx_rd0_res = blurx_rd0_select(input, d0, d1, dynamic_address);
	set_at<0, 48>(result, blurx_rd0_res);
	hw_uint<16> blurx_rd1_res = blurx_rd1_select(input, d0, d1, dynamic_address);
	set_at<16, 48>(result, blurx_rd1_res);
	hw_uint<16> blurx_rd2_res = blurx_rd2_select(input, d0, d1, dynamic_address);
	set_at<32, 48>(result, blurx_rd2_res);
	return result;
}

// input_update_0_write
//	input_input_update_0_write0
inline void input_input_update_0_write_bundle_write(hw_uint<16>& input_update_0_write, input_cache& input, int d0, int d1, int dynamic_address) {
	hw_uint<16> input_input_update_0_write0_res = input_update_0_write.extract<0, 15>();
	input_input_update_0_write0_write(input_input_update_0_write0_res, input, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 61536 bits


// Operation logic
inline void blurx_update_0(input_cache& input, blurx_cache& blurx, int d0, int d1) {
  // Dynamic address computation

	// Consume: input
	auto input_0_c__0_value = input_blurx_update_0_read_bundle_read(input/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blurx_generated_compute_unrolled_1(input_0_c__0_value);
	// Produce: blurx
	blurx_blurx_update_0_write_bundle_write(/* arg names */compute_result, blurx, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bxy_noinit_p220_1_update_0(blurx_cache& blurx, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */bxy_noinit_p220_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: blurx
	auto blurx_0_c__0_value = blurx_bxy_noinit_p220_1_update_0_read_bundle_read(blurx/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = bxy_noinit_p220_1_generated_compute_unrolled_1(blurx_0_c__0_value);
	// Produce: bxy_noinit_p220_1
	bxy_noinit_p220_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void input_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_arg, input_cache& input, int d0, int d1) {
  // Dynamic address computation

	// Consume: input_arg
	auto input_arg_0_c__0_value = input_arg.read();
	auto compute_result = input_generated_compute_unrolled_1(input_arg_0_c__0_value);
	// Produce: input
	input_input_update_0_write_bundle_write(/* arg names */compute_result, input, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void bxy_noinit_p220_1_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */bxy_noinit_p220_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("bxy_noinit_p220_1_opt_debug.csv");
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

// schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081; bxy_noinit_p220_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 1921 and 0 <= d1 <= 1079 }
//   { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
// Condition for input_update_0(((-1 + i2 == 0) && (i1 >= 0) && (1921 - i1 >= 0) && (i0 >= 0) && (1081 - i0 >= 0)))
//   { bxy_noinit_p220_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for bxy_noinit_p220_1_update_0(((-3 + i2 == 0) && (-2 + i1 >= 0) && (1921 - i1 >= 0) && (-2 + i0 >= 0) && (1081 - i0 >= 0)))
//   { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 1921 and 0 <= d1 <= 1079 }
// Condition for blurx_update_0(((-2 + i2 == 0) && (i1 >= 0) && (1921 - i1 >= 0) && (-2 + i0 >= 0) && (1081 - i0 >= 0)))

  /*
  // Schedules...
    // blurx_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*0,1*2]
    // bxy_noinit_p220_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
    // input_arg_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // input_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
for (int c0 = 0; c0 <= 1081; c0++) {
  for (int c1 = 0; c1 <= 1921; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((0 <= c1 && c1 <= 1921) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1081) && ((c0 - 0) % 1 == 0)) {
      input_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 1921) && ((c1 - 0) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
      blurx_update_0((c1 - 0) / 1, (c0 - 2) / 1);
    }

    if ((2 <= c1 && c1 <= 1921) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
      bxy_noinit_p220_1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

  }
}

  */
	  // Schedules...
	    // blurx_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*0,1*2]
	    // bxy_noinit_p220_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
	    // input_arg_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // input_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = 0; c0 <= 1081; c0++) {
	  for (int c1 = 0; c1 <= 1921; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 1921) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1081) && ((c0 - 0) % 1 == 0)) {
	      input_update_0(input_arg /* buf name */, input, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 1921) && ((c1 - 0) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	      blurx_update_0(input /* buf name */, blurx, (c1 - 0) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 1921) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	      bxy_noinit_p220_1_update_0(blurx /* buf name */, bxy_noinit_p220_1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void bxy_noinit_p220_1_opt_wrapper(HWStream<hw_uint<16> >& /* get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */bxy_noinit_p220_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    bxy_noinit_p220_1_opt(input_arg, bxy_noinit_p220_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { bxy_noinit_p220_1_update_0[root = 0, bxy_noinit_p220_1_0, bxy_noinit_p220_1_1] -> bxy_noinit_p220_1[0, 0] : 0 <= bxy_noinit_p220_1_0 <= 1919 and 0 <= bxy_noinit_p220_1_1 <= 1079 }
const int bxy_noinit_p220_1_update_0_write_pipe0_num_transfers = 2073600;
  // { input_update_0[root = 0, input_0, input_1] -> input_arg[0, 0] : 0 <= input_0 <= 1921 and 0 <= input_1 <= 1081 }
const int input_update_0_read_pipe0_num_transfers = 2079604;


extern "C" {

void bxy_noinit_p220_1_opt_accel(hw_uint<16>* input_update_0_read_pipe0, hw_uint<16>* bxy_noinit_p220_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = bxy_noinit_p220_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = input_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = bxy_noinit_p220_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > input_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > bxy_noinit_p220_1_update_0_write_pipe0_channel;

  burst_read<16>(input_update_0_read_pipe0, input_update_0_read_pipe0_channel, input_update_0_read_pipe0_num_transfers*size);

  bxy_noinit_p220_1_opt_wrapper(input_update_0_read_pipe0_channel, bxy_noinit_p220_1_update_0_write_pipe0_channel, size);

  burst_write<16>(bxy_noinit_p220_1_update_0_write_pipe0, bxy_noinit_p220_1_update_0_write_pipe0_channel, bxy_noinit_p220_1_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void bxy_noinit_p220_1_opt_rdai(HWStream<hw_uint<16> >& input_update_0_read_pipe0, HWStream<hw_uint<16> >&  bxy_noinit_p220_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = input_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = bxy_noinit_p220_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  bxy_noinit_p220_1_opt(input_update_0_read_pipe0, bxy_noinit_p220_1_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

