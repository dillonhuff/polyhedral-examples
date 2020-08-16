// AUTO GEN SODA TB
#include "up_sample_kernel.h"
#include <iostream>
#include <fstream>

#define PIXEL_WIDTH 16
#define BURST_WIDTH 16

#include "runtime/test_utils.h"

using namespace std;

int main() {
  srand(234);
  const int nrows = -1;
  const int ncols = -1;
  uint64_t img_pixels = nrows*ncols;
  const uint64_t bits_per_pixel = PIXEL_WIDTH;
  uint64_t img_bits = bits_per_pixel*img_pixels;
  const uint64_t num_transfers = img_bits / BURST_WIDTH;
  const uint64_t pixels_per_burst = BURST_WIDTH / bits_per_pixel;

  cout << "num transfers    : " << num_transfers << endl;
  cout << "pixels / transfer: " << pixels_per_burst << endl;

  const uint64_t transfer_cols = ncols / pixels_per_burst;
  ap_uint<BURST_WIDTH>* hw_output_stencil = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* input_copy_stencil = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("input_copy_stencil_input_pixel.csv", input_copy_stencil, nrows, ncols, transfer_cols);
  up_sample_kernel(hw_output_stencil, input_copy_stencil, num_transfers);
  write_results_decimal<bits_per_pixel>("soda_up_sample_regression_result.csv", hw_output_stencil, nrows, ncols, transfer_cols);
  free(input_copy_stencil);
  free(hw_output_stencil);
}
