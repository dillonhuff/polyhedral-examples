// AUTO GEN SODA TB
#include "pwls_ur_16_opt_kernel.h"
#include <iostream>
#include <fstream>

#define PIXEL_WIDTH 16
#define BURST_WIDTH 256

#include "runtime/test_utils.h"

using namespace std;

int main() {
  const int nrows = 1080;
  const int ncols = 1920;
  uint64_t img_pixels = nrows*ncols;
  const uint64_t bits_per_pixel = PIXEL_WIDTH;
  uint64_t img_bits = bits_per_pixel*img_pixels;
  const uint64_t num_transfers = img_bits / BURST_WIDTH;
  const uint64_t pixels_per_burst = BURST_WIDTH / bits_per_pixel;

  cout << "num transfers    : " << num_transfers << endl;
  cout << "pixels / transfer: " << pixels_per_burst << endl;

  const uint64_t transfer_cols = ncols / pixels_per_burst;
  ap_uint<BURST_WIDTH>* pwls_ur_16 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* input_arg = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("input_arg_input_pixel.csv", input_arg, nrows, ncols, transfer_cols);
  pwls_ur_16_opt_kernel(pwls_ur_16, input_arg, num_transfers);
  write_results_decimal<bits_per_pixel>("soda_pwls_ur_16_opt_regression_result.csv", pwls_ur_16, nrows, ncols, transfer_cols);
  free(input_arg);
  free(pwls_ur_16);
}
