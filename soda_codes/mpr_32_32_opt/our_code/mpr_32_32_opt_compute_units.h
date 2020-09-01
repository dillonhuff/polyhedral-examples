#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_update_0 unroll factor: 32
hw_uint<512>  id_unrolled_32(hw_uint<512>& in_oc) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_in_oc;
  set_at<0, 16, 16>(lane_0_in_oc, in_oc.extract<0, 15>());
  auto result_0 = id(lane_0_in_oc);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_oc;
  set_at<0, 16, 16>(lane_1_in_oc, in_oc.extract<16, 31>());
  auto result_1 = id(lane_1_in_oc);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_oc;
  set_at<0, 16, 16>(lane_2_in_oc, in_oc.extract<32, 47>());
  auto result_2 = id(lane_2_in_oc);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_oc;
  set_at<0, 16, 16>(lane_3_in_oc, in_oc.extract<48, 63>());
  auto result_3 = id(lane_3_in_oc);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_in_oc;
  set_at<0, 16, 16>(lane_4_in_oc, in_oc.extract<64, 79>());
  auto result_4 = id(lane_4_in_oc);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_in_oc;
  set_at<0, 16, 16>(lane_5_in_oc, in_oc.extract<80, 95>());
  auto result_5 = id(lane_5_in_oc);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_in_oc;
  set_at<0, 16, 16>(lane_6_in_oc, in_oc.extract<96, 111>());
  auto result_6 = id(lane_6_in_oc);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_in_oc;
  set_at<0, 16, 16>(lane_7_in_oc, in_oc.extract<112, 127>());
  auto result_7 = id(lane_7_in_oc);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_in_oc;
  set_at<0, 16, 16>(lane_8_in_oc, in_oc.extract<128, 143>());
  auto result_8 = id(lane_8_in_oc);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_in_oc;
  set_at<0, 16, 16>(lane_9_in_oc, in_oc.extract<144, 159>());
  auto result_9 = id(lane_9_in_oc);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_in_oc;
  set_at<0, 16, 16>(lane_10_in_oc, in_oc.extract<160, 175>());
  auto result_10 = id(lane_10_in_oc);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_in_oc;
  set_at<0, 16, 16>(lane_11_in_oc, in_oc.extract<176, 191>());
  auto result_11 = id(lane_11_in_oc);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_in_oc;
  set_at<0, 16, 16>(lane_12_in_oc, in_oc.extract<192, 207>());
  auto result_12 = id(lane_12_in_oc);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_in_oc;
  set_at<0, 16, 16>(lane_13_in_oc, in_oc.extract<208, 223>());
  auto result_13 = id(lane_13_in_oc);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_in_oc;
  set_at<0, 16, 16>(lane_14_in_oc, in_oc.extract<224, 239>());
  auto result_14 = id(lane_14_in_oc);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_in_oc;
  set_at<0, 16, 16>(lane_15_in_oc, in_oc.extract<240, 255>());
  auto result_15 = id(lane_15_in_oc);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_in_oc;
  set_at<0, 16, 16>(lane_16_in_oc, in_oc.extract<256, 271>());
  auto result_16 = id(lane_16_in_oc);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_in_oc;
  set_at<0, 16, 16>(lane_17_in_oc, in_oc.extract<272, 287>());
  auto result_17 = id(lane_17_in_oc);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_in_oc;
  set_at<0, 16, 16>(lane_18_in_oc, in_oc.extract<288, 303>());
  auto result_18 = id(lane_18_in_oc);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_in_oc;
  set_at<0, 16, 16>(lane_19_in_oc, in_oc.extract<304, 319>());
  auto result_19 = id(lane_19_in_oc);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_in_oc;
  set_at<0, 16, 16>(lane_20_in_oc, in_oc.extract<320, 335>());
  auto result_20 = id(lane_20_in_oc);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_in_oc;
  set_at<0, 16, 16>(lane_21_in_oc, in_oc.extract<336, 351>());
  auto result_21 = id(lane_21_in_oc);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_in_oc;
  set_at<0, 16, 16>(lane_22_in_oc, in_oc.extract<352, 367>());
  auto result_22 = id(lane_22_in_oc);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_in_oc;
  set_at<0, 16, 16>(lane_23_in_oc, in_oc.extract<368, 383>());
  auto result_23 = id(lane_23_in_oc);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_in_oc;
  set_at<0, 16, 16>(lane_24_in_oc, in_oc.extract<384, 399>());
  auto result_24 = id(lane_24_in_oc);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_in_oc;
  set_at<0, 16, 16>(lane_25_in_oc, in_oc.extract<400, 415>());
  auto result_25 = id(lane_25_in_oc);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_in_oc;
  set_at<0, 16, 16>(lane_26_in_oc, in_oc.extract<416, 431>());
  auto result_26 = id(lane_26_in_oc);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_in_oc;
  set_at<0, 16, 16>(lane_27_in_oc, in_oc.extract<432, 447>());
  auto result_27 = id(lane_27_in_oc);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_in_oc;
  set_at<0, 16, 16>(lane_28_in_oc, in_oc.extract<448, 463>());
  auto result_28 = id(lane_28_in_oc);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_in_oc;
  set_at<0, 16, 16>(lane_29_in_oc, in_oc.extract<464, 479>());
  auto result_29 = id(lane_29_in_oc);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_in_oc;
  set_at<0, 16, 16>(lane_30_in_oc, in_oc.extract<480, 495>());
  auto result_30 = id(lane_30_in_oc);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_in_oc;
  set_at<0, 16, 16>(lane_31_in_oc, in_oc.extract<496, 511>());
  auto result_31 = id(lane_31_in_oc);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // mpr_32_32_update_0 unroll factor: 16
hw_uint<256>  max_pool_2x2_unrolled_16(hw_uint<1024>& in) {
  hw_uint<256> whole_result;

  hw_uint<64> lane_0_in;
  set_at<0, 64, 64>(lane_0_in, in.extract<0, 63>());
  auto result_0 = max_pool_2x2(lane_0_in);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<64> lane_1_in;
  set_at<0, 64, 64>(lane_1_in, in.extract<64, 127>());
  auto result_1 = max_pool_2x2(lane_1_in);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<64> lane_2_in;
  set_at<0, 64, 64>(lane_2_in, in.extract<128, 191>());
  auto result_2 = max_pool_2x2(lane_2_in);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<64> lane_3_in;
  set_at<0, 64, 64>(lane_3_in, in.extract<192, 255>());
  auto result_3 = max_pool_2x2(lane_3_in);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<64> lane_4_in;
  set_at<0, 64, 64>(lane_4_in, in.extract<256, 319>());
  auto result_4 = max_pool_2x2(lane_4_in);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<64> lane_5_in;
  set_at<0, 64, 64>(lane_5_in, in.extract<320, 383>());
  auto result_5 = max_pool_2x2(lane_5_in);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<64> lane_6_in;
  set_at<0, 64, 64>(lane_6_in, in.extract<384, 447>());
  auto result_6 = max_pool_2x2(lane_6_in);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<64> lane_7_in;
  set_at<0, 64, 64>(lane_7_in, in.extract<448, 511>());
  auto result_7 = max_pool_2x2(lane_7_in);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<64> lane_8_in;
  set_at<0, 64, 64>(lane_8_in, in.extract<512, 575>());
  auto result_8 = max_pool_2x2(lane_8_in);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<64> lane_9_in;
  set_at<0, 64, 64>(lane_9_in, in.extract<576, 639>());
  auto result_9 = max_pool_2x2(lane_9_in);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<64> lane_10_in;
  set_at<0, 64, 64>(lane_10_in, in.extract<640, 703>());
  auto result_10 = max_pool_2x2(lane_10_in);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<64> lane_11_in;
  set_at<0, 64, 64>(lane_11_in, in.extract<704, 767>());
  auto result_11 = max_pool_2x2(lane_11_in);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<64> lane_12_in;
  set_at<0, 64, 64>(lane_12_in, in.extract<768, 831>());
  auto result_12 = max_pool_2x2(lane_12_in);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<64> lane_13_in;
  set_at<0, 64, 64>(lane_13_in, in.extract<832, 895>());
  auto result_13 = max_pool_2x2(lane_13_in);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<64> lane_14_in;
  set_at<0, 64, 64>(lane_14_in, in.extract<896, 959>());
  auto result_14 = max_pool_2x2(lane_14_in);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<64> lane_15_in;
  set_at<0, 64, 64>(lane_15_in, in.extract<960, 1023>());
  auto result_15 = max_pool_2x2(lane_15_in);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}
