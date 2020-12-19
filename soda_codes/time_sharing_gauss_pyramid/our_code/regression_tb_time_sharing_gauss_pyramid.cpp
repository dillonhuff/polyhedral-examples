#include <fstream>
#include "time_sharing_gauss_pyramid.h"

int main() {
  ofstream fout("regression_result_time_sharing_gauss_pyramid.txt");
  HWStream<hw_uint<32 > > in;
  HWStream<hw_uint<32 > > out;


  // Loading input data
  srand(1);
  // cmap    : { oc_load_in03[root = 0, oc_load_in01, oc_load_in02] -> in[oc_load_in02, oc_load_in01] : 0 <= oc_load_in01 <= 18 and 0 <= oc_load_in02 <= 18 }
  // read map: { in[i0, i1] -> oc_load_in03[root = 0, oc_load_in01 = i1, oc_load_in02 = i0] : 0 <= i0 <= 18 and 0 <= i1 <= 18 }
  // rng     : { oc_load_in03[root = 0, oc_load_in01, oc_load_in02] : 0 <= oc_load_in01 <= 18 and 0 <= oc_load_in02 <= 18 }
  // rng card: { 361 }
  for (int i = 0; i < 361; i++) {
    hw_uint<32 > value;
    set_at<0, 32, 32>(value, rand() % 256);
    in.write(value);
  }

  time_sharing_gauss_pyramid(in, out);
  for (int i = 0; i < 16; i++) {
    auto actual = out.read();
    hw_uint<32> actual_lane_0;
    set_at<0, 32, 32>(actual_lane_0, actual.extract<0, 31>());
    fout << actual_lane_0 << endl;
  }

  return 0;
}
