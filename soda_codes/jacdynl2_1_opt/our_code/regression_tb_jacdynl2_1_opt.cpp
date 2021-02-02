#include <fstream>
#include "jacdynl2_1_opt.h"

int main() {
  srand(234);
  ofstream fout("regression_result_jacdynl2_1_opt.txt");
  HWStream<hw_uint<16 > > in_off_chip;
  HWStream<hw_uint<16 > > jacdynl2_1;


  // Loading input data
  srand(1);
  // cmap    : { in_update_0[root = 0, in_0, in_1] -> in_off_chip[in_1, in_0] : -15 <= in_0 <= 1094 and 0 <= in_1 <= 1094 }
  // read map: { in_off_chip[i0, i1] -> in_update_0[root = 0, in_0 = i1, in_1 = i0] : 0 <= i0 <= 1094 and -15 <= i1 <= 1094 }
  // rng     : { in_update_0[root = 0, in_0, in_1] : -15 <= in_0 <= 1094 and 0 <= in_1 <= 1094 }
  // rng card: { 1215450 }
  for (int i = 0; i < 1215450; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    in_off_chip.write(value);
  }

  jacdynl2_1_opt(in_off_chip, jacdynl2_1);
  for (int i = 0; i < 1166400; i++) {
    auto actual = jacdynl2_1.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  return 0;
}
