#include "ap_int.h"

extern "C" {

void sbl_ln_1_opt_kernel(ap_uint<16>* sbl_ln_1, ap_uint<16>* off_chip_img, uint64_t coalesced_data_num);
}
