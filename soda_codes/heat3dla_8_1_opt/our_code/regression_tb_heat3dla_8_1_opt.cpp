#include <fstream>
#include "heat3dla_8_1_opt.h"
#include "clockwork_standard_compute_units.h"

int main() {
  srand(234);
  ofstream in_pix("input_pixels_regression_result_heat3dla_8_1_opt.txt");
  ofstream fout("regression_result_heat3dla_8_1_opt.txt");
  HWStream<hw_uint<32> > in_cc_update_0_read;
  HWStream<hw_uint<32> > heat3dla_8_1_update_0_write;


  // Loading input data
  // cmap    : { in_cc_update_0[root = 0, in_cc_0, in_cc_1, in_cc_2] -> in[0, 0] : -8 <= in_cc_0 <= 135 and -8 <= in_cc_1 <= 135 and -8 <= in_cc_2 <= 39 }
  // read map: { in[0, 0] -> in_cc_update_0[root = 0, in_cc_0, in_cc_1, in_cc_2] : -8 <= in_cc_0 <= 135 and -8 <= in_cc_1 <= 135 and -8 <= in_cc_2 <= 39 }
  // rng     : { in_cc_update_0[root = 0, in_cc_0, in_cc_1, in_cc_2] : -8 <= in_cc_0 <= 135 and -8 <= in_cc_1 <= 135 and -8 <= in_cc_2 <= 39 }
  for (int i = 0; i < 995328; i++) {
    hw_uint<32> in_val;
#ifdef __INT_OUTPUT__
    set_at<0*32, 32, 32>(in_val, (1*i + 0));
#elif defined(__FLOAT_OUTPUT__)
    set_at<0*32, 32, 32>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<0*32, 32, 32>(in_val, (1*i + 0));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
    in_cc_update_0_read.write(in_val);
  }

  heat3dla_8_1_opt(in_cc_update_0_read, heat3dla_8_1_update_0_write);

  for (int i = 0; i < 524288; i++) {
    hw_uint<32> actual = heat3dla_8_1_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_0 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_0) << endl;
#else // No specified output type
    fout << actual_lane_0 << endl;
#endif
  }

  in_pix.close();
  fout.close();
  return 0;
}