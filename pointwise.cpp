#include "conv_3x3.h"

#include "hw_classes.h"

struct I_I_id0_2_to_I_out_plus_one0_1_cache {
	// Capacity: 1
	// Parition [0, 0] capacity = 1
	fifo<hw_uint<16>, 1> f1;


	inline hw_uint<16> peek_0() {
		return f1.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_2_to_I_out_plus_one0_1_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f1.push(value);
	}

};

struct I_cache {
  I_I_id0_2_to_I_out_plus_one0_1_cache bank_I_I_id0_2_to_I_out_plus_one0_1;
};



inline void I_I_id0_2_write(hw_uint<16>& I_I_id0_2, I_cache& I, int root, int id1, int id0) {
  I.bank_I_I_id0_2_to_I_out_plus_one0_1.push(I_I_id0_2);
}

inline hw_uint<16> I_out_plus_one0_1_select(I_cache& I, int root, int d1, int d0) {
	// lexmax events: { out_plus_one0[root = 0, d1, d0] -> I_id0[root' = 0, id1 = d1, id0 = d0] : 0 <= d1 <= 31 and 0 <= d0 <= 7 }
  // I_out_plus_one0_1 read pattern: { out_plus_one0[root = 0, d1, d0] -> I[d0, d1] : 0 <= d1 <= 31 and 0 <= d0 <= 7 }
	auto value_I_I_id0_2 = I.bank_I_I_id0_2_to_I_out_plus_one0_1.peek_0();
	return value_I_I_id0_2;
}

// # of bundles = 2
// I_id0_write
//	I_I_id0_2
inline void I_I_id0_write_bundle_write(hw_uint<16>& I_id0_write, I_cache& I, int root, int id1, int id0) {
	hw_uint<16> I_I_id0_2_res = I_id0_write.extract<0, 15>();
	I_I_id0_2_write(I_I_id0_2_res, I, root, id1, id0);
}

// out_plus_one0_read
//	I_out_plus_one0_1
inline hw_uint<16> I_out_plus_one0_read_bundle_read(I_cache& I, int root, int d1, int d0) {
	hw_uint<16> result;
	hw_uint<16> I_out_plus_one0_1_res = I_out_plus_one0_1_select(I, root, d1, d0);
	set_at<0, 16>(result, I_out_plus_one0_1_res);
	return result;
}





// Operation logic
inline void out_plus_one0(I_cache& I, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */out, int root, int d1, int d0) {
	// Consume: I
	auto I_d0_c__d1_value = I_out_plus_one0_read_bundle_read(I/* source_delay */, root, d1, d0);
	auto compute_result = plus_one(I_d0_c__d1_value);
	// Produce: out
	out.write(compute_result);
}

inline void I_id0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in, I_cache& I, int root, int id1, int id0) {
	// Consume: in
	auto in_id0_c__id1_value = in.read();
	auto compute_result = id(in_id0_c__id1_value);
	// Produce: I
	I_I_id0_write_bundle_write(compute_result, I, root, id1, id0);
}

// Driver function
void pointwise(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<16> >& /* get_args num ports = 1 */out) {
  I_cache I;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif // __VIVADO_SYNTH__

/* CUSTOM CODE STRING

*/
	for (int c0 = 0; c0 <= 31; c0 += 1)
	  for (int c1 = 0; c1 <= 7; c1 += 1) {
	    I_id0(in, I, 0, c0, c1);
	    out_plus_one0(I, out, 0, c0, c1);
	  }
	
}
