#include <algorithm>
#include <fstream>
#include <vector>
#include "jacdyn_1_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<64> > in_1_merged575_read_channel;
  HWStream<hw_uint<64> > jacdyn_1_1_merged623_write_channel;
  // In lanes = 4
  for (int r = 0; r < 1950; r++) {
    for (int cl = 0; cl < 1140 / 4; cl++) {
      hw_uint<64> packed;
      {
      int c = 4*cl + 0;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<0, 64, 16>(packed, val);
      } else {
        set_at<0, 64, 16>(packed, 0);
      }
      }
      {
      int c = 4*cl + 1;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<16, 64, 16>(packed, val);
      } else {
        set_at<16, 64, 16>(packed, 0);
      }
      }
      {
      int c = 4*cl + 2;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<32, 64, 16>(packed, val);
      } else {
        set_at<32, 64, 16>(packed, 0);
      }
      }
      {
      int c = 4*cl + 3;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<48, 64, 16>(packed, val);
      } else {
        set_at<48, 64, 16>(packed, 0);
      }
      }
        in_1_merged575_read_channel.write(packed);
    }
  }
  jacdyn_1_opt(in_1_merged575_read_channel, jacdyn_1_1_merged623_write_channel);
  bitmap_image output(1080, 1920);
  for (int r = 0; r < 1920; r++) {
    for (int cl = 0; cl < 1080 / 4; cl++) {
      auto packed_val = jacdyn_1_1_merged623_write_channel.read();
      hw_uint<16> packed_val_lane_0 = packed_val.extract<0, 15>();
      hw_uint<16> packed_val_lane_1 = packed_val.extract<16, 31>();
      hw_uint<16> packed_val_lane_2 = packed_val.extract<32, 47>();
      hw_uint<16> packed_val_lane_3 = packed_val.extract<48, 63>();
      {
      hw_uint<64> packed;
      int c = 4*cl + 0;
      rgb_t pix;
      pix.red = packed_val_lane_0;
      pix.green = packed_val_lane_0;
      pix.blue = packed_val_lane_0;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<64> packed;
      int c = 4*cl + 1;
      rgb_t pix;
      pix.red = packed_val_lane_1;
      pix.green = packed_val_lane_1;
      pix.blue = packed_val_lane_1;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<64> packed;
      int c = 4*cl + 2;
      rgb_t pix;
      pix.red = packed_val_lane_2;
      pix.green = packed_val_lane_2;
      pix.blue = packed_val_lane_2;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<64> packed;
      int c = 4*cl + 3;
      rgb_t pix;
      pix.red = packed_val_lane_3;
      pix.green = packed_val_lane_3;
      pix.blue = packed_val_lane_3;
      output.set_pixel(c, r, pix);
      }
    }
  }
  output.save_image("./images/jacdyn_1_opt_bmp_out.bmp");
}