#include "ap_int.h"

extern "C" {

void sc_dyn_30_32_kernel(ap_uint<512>* out, ap_uint<512>* in_oc, uint64_t coalesced_data_num);
}
