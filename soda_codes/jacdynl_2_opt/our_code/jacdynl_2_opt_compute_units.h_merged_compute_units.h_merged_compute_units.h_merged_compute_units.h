#include "jacdynl_2_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<32> stg0_ld5_cu373(hw_uint<32*2>& stg0) {
  return stg0;
}

hw_uint<32> stg13_ld25_cu375(hw_uint<32*2>& stg13) {
  return stg13;
}

hw_uint<32> stg10_ld13_cu377(hw_uint<32*2>& stg10) {
  return stg10;
}

hw_uint<32> stg13_to_gp_724_ld89_cu379(hw_uint<32*2>& stg13_to_gp_724) {
  return stg13_to_gp_724;
}

hw_uint<32> in_1_cu381(hw_uint<32*2>& in_off_chip) {
  hw_uint<16> in_off_chip_lane_0 = in_off_chip.extract<0, 15>();
  hw_uint<16> in_off_chip_lane_1 = in_off_chip.extract<16, 31>();

	
  hw_uint<32 > in_off_chip_lane_0_pack;
  set_at<0, 32, 32>(in_off_chip_lane_0_pack, in_off_chip_lane_0);
auto res_in_update_0_sm132_1363 = in_generated_compute_unrolled_2(in_off_chip_lane_0_pack);

	  hw_uint<32 > in_off_chip_lane_1_pack;
  set_at<0, 32, 32>(in_off_chip_lane_1_pack, in_off_chip_lane_1);
auto res_in_update_0_sm132_0361 = in_generated_compute_unrolled_2(in_off_chip_lane_1_pack);
  hw_uint<64 > return_value382;
  set_at<0, 64, 32>(return_value382, res_in_update_0_sm132_1363);
  set_at<32, 64, 32>(return_value382, res_in_update_0_sm132_0361);
  return return_value382;

}

hw_uint<32> stg0_1_cu384(hw_uint<32*8>& in_FIFO_buf64) {
  hw_uint<16> in_FIFO_buf64_lane_0 = in_FIFO_buf64.extract<0, 15>();
  hw_uint<16> in_FIFO_buf64_lane_1 = in_FIFO_buf64.extract<16, 31>();
  hw_uint<16> in_FIFO_buf64_lane_2 = in_FIFO_buf64.extract<32, 47>();
  hw_uint<16> in_FIFO_buf64_lane_3 = in_FIFO_buf64.extract<48, 63>();
  hw_uint<16> in_FIFO_buf64_lane_4 = in_FIFO_buf64.extract<64, 79>();
  hw_uint<16> in_FIFO_buf64_lane_5 = in_FIFO_buf64.extract<80, 95>();
  hw_uint<16> in_FIFO_buf64_lane_6 = in_FIFO_buf64.extract<96, 111>();
  hw_uint<16> in_FIFO_buf64_lane_7 = in_FIFO_buf64.extract<112, 127>();

	
  hw_uint<128 > in_FIFO_buf64_lane_3_pack;
  set_at<0, 128, 32>(in_FIFO_buf64_lane_3_pack, in_FIFO_buf64_lane_0);
  set_at<32, 128, 32>(in_FIFO_buf64_lane_3_pack, in_FIFO_buf64_lane_1);
  set_at<64, 128, 32>(in_FIFO_buf64_lane_3_pack, in_FIFO_buf64_lane_2);
  set_at<96, 128, 32>(in_FIFO_buf64_lane_3_pack, in_FIFO_buf64_lane_3);
auto res_stg0_update_0_sm133_1367 = stg0_generated_compute_unrolled_2(in_FIFO_buf64_lane_3_pack);

	  hw_uint<128 > in_FIFO_buf64_lane_7_pack;
  set_at<0, 128, 32>(in_FIFO_buf64_lane_7_pack, in_FIFO_buf64_lane_4);
  set_at<32, 128, 32>(in_FIFO_buf64_lane_7_pack, in_FIFO_buf64_lane_5);
  set_at<64, 128, 32>(in_FIFO_buf64_lane_7_pack, in_FIFO_buf64_lane_6);
  set_at<96, 128, 32>(in_FIFO_buf64_lane_7_pack, in_FIFO_buf64_lane_7);
auto res_stg0_update_0_sm133_0365 = stg0_generated_compute_unrolled_2(in_FIFO_buf64_lane_7_pack);
  hw_uint<64 > return_value385;
  set_at<0, 64, 32>(return_value385, res_stg0_update_0_sm133_1367);
  set_at<32, 64, 32>(return_value385, res_stg0_update_0_sm133_0365);
  return return_value385;

}

hw_uint<32> stg1_1_cu387(hw_uint<32*8>& stg0_FIFO_buf68) {
  hw_uint<16> stg0_FIFO_buf68_lane_0 = stg0_FIFO_buf68.extract<0, 15>();
  hw_uint<16> stg0_FIFO_buf68_lane_1 = stg0_FIFO_buf68.extract<16, 31>();
  hw_uint<16> stg0_FIFO_buf68_lane_2 = stg0_FIFO_buf68.extract<32, 47>();
  hw_uint<16> stg0_FIFO_buf68_lane_3 = stg0_FIFO_buf68.extract<48, 63>();
  hw_uint<16> stg0_FIFO_buf68_lane_4 = stg0_FIFO_buf68.extract<64, 79>();
  hw_uint<16> stg0_FIFO_buf68_lane_5 = stg0_FIFO_buf68.extract<80, 95>();
  hw_uint<16> stg0_FIFO_buf68_lane_6 = stg0_FIFO_buf68.extract<96, 111>();
  hw_uint<16> stg0_FIFO_buf68_lane_7 = stg0_FIFO_buf68.extract<112, 127>();

	
  hw_uint<128 > stg0_FIFO_buf68_lane_3_pack;
  set_at<0, 128, 32>(stg0_FIFO_buf68_lane_3_pack, stg0_FIFO_buf68_lane_0);
  set_at<32, 128, 32>(stg0_FIFO_buf68_lane_3_pack, stg0_FIFO_buf68_lane_1);
  set_at<64, 128, 32>(stg0_FIFO_buf68_lane_3_pack, stg0_FIFO_buf68_lane_2);
  set_at<96, 128, 32>(stg0_FIFO_buf68_lane_3_pack, stg0_FIFO_buf68_lane_3);
auto res_stg1_update_0_sm134_1371 = stg1_generated_compute_unrolled_2(stg0_FIFO_buf68_lane_3_pack);

	  hw_uint<128 > stg0_FIFO_buf68_lane_7_pack;
  set_at<0, 128, 32>(stg0_FIFO_buf68_lane_7_pack, stg0_FIFO_buf68_lane_4);
  set_at<32, 128, 32>(stg0_FIFO_buf68_lane_7_pack, stg0_FIFO_buf68_lane_5);
  set_at<64, 128, 32>(stg0_FIFO_buf68_lane_7_pack, stg0_FIFO_buf68_lane_6);
  set_at<96, 128, 32>(stg0_FIFO_buf68_lane_7_pack, stg0_FIFO_buf68_lane_7);
auto res_stg1_update_0_sm134_0369 = stg1_generated_compute_unrolled_2(stg0_FIFO_buf68_lane_7_pack);
  hw_uint<64 > return_value388;
  set_at<0, 64, 32>(return_value388, res_stg1_update_0_sm134_1371);
  set_at<32, 64, 32>(return_value388, res_stg1_update_0_sm134_0369);
  return return_value388;

}

hw_uint<32> stg2_1_cu390(hw_uint<32*8>& stg1_FIFO_buf72) {
  hw_uint<16> stg1_FIFO_buf72_lane_0 = stg1_FIFO_buf72.extract<0, 15>();
  hw_uint<16> stg1_FIFO_buf72_lane_1 = stg1_FIFO_buf72.extract<16, 31>();
  hw_uint<16> stg1_FIFO_buf72_lane_2 = stg1_FIFO_buf72.extract<32, 47>();
  hw_uint<16> stg1_FIFO_buf72_lane_3 = stg1_FIFO_buf72.extract<48, 63>();
  hw_uint<16> stg1_FIFO_buf72_lane_4 = stg1_FIFO_buf72.extract<64, 79>();
  hw_uint<16> stg1_FIFO_buf72_lane_5 = stg1_FIFO_buf72.extract<80, 95>();
  hw_uint<16> stg1_FIFO_buf72_lane_6 = stg1_FIFO_buf72.extract<96, 111>();
  hw_uint<16> stg1_FIFO_buf72_lane_7 = stg1_FIFO_buf72.extract<112, 127>();

	
  hw_uint<128 > stg1_FIFO_buf72_lane_3_pack;
  set_at<0, 128, 32>(stg1_FIFO_buf72_lane_3_pack, stg1_FIFO_buf72_lane_0);
  set_at<32, 128, 32>(stg1_FIFO_buf72_lane_3_pack, stg1_FIFO_buf72_lane_1);
  set_at<64, 128, 32>(stg1_FIFO_buf72_lane_3_pack, stg1_FIFO_buf72_lane_2);
  set_at<96, 128, 32>(stg1_FIFO_buf72_lane_3_pack, stg1_FIFO_buf72_lane_3);
auto res_stg2_update_0_sm135_1179 = stg2_generated_compute_unrolled_2(stg1_FIFO_buf72_lane_3_pack);

	  hw_uint<128 > stg1_FIFO_buf72_lane_7_pack;
  set_at<0, 128, 32>(stg1_FIFO_buf72_lane_7_pack, stg1_FIFO_buf72_lane_4);
  set_at<32, 128, 32>(stg1_FIFO_buf72_lane_7_pack, stg1_FIFO_buf72_lane_5);
  set_at<64, 128, 32>(stg1_FIFO_buf72_lane_7_pack, stg1_FIFO_buf72_lane_6);
  set_at<96, 128, 32>(stg1_FIFO_buf72_lane_7_pack, stg1_FIFO_buf72_lane_7);
auto res_stg2_update_0_sm135_0177 = stg2_generated_compute_unrolled_2(stg1_FIFO_buf72_lane_7_pack);
  hw_uint<64 > return_value391;
  set_at<0, 64, 32>(return_value391, res_stg2_update_0_sm135_1179);
  set_at<32, 64, 32>(return_value391, res_stg2_update_0_sm135_0177);
  return return_value391;

}

hw_uint<32> stg3_1_cu393(hw_uint<32*8>& stg2_FIFO_buf96) {
  hw_uint<16> stg2_FIFO_buf96_lane_0 = stg2_FIFO_buf96.extract<0, 15>();
  hw_uint<16> stg2_FIFO_buf96_lane_1 = stg2_FIFO_buf96.extract<16, 31>();
  hw_uint<16> stg2_FIFO_buf96_lane_2 = stg2_FIFO_buf96.extract<32, 47>();
  hw_uint<16> stg2_FIFO_buf96_lane_3 = stg2_FIFO_buf96.extract<48, 63>();
  hw_uint<16> stg2_FIFO_buf96_lane_4 = stg2_FIFO_buf96.extract<64, 79>();
  hw_uint<16> stg2_FIFO_buf96_lane_5 = stg2_FIFO_buf96.extract<80, 95>();
  hw_uint<16> stg2_FIFO_buf96_lane_6 = stg2_FIFO_buf96.extract<96, 111>();
  hw_uint<16> stg2_FIFO_buf96_lane_7 = stg2_FIFO_buf96.extract<112, 127>();

	
  hw_uint<128 > stg2_FIFO_buf96_lane_3_pack;
  set_at<0, 128, 32>(stg2_FIFO_buf96_lane_3_pack, stg2_FIFO_buf96_lane_0);
  set_at<32, 128, 32>(stg2_FIFO_buf96_lane_3_pack, stg2_FIFO_buf96_lane_1);
  set_at<64, 128, 32>(stg2_FIFO_buf96_lane_3_pack, stg2_FIFO_buf96_lane_2);
  set_at<96, 128, 32>(stg2_FIFO_buf96_lane_3_pack, stg2_FIFO_buf96_lane_3);
auto res_stg3_update_0_sm136_1183 = stg3_generated_compute_unrolled_2(stg2_FIFO_buf96_lane_3_pack);

	  hw_uint<128 > stg2_FIFO_buf96_lane_7_pack;
  set_at<0, 128, 32>(stg2_FIFO_buf96_lane_7_pack, stg2_FIFO_buf96_lane_4);
  set_at<32, 128, 32>(stg2_FIFO_buf96_lane_7_pack, stg2_FIFO_buf96_lane_5);
  set_at<64, 128, 32>(stg2_FIFO_buf96_lane_7_pack, stg2_FIFO_buf96_lane_6);
  set_at<96, 128, 32>(stg2_FIFO_buf96_lane_7_pack, stg2_FIFO_buf96_lane_7);
auto res_stg3_update_0_sm136_0181 = stg3_generated_compute_unrolled_2(stg2_FIFO_buf96_lane_7_pack);
  hw_uint<64 > return_value394;
  set_at<0, 64, 32>(return_value394, res_stg3_update_0_sm136_1183);
  set_at<32, 64, 32>(return_value394, res_stg3_update_0_sm136_0181);
  return return_value394;

}

hw_uint<32> stg4_1_cu396(hw_uint<32*8>& stg3_FIFO_buf100) {
  hw_uint<16> stg3_FIFO_buf100_lane_0 = stg3_FIFO_buf100.extract<0, 15>();
  hw_uint<16> stg3_FIFO_buf100_lane_1 = stg3_FIFO_buf100.extract<16, 31>();
  hw_uint<16> stg3_FIFO_buf100_lane_2 = stg3_FIFO_buf100.extract<32, 47>();
  hw_uint<16> stg3_FIFO_buf100_lane_3 = stg3_FIFO_buf100.extract<48, 63>();
  hw_uint<16> stg3_FIFO_buf100_lane_4 = stg3_FIFO_buf100.extract<64, 79>();
  hw_uint<16> stg3_FIFO_buf100_lane_5 = stg3_FIFO_buf100.extract<80, 95>();
  hw_uint<16> stg3_FIFO_buf100_lane_6 = stg3_FIFO_buf100.extract<96, 111>();
  hw_uint<16> stg3_FIFO_buf100_lane_7 = stg3_FIFO_buf100.extract<112, 127>();

	
  hw_uint<128 > stg3_FIFO_buf100_lane_3_pack;
  set_at<0, 128, 32>(stg3_FIFO_buf100_lane_3_pack, stg3_FIFO_buf100_lane_0);
  set_at<32, 128, 32>(stg3_FIFO_buf100_lane_3_pack, stg3_FIFO_buf100_lane_1);
  set_at<64, 128, 32>(stg3_FIFO_buf100_lane_3_pack, stg3_FIFO_buf100_lane_2);
  set_at<96, 128, 32>(stg3_FIFO_buf100_lane_3_pack, stg3_FIFO_buf100_lane_3);
auto res_stg4_update_0_sm137_1187 = stg4_generated_compute_unrolled_2(stg3_FIFO_buf100_lane_3_pack);

	  hw_uint<128 > stg3_FIFO_buf100_lane_7_pack;
  set_at<0, 128, 32>(stg3_FIFO_buf100_lane_7_pack, stg3_FIFO_buf100_lane_4);
  set_at<32, 128, 32>(stg3_FIFO_buf100_lane_7_pack, stg3_FIFO_buf100_lane_5);
  set_at<64, 128, 32>(stg3_FIFO_buf100_lane_7_pack, stg3_FIFO_buf100_lane_6);
  set_at<96, 128, 32>(stg3_FIFO_buf100_lane_7_pack, stg3_FIFO_buf100_lane_7);
auto res_stg4_update_0_sm137_0185 = stg4_generated_compute_unrolled_2(stg3_FIFO_buf100_lane_7_pack);
  hw_uint<64 > return_value397;
  set_at<0, 64, 32>(return_value397, res_stg4_update_0_sm137_1187);
  set_at<32, 64, 32>(return_value397, res_stg4_update_0_sm137_0185);
  return return_value397;

}

hw_uint<32> stg5_1_cu399(hw_uint<32*8>& stg4_FIFO_buf104) {
  hw_uint<16> stg4_FIFO_buf104_lane_0 = stg4_FIFO_buf104.extract<0, 15>();
  hw_uint<16> stg4_FIFO_buf104_lane_1 = stg4_FIFO_buf104.extract<16, 31>();
  hw_uint<16> stg4_FIFO_buf104_lane_2 = stg4_FIFO_buf104.extract<32, 47>();
  hw_uint<16> stg4_FIFO_buf104_lane_3 = stg4_FIFO_buf104.extract<48, 63>();
  hw_uint<16> stg4_FIFO_buf104_lane_4 = stg4_FIFO_buf104.extract<64, 79>();
  hw_uint<16> stg4_FIFO_buf104_lane_5 = stg4_FIFO_buf104.extract<80, 95>();
  hw_uint<16> stg4_FIFO_buf104_lane_6 = stg4_FIFO_buf104.extract<96, 111>();
  hw_uint<16> stg4_FIFO_buf104_lane_7 = stg4_FIFO_buf104.extract<112, 127>();

	
  hw_uint<128 > stg4_FIFO_buf104_lane_3_pack;
  set_at<0, 128, 32>(stg4_FIFO_buf104_lane_3_pack, stg4_FIFO_buf104_lane_0);
  set_at<32, 128, 32>(stg4_FIFO_buf104_lane_3_pack, stg4_FIFO_buf104_lane_1);
  set_at<64, 128, 32>(stg4_FIFO_buf104_lane_3_pack, stg4_FIFO_buf104_lane_2);
  set_at<96, 128, 32>(stg4_FIFO_buf104_lane_3_pack, stg4_FIFO_buf104_lane_3);
auto res_stg5_update_0_sm138_1191 = stg5_generated_compute_unrolled_2(stg4_FIFO_buf104_lane_3_pack);

	  hw_uint<128 > stg4_FIFO_buf104_lane_7_pack;
  set_at<0, 128, 32>(stg4_FIFO_buf104_lane_7_pack, stg4_FIFO_buf104_lane_4);
  set_at<32, 128, 32>(stg4_FIFO_buf104_lane_7_pack, stg4_FIFO_buf104_lane_5);
  set_at<64, 128, 32>(stg4_FIFO_buf104_lane_7_pack, stg4_FIFO_buf104_lane_6);
  set_at<96, 128, 32>(stg4_FIFO_buf104_lane_7_pack, stg4_FIFO_buf104_lane_7);
auto res_stg5_update_0_sm138_0189 = stg5_generated_compute_unrolled_2(stg4_FIFO_buf104_lane_7_pack);
  hw_uint<64 > return_value400;
  set_at<0, 64, 32>(return_value400, res_stg5_update_0_sm138_1191);
  set_at<32, 64, 32>(return_value400, res_stg5_update_0_sm138_0189);
  return return_value400;

}

hw_uint<32> stg6_1_cu402(hw_uint<32*8>& stg5_FIFO_buf108) {
  hw_uint<16> stg5_FIFO_buf108_lane_0 = stg5_FIFO_buf108.extract<0, 15>();
  hw_uint<16> stg5_FIFO_buf108_lane_1 = stg5_FIFO_buf108.extract<16, 31>();
  hw_uint<16> stg5_FIFO_buf108_lane_2 = stg5_FIFO_buf108.extract<32, 47>();
  hw_uint<16> stg5_FIFO_buf108_lane_3 = stg5_FIFO_buf108.extract<48, 63>();
  hw_uint<16> stg5_FIFO_buf108_lane_4 = stg5_FIFO_buf108.extract<64, 79>();
  hw_uint<16> stg5_FIFO_buf108_lane_5 = stg5_FIFO_buf108.extract<80, 95>();
  hw_uint<16> stg5_FIFO_buf108_lane_6 = stg5_FIFO_buf108.extract<96, 111>();
  hw_uint<16> stg5_FIFO_buf108_lane_7 = stg5_FIFO_buf108.extract<112, 127>();

	
  hw_uint<128 > stg5_FIFO_buf108_lane_3_pack;
  set_at<0, 128, 32>(stg5_FIFO_buf108_lane_3_pack, stg5_FIFO_buf108_lane_0);
  set_at<32, 128, 32>(stg5_FIFO_buf108_lane_3_pack, stg5_FIFO_buf108_lane_1);
  set_at<64, 128, 32>(stg5_FIFO_buf108_lane_3_pack, stg5_FIFO_buf108_lane_2);
  set_at<96, 128, 32>(stg5_FIFO_buf108_lane_3_pack, stg5_FIFO_buf108_lane_3);
auto res_stg6_update_0_sm139_1195 = stg6_generated_compute_unrolled_2(stg5_FIFO_buf108_lane_3_pack);

	  hw_uint<128 > stg5_FIFO_buf108_lane_7_pack;
  set_at<0, 128, 32>(stg5_FIFO_buf108_lane_7_pack, stg5_FIFO_buf108_lane_4);
  set_at<32, 128, 32>(stg5_FIFO_buf108_lane_7_pack, stg5_FIFO_buf108_lane_5);
  set_at<64, 128, 32>(stg5_FIFO_buf108_lane_7_pack, stg5_FIFO_buf108_lane_6);
  set_at<96, 128, 32>(stg5_FIFO_buf108_lane_7_pack, stg5_FIFO_buf108_lane_7);
auto res_stg6_update_0_sm139_0193 = stg6_generated_compute_unrolled_2(stg5_FIFO_buf108_lane_7_pack);
  hw_uint<64 > return_value403;
  set_at<0, 64, 32>(return_value403, res_stg6_update_0_sm139_1195);
  set_at<32, 64, 32>(return_value403, res_stg6_update_0_sm139_0193);
  return return_value403;

}

hw_uint<32> stg7_1_cu405(hw_uint<32*8>& stg6_FIFO_buf112) {
  hw_uint<16> stg6_FIFO_buf112_lane_0 = stg6_FIFO_buf112.extract<0, 15>();
  hw_uint<16> stg6_FIFO_buf112_lane_1 = stg6_FIFO_buf112.extract<16, 31>();
  hw_uint<16> stg6_FIFO_buf112_lane_2 = stg6_FIFO_buf112.extract<32, 47>();
  hw_uint<16> stg6_FIFO_buf112_lane_3 = stg6_FIFO_buf112.extract<48, 63>();
  hw_uint<16> stg6_FIFO_buf112_lane_4 = stg6_FIFO_buf112.extract<64, 79>();
  hw_uint<16> stg6_FIFO_buf112_lane_5 = stg6_FIFO_buf112.extract<80, 95>();
  hw_uint<16> stg6_FIFO_buf112_lane_6 = stg6_FIFO_buf112.extract<96, 111>();
  hw_uint<16> stg6_FIFO_buf112_lane_7 = stg6_FIFO_buf112.extract<112, 127>();

	
  hw_uint<128 > stg6_FIFO_buf112_lane_3_pack;
  set_at<0, 128, 32>(stg6_FIFO_buf112_lane_3_pack, stg6_FIFO_buf112_lane_0);
  set_at<32, 128, 32>(stg6_FIFO_buf112_lane_3_pack, stg6_FIFO_buf112_lane_1);
  set_at<64, 128, 32>(stg6_FIFO_buf112_lane_3_pack, stg6_FIFO_buf112_lane_2);
  set_at<96, 128, 32>(stg6_FIFO_buf112_lane_3_pack, stg6_FIFO_buf112_lane_3);
auto res_stg7_update_0_sm140_1199 = stg7_generated_compute_unrolled_2(stg6_FIFO_buf112_lane_3_pack);

	  hw_uint<128 > stg6_FIFO_buf112_lane_7_pack;
  set_at<0, 128, 32>(stg6_FIFO_buf112_lane_7_pack, stg6_FIFO_buf112_lane_4);
  set_at<32, 128, 32>(stg6_FIFO_buf112_lane_7_pack, stg6_FIFO_buf112_lane_5);
  set_at<64, 128, 32>(stg6_FIFO_buf112_lane_7_pack, stg6_FIFO_buf112_lane_6);
  set_at<96, 128, 32>(stg6_FIFO_buf112_lane_7_pack, stg6_FIFO_buf112_lane_7);
auto res_stg7_update_0_sm140_0197 = stg7_generated_compute_unrolled_2(stg6_FIFO_buf112_lane_7_pack);
  hw_uint<64 > return_value406;
  set_at<0, 64, 32>(return_value406, res_stg7_update_0_sm140_1199);
  set_at<32, 64, 32>(return_value406, res_stg7_update_0_sm140_0197);
  return return_value406;

}

hw_uint<32> stg8_1_cu408(hw_uint<32*8>& stg7_FIFO_buf116) {
  hw_uint<16> stg7_FIFO_buf116_lane_0 = stg7_FIFO_buf116.extract<0, 15>();
  hw_uint<16> stg7_FIFO_buf116_lane_1 = stg7_FIFO_buf116.extract<16, 31>();
  hw_uint<16> stg7_FIFO_buf116_lane_2 = stg7_FIFO_buf116.extract<32, 47>();
  hw_uint<16> stg7_FIFO_buf116_lane_3 = stg7_FIFO_buf116.extract<48, 63>();
  hw_uint<16> stg7_FIFO_buf116_lane_4 = stg7_FIFO_buf116.extract<64, 79>();
  hw_uint<16> stg7_FIFO_buf116_lane_5 = stg7_FIFO_buf116.extract<80, 95>();
  hw_uint<16> stg7_FIFO_buf116_lane_6 = stg7_FIFO_buf116.extract<96, 111>();
  hw_uint<16> stg7_FIFO_buf116_lane_7 = stg7_FIFO_buf116.extract<112, 127>();

	
  hw_uint<128 > stg7_FIFO_buf116_lane_3_pack;
  set_at<0, 128, 32>(stg7_FIFO_buf116_lane_3_pack, stg7_FIFO_buf116_lane_0);
  set_at<32, 128, 32>(stg7_FIFO_buf116_lane_3_pack, stg7_FIFO_buf116_lane_1);
  set_at<64, 128, 32>(stg7_FIFO_buf116_lane_3_pack, stg7_FIFO_buf116_lane_2);
  set_at<96, 128, 32>(stg7_FIFO_buf116_lane_3_pack, stg7_FIFO_buf116_lane_3);
auto res_stg8_update_0_sm141_1203 = stg8_generated_compute_unrolled_2(stg7_FIFO_buf116_lane_3_pack);

	  hw_uint<128 > stg7_FIFO_buf116_lane_7_pack;
  set_at<0, 128, 32>(stg7_FIFO_buf116_lane_7_pack, stg7_FIFO_buf116_lane_4);
  set_at<32, 128, 32>(stg7_FIFO_buf116_lane_7_pack, stg7_FIFO_buf116_lane_5);
  set_at<64, 128, 32>(stg7_FIFO_buf116_lane_7_pack, stg7_FIFO_buf116_lane_6);
  set_at<96, 128, 32>(stg7_FIFO_buf116_lane_7_pack, stg7_FIFO_buf116_lane_7);
auto res_stg8_update_0_sm141_0201 = stg8_generated_compute_unrolled_2(stg7_FIFO_buf116_lane_7_pack);
  hw_uint<64 > return_value409;
  set_at<0, 64, 32>(return_value409, res_stg8_update_0_sm141_1203);
  set_at<32, 64, 32>(return_value409, res_stg8_update_0_sm141_0201);
  return return_value409;

}

hw_uint<32> stg9_1_cu411(hw_uint<32*8>& stg8_FIFO_buf120) {
  hw_uint<16> stg8_FIFO_buf120_lane_0 = stg8_FIFO_buf120.extract<0, 15>();
  hw_uint<16> stg8_FIFO_buf120_lane_1 = stg8_FIFO_buf120.extract<16, 31>();
  hw_uint<16> stg8_FIFO_buf120_lane_2 = stg8_FIFO_buf120.extract<32, 47>();
  hw_uint<16> stg8_FIFO_buf120_lane_3 = stg8_FIFO_buf120.extract<48, 63>();
  hw_uint<16> stg8_FIFO_buf120_lane_4 = stg8_FIFO_buf120.extract<64, 79>();
  hw_uint<16> stg8_FIFO_buf120_lane_5 = stg8_FIFO_buf120.extract<80, 95>();
  hw_uint<16> stg8_FIFO_buf120_lane_6 = stg8_FIFO_buf120.extract<96, 111>();
  hw_uint<16> stg8_FIFO_buf120_lane_7 = stg8_FIFO_buf120.extract<112, 127>();

	
  hw_uint<128 > stg8_FIFO_buf120_lane_3_pack;
  set_at<0, 128, 32>(stg8_FIFO_buf120_lane_3_pack, stg8_FIFO_buf120_lane_0);
  set_at<32, 128, 32>(stg8_FIFO_buf120_lane_3_pack, stg8_FIFO_buf120_lane_1);
  set_at<64, 128, 32>(stg8_FIFO_buf120_lane_3_pack, stg8_FIFO_buf120_lane_2);
  set_at<96, 128, 32>(stg8_FIFO_buf120_lane_3_pack, stg8_FIFO_buf120_lane_3);
auto res_stg9_update_0_sm142_1207 = stg9_generated_compute_unrolled_2(stg8_FIFO_buf120_lane_3_pack);

	  hw_uint<128 > stg8_FIFO_buf120_lane_7_pack;
  set_at<0, 128, 32>(stg8_FIFO_buf120_lane_7_pack, stg8_FIFO_buf120_lane_4);
  set_at<32, 128, 32>(stg8_FIFO_buf120_lane_7_pack, stg8_FIFO_buf120_lane_5);
  set_at<64, 128, 32>(stg8_FIFO_buf120_lane_7_pack, stg8_FIFO_buf120_lane_6);
  set_at<96, 128, 32>(stg8_FIFO_buf120_lane_7_pack, stg8_FIFO_buf120_lane_7);
auto res_stg9_update_0_sm142_0205 = stg9_generated_compute_unrolled_2(stg8_FIFO_buf120_lane_7_pack);
  hw_uint<64 > return_value412;
  set_at<0, 64, 32>(return_value412, res_stg9_update_0_sm142_1207);
  set_at<32, 64, 32>(return_value412, res_stg9_update_0_sm142_0205);
  return return_value412;

}

hw_uint<32> stg10_1_cu414(hw_uint<32*8>& stg9_FIFO_buf124) {
  hw_uint<16> stg9_FIFO_buf124_lane_0 = stg9_FIFO_buf124.extract<0, 15>();
  hw_uint<16> stg9_FIFO_buf124_lane_1 = stg9_FIFO_buf124.extract<16, 31>();
  hw_uint<16> stg9_FIFO_buf124_lane_2 = stg9_FIFO_buf124.extract<32, 47>();
  hw_uint<16> stg9_FIFO_buf124_lane_3 = stg9_FIFO_buf124.extract<48, 63>();
  hw_uint<16> stg9_FIFO_buf124_lane_4 = stg9_FIFO_buf124.extract<64, 79>();
  hw_uint<16> stg9_FIFO_buf124_lane_5 = stg9_FIFO_buf124.extract<80, 95>();
  hw_uint<16> stg9_FIFO_buf124_lane_6 = stg9_FIFO_buf124.extract<96, 111>();
  hw_uint<16> stg9_FIFO_buf124_lane_7 = stg9_FIFO_buf124.extract<112, 127>();

	
  hw_uint<128 > stg9_FIFO_buf124_lane_3_pack;
  set_at<0, 128, 32>(stg9_FIFO_buf124_lane_3_pack, stg9_FIFO_buf124_lane_0);
  set_at<32, 128, 32>(stg9_FIFO_buf124_lane_3_pack, stg9_FIFO_buf124_lane_1);
  set_at<64, 128, 32>(stg9_FIFO_buf124_lane_3_pack, stg9_FIFO_buf124_lane_2);
  set_at<96, 128, 32>(stg9_FIFO_buf124_lane_3_pack, stg9_FIFO_buf124_lane_3);
auto res_stg10_update_0_sm143_1211 = stg10_generated_compute_unrolled_2(stg9_FIFO_buf124_lane_3_pack);

	  hw_uint<128 > stg9_FIFO_buf124_lane_7_pack;
  set_at<0, 128, 32>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_4);
  set_at<32, 128, 32>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_5);
  set_at<64, 128, 32>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_6);
  set_at<96, 128, 32>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_7);
auto res_stg10_update_0_sm143_0209 = stg10_generated_compute_unrolled_2(stg9_FIFO_buf124_lane_7_pack);
  hw_uint<64 > return_value415;
  set_at<0, 64, 32>(return_value415, res_stg10_update_0_sm143_1211);
  set_at<32, 64, 32>(return_value415, res_stg10_update_0_sm143_0209);
  return return_value415;

}

hw_uint<32> stg11_1_cu417(hw_uint<32*8>& stg10_FIFO_buf76) {
  hw_uint<16> stg10_FIFO_buf76_lane_0 = stg10_FIFO_buf76.extract<0, 15>();
  hw_uint<16> stg10_FIFO_buf76_lane_1 = stg10_FIFO_buf76.extract<16, 31>();
  hw_uint<16> stg10_FIFO_buf76_lane_2 = stg10_FIFO_buf76.extract<32, 47>();
  hw_uint<16> stg10_FIFO_buf76_lane_3 = stg10_FIFO_buf76.extract<48, 63>();
  hw_uint<16> stg10_FIFO_buf76_lane_4 = stg10_FIFO_buf76.extract<64, 79>();
  hw_uint<16> stg10_FIFO_buf76_lane_5 = stg10_FIFO_buf76.extract<80, 95>();
  hw_uint<16> stg10_FIFO_buf76_lane_6 = stg10_FIFO_buf76.extract<96, 111>();
  hw_uint<16> stg10_FIFO_buf76_lane_7 = stg10_FIFO_buf76.extract<112, 127>();

	
  hw_uint<128 > stg10_FIFO_buf76_lane_3_pack;
  set_at<0, 128, 32>(stg10_FIFO_buf76_lane_3_pack, stg10_FIFO_buf76_lane_0);
  set_at<32, 128, 32>(stg10_FIFO_buf76_lane_3_pack, stg10_FIFO_buf76_lane_1);
  set_at<64, 128, 32>(stg10_FIFO_buf76_lane_3_pack, stg10_FIFO_buf76_lane_2);
  set_at<96, 128, 32>(stg10_FIFO_buf76_lane_3_pack, stg10_FIFO_buf76_lane_3);
auto res_stg11_update_0_sm144_1215 = stg11_generated_compute_unrolled_2(stg10_FIFO_buf76_lane_3_pack);

	  hw_uint<128 > stg10_FIFO_buf76_lane_7_pack;
  set_at<0, 128, 32>(stg10_FIFO_buf76_lane_7_pack, stg10_FIFO_buf76_lane_4);
  set_at<32, 128, 32>(stg10_FIFO_buf76_lane_7_pack, stg10_FIFO_buf76_lane_5);
  set_at<64, 128, 32>(stg10_FIFO_buf76_lane_7_pack, stg10_FIFO_buf76_lane_6);
  set_at<96, 128, 32>(stg10_FIFO_buf76_lane_7_pack, stg10_FIFO_buf76_lane_7);
auto res_stg11_update_0_sm144_0213 = stg11_generated_compute_unrolled_2(stg10_FIFO_buf76_lane_7_pack);
  hw_uint<64 > return_value418;
  set_at<0, 64, 32>(return_value418, res_stg11_update_0_sm144_1215);
  set_at<32, 64, 32>(return_value418, res_stg11_update_0_sm144_0213);
  return return_value418;

}

hw_uint<32> stg12_1_cu420(hw_uint<32*8>& stg11_FIFO_buf80) {
  hw_uint<16> stg11_FIFO_buf80_lane_0 = stg11_FIFO_buf80.extract<0, 15>();
  hw_uint<16> stg11_FIFO_buf80_lane_1 = stg11_FIFO_buf80.extract<16, 31>();
  hw_uint<16> stg11_FIFO_buf80_lane_2 = stg11_FIFO_buf80.extract<32, 47>();
  hw_uint<16> stg11_FIFO_buf80_lane_3 = stg11_FIFO_buf80.extract<48, 63>();
  hw_uint<16> stg11_FIFO_buf80_lane_4 = stg11_FIFO_buf80.extract<64, 79>();
  hw_uint<16> stg11_FIFO_buf80_lane_5 = stg11_FIFO_buf80.extract<80, 95>();
  hw_uint<16> stg11_FIFO_buf80_lane_6 = stg11_FIFO_buf80.extract<96, 111>();
  hw_uint<16> stg11_FIFO_buf80_lane_7 = stg11_FIFO_buf80.extract<112, 127>();

	
  hw_uint<128 > stg11_FIFO_buf80_lane_3_pack;
  set_at<0, 128, 32>(stg11_FIFO_buf80_lane_3_pack, stg11_FIFO_buf80_lane_0);
  set_at<32, 128, 32>(stg11_FIFO_buf80_lane_3_pack, stg11_FIFO_buf80_lane_1);
  set_at<64, 128, 32>(stg11_FIFO_buf80_lane_3_pack, stg11_FIFO_buf80_lane_2);
  set_at<96, 128, 32>(stg11_FIFO_buf80_lane_3_pack, stg11_FIFO_buf80_lane_3);
auto res_stg12_update_0_sm145_1219 = stg12_generated_compute_unrolled_2(stg11_FIFO_buf80_lane_3_pack);

	  hw_uint<128 > stg11_FIFO_buf80_lane_7_pack;
  set_at<0, 128, 32>(stg11_FIFO_buf80_lane_7_pack, stg11_FIFO_buf80_lane_4);
  set_at<32, 128, 32>(stg11_FIFO_buf80_lane_7_pack, stg11_FIFO_buf80_lane_5);
  set_at<64, 128, 32>(stg11_FIFO_buf80_lane_7_pack, stg11_FIFO_buf80_lane_6);
  set_at<96, 128, 32>(stg11_FIFO_buf80_lane_7_pack, stg11_FIFO_buf80_lane_7);
auto res_stg12_update_0_sm145_0217 = stg12_generated_compute_unrolled_2(stg11_FIFO_buf80_lane_7_pack);
  hw_uint<64 > return_value421;
  set_at<0, 64, 32>(return_value421, res_stg12_update_0_sm145_1219);
  set_at<32, 64, 32>(return_value421, res_stg12_update_0_sm145_0217);
  return return_value421;

}

hw_uint<32> stg13_1_cu423(hw_uint<32*8>& stg12_FIFO_buf84) {
  hw_uint<16> stg12_FIFO_buf84_lane_0 = stg12_FIFO_buf84.extract<0, 15>();
  hw_uint<16> stg12_FIFO_buf84_lane_1 = stg12_FIFO_buf84.extract<16, 31>();
  hw_uint<16> stg12_FIFO_buf84_lane_2 = stg12_FIFO_buf84.extract<32, 47>();
  hw_uint<16> stg12_FIFO_buf84_lane_3 = stg12_FIFO_buf84.extract<48, 63>();
  hw_uint<16> stg12_FIFO_buf84_lane_4 = stg12_FIFO_buf84.extract<64, 79>();
  hw_uint<16> stg12_FIFO_buf84_lane_5 = stg12_FIFO_buf84.extract<80, 95>();
  hw_uint<16> stg12_FIFO_buf84_lane_6 = stg12_FIFO_buf84.extract<96, 111>();
  hw_uint<16> stg12_FIFO_buf84_lane_7 = stg12_FIFO_buf84.extract<112, 127>();

	
  hw_uint<128 > stg12_FIFO_buf84_lane_3_pack;
  set_at<0, 128, 32>(stg12_FIFO_buf84_lane_3_pack, stg12_FIFO_buf84_lane_0);
  set_at<32, 128, 32>(stg12_FIFO_buf84_lane_3_pack, stg12_FIFO_buf84_lane_1);
  set_at<64, 128, 32>(stg12_FIFO_buf84_lane_3_pack, stg12_FIFO_buf84_lane_2);
  set_at<96, 128, 32>(stg12_FIFO_buf84_lane_3_pack, stg12_FIFO_buf84_lane_3);
auto res_stg13_update_0_sm146_1223 = stg13_generated_compute_unrolled_2(stg12_FIFO_buf84_lane_3_pack);

	  hw_uint<128 > stg12_FIFO_buf84_lane_7_pack;
  set_at<0, 128, 32>(stg12_FIFO_buf84_lane_7_pack, stg12_FIFO_buf84_lane_4);
  set_at<32, 128, 32>(stg12_FIFO_buf84_lane_7_pack, stg12_FIFO_buf84_lane_5);
  set_at<64, 128, 32>(stg12_FIFO_buf84_lane_7_pack, stg12_FIFO_buf84_lane_6);
  set_at<96, 128, 32>(stg12_FIFO_buf84_lane_7_pack, stg12_FIFO_buf84_lane_7);
auto res_stg13_update_0_sm146_0221 = stg13_generated_compute_unrolled_2(stg12_FIFO_buf84_lane_7_pack);
  hw_uint<64 > return_value424;
  set_at<0, 64, 32>(return_value424, res_stg13_update_0_sm146_1223);
  set_at<32, 64, 32>(return_value424, res_stg13_update_0_sm146_0221);
  return return_value424;

}

hw_uint<32> stg14_1_cu426(hw_uint<32*8>& stg13_FIFO_buf88) {
  hw_uint<16> stg13_FIFO_buf88_lane_0 = stg13_FIFO_buf88.extract<0, 15>();
  hw_uint<16> stg13_FIFO_buf88_lane_1 = stg13_FIFO_buf88.extract<16, 31>();
  hw_uint<16> stg13_FIFO_buf88_lane_2 = stg13_FIFO_buf88.extract<32, 47>();
  hw_uint<16> stg13_FIFO_buf88_lane_3 = stg13_FIFO_buf88.extract<48, 63>();
  hw_uint<16> stg13_FIFO_buf88_lane_4 = stg13_FIFO_buf88.extract<64, 79>();
  hw_uint<16> stg13_FIFO_buf88_lane_5 = stg13_FIFO_buf88.extract<80, 95>();
  hw_uint<16> stg13_FIFO_buf88_lane_6 = stg13_FIFO_buf88.extract<96, 111>();
  hw_uint<16> stg13_FIFO_buf88_lane_7 = stg13_FIFO_buf88.extract<112, 127>();

	
  hw_uint<128 > stg13_FIFO_buf88_lane_3_pack;
  set_at<0, 128, 32>(stg13_FIFO_buf88_lane_3_pack, stg13_FIFO_buf88_lane_0);
  set_at<32, 128, 32>(stg13_FIFO_buf88_lane_3_pack, stg13_FIFO_buf88_lane_1);
  set_at<64, 128, 32>(stg13_FIFO_buf88_lane_3_pack, stg13_FIFO_buf88_lane_2);
  set_at<96, 128, 32>(stg13_FIFO_buf88_lane_3_pack, stg13_FIFO_buf88_lane_3);
auto res_stg14_update_0_sm147_1227 = stg14_generated_compute_unrolled_2(stg13_FIFO_buf88_lane_3_pack);

	  hw_uint<128 > stg13_FIFO_buf88_lane_7_pack;
  set_at<0, 128, 32>(stg13_FIFO_buf88_lane_7_pack, stg13_FIFO_buf88_lane_4);
  set_at<32, 128, 32>(stg13_FIFO_buf88_lane_7_pack, stg13_FIFO_buf88_lane_5);
  set_at<64, 128, 32>(stg13_FIFO_buf88_lane_7_pack, stg13_FIFO_buf88_lane_6);
  set_at<96, 128, 32>(stg13_FIFO_buf88_lane_7_pack, stg13_FIFO_buf88_lane_7);
auto res_stg14_update_0_sm147_0225 = stg14_generated_compute_unrolled_2(stg13_FIFO_buf88_lane_7_pack);
  hw_uint<64 > return_value427;
  set_at<0, 64, 32>(return_value427, res_stg14_update_0_sm147_1227);
  set_at<32, 64, 32>(return_value427, res_stg14_update_0_sm147_0225);
  return return_value427;

}

hw_uint<32> jacdynl_2_1_cu429(hw_uint<32*2>& stg14_FIFO_buf92) {
  hw_uint<16> stg14_FIFO_buf92_lane_0 = stg14_FIFO_buf92.extract<0, 15>();
  hw_uint<16> stg14_FIFO_buf92_lane_1 = stg14_FIFO_buf92.extract<16, 31>();

	
  hw_uint<32 > stg14_FIFO_buf92_lane_0_pack;
  set_at<0, 32, 32>(stg14_FIFO_buf92_lane_0_pack, stg14_FIFO_buf92_lane_0);
auto res_jacdynl_2_update_0_sm148_1231 = jacdynl_2_generated_compute_unrolled_2(stg14_FIFO_buf92_lane_0_pack);

	  hw_uint<32 > stg14_FIFO_buf92_lane_1_pack;
  set_at<0, 32, 32>(stg14_FIFO_buf92_lane_1_pack, stg14_FIFO_buf92_lane_1);
auto res_jacdynl_2_update_0_sm148_0229 = jacdynl_2_generated_compute_unrolled_2(stg14_FIFO_buf92_lane_1_pack);
  hw_uint<64 > return_value430;
  set_at<0, 64, 32>(return_value430, res_jacdynl_2_update_0_sm148_1231);
  set_at<32, 64, 32>(return_value430, res_jacdynl_2_update_0_sm148_0229);
  return return_value430;

}

hw_uint<32> stg14_ld29_cu432(hw_uint<32*2>& stg14) {
  return stg14;
}

hw_uint<32> stg5_ld45_cu434(hw_uint<32*2>& stg5) {
  return stg5;
}

hw_uint<32> in_ld1_cu436(hw_uint<32*2>& in) {
  return in;
}

hw_uint<32> stg6_ld49_cu438(hw_uint<32*2>& stg6) {
  return stg6;
}

hw_uint<32> stg1_to_gp_98_ld73_cu440(hw_uint<32*2>& stg1_to_gp_98) {
  return stg1_to_gp_98;
}

hw_uint<32> stg8_to_gp_1656_ld121_cu442(hw_uint<32*2>& stg8_to_gp_1656) {
  return stg8_to_gp_1656;
}

hw_uint<32> stg5_to_gp_1344_ld109_cu444(hw_uint<32*2>& stg5_to_gp_1344) {
  return stg5_to_gp_1344;
}

hw_uint<32> stg6_to_gp_1448_ld113_cu446(hw_uint<32*2>& stg6_to_gp_1448) {
  return stg6_to_gp_1448;
}

hw_uint<32> stg0_to_gp_84_ld69_cu448(hw_uint<32*2>& stg0_to_gp_84) {
  return stg0_to_gp_84;
}

hw_uint<32> stg4_to_gp_1240_ld105_cu450(hw_uint<32*2>& stg4_to_gp_1240) {
  return stg4_to_gp_1240;
}

hw_uint<32> stg9_to_gp_360_ld125_cu452(hw_uint<32*2>& stg9_to_gp_360) {
  return stg9_to_gp_360;
}

hw_uint<32> stg2_ld33_cu454(hw_uint<32*2>& stg2) {
  return stg2;
}

hw_uint<32> stg3_ld37_cu456(hw_uint<32*2>& stg3) {
  return stg3;
}

hw_uint<32> stg4_ld41_cu458(hw_uint<32*2>& stg4) {
  return stg4;
}

hw_uint<32> stg7_ld53_cu460(hw_uint<32*2>& stg7) {
  return stg7;
}

hw_uint<32> stg8_ld57_cu462(hw_uint<32*2>& stg8) {
  return stg8;
}

hw_uint<32> stg9_ld61_cu464(hw_uint<32*2>& stg9) {
  return stg9;
}

hw_uint<32> in_to_gp_20_ld65_cu466(hw_uint<32*2>& in_to_gp_20) {
  return in_to_gp_20;
}

hw_uint<32> stg10_to_gp_412_ld77_cu468(hw_uint<32*2>& stg10_to_gp_412) {
  return stg10_to_gp_412;
}

hw_uint<32> stg11_to_gp_516_ld81_cu470(hw_uint<32*2>& stg11_to_gp_516) {
  return stg11_to_gp_516;
}

hw_uint<32> stg14_to_gp_128_ld93_cu472(hw_uint<32*2>& stg14_to_gp_128) {
  return stg14_to_gp_128;
}

hw_uint<32> stg2_to_gp_1032_ld97_cu474(hw_uint<32*2>& stg2_to_gp_1032) {
  return stg2_to_gp_1032;
}

hw_uint<32> stg1_ld9_cu476(hw_uint<32*2>& stg1) {
  return stg1;
}

hw_uint<32> stg11_ld17_cu478(hw_uint<32*2>& stg11) {
  return stg11;
}

hw_uint<32> stg12_to_gp_620_ld85_cu480(hw_uint<32*2>& stg12_to_gp_620) {
  return stg12_to_gp_620;
}

hw_uint<32> stg3_to_gp_1136_ld101_cu482(hw_uint<32*2>& stg3_to_gp_1136) {
  return stg3_to_gp_1136;
}

hw_uint<32> stg7_to_gp_1552_ld117_cu484(hw_uint<32*2>& stg7_to_gp_1552) {
  return stg7_to_gp_1552;
}

hw_uint<32> stg12_ld21_cu486(hw_uint<32*2>& stg12) {
  return stg12;
}

