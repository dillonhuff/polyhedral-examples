#include "conv_vec.h"
#include "conv.h"

#include <iostream>

using namespace std;

int main() {
  HWStream<hw_uint<32> > w0, w_gold;
  for (int i = 0; i < 8; i++) {
    w0.write(i);
    w_gold.write(i);
  }
  HWStream<hw_uint<32> > r0, r_gold;
  conv_vec(r0, w0);
  conv(r_gold, w_gold);

  for (int i = 0; i < 8; i++) {
    hw_uint<32> v = r0.read();
    hw_uint<32> v_gold = r_gold.read();
    cout << "Origin mem read :" << v_gold << endl;
    cout << "Vectorized mem read :" << v << endl;
    assert(v == v_gold);
  }
  cout << "Finish conv vec test" << endl;
  return 0;
}
