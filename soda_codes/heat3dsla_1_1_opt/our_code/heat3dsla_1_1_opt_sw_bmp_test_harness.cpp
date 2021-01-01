#include <algorithm>
#include <fstream>
#include <vector>
#include "heat3dsla_1_1_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<32> > in_cc_update_0_read_channel;
  HWStream<hw_uint<32> > heat3dsla_1_1_update_0_write_channel;
  // In lanes = 1
  for (int r = 0; r < 6; r++) {
    for (int cl = 0; cl < 34 / 1; cl++) {
      hw_uint<32> packed;
      {
      int c = 1*cl + 0;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_cc_update_0_read_channel.write(pix.red);
        in_cc_update_0_read_channel.write(pix.green);
        in_cc_update_0_read_channel.write(pix.blue);
      } else {
        in_cc_update_0_read_channel.write(0);
        in_cc_update_0_read_channel.write(0);
        in_cc_update_0_read_channel.write(0);
      }
      }
    }
  }
  heat3dsla_1_1_opt(in_cc_update_0_read_channel, heat3dsla_1_1_update_0_write_channel);
  bitmap_image output(32, 4);
  for (int r = 0; r < 4; r++) {
    for (int cl = 0; cl < 32 / 1; cl++) {
      int c = 1*cl + 0;
      rgb_t pix;
      auto red = heat3dsla_1_1_update_0_write_channel.read();
      auto g = heat3dsla_1_1_update_0_write_channel.read();
      auto b = heat3dsla_1_1_update_0_write_channel.read();
      pix.red = red;
      pix.green = g;
      pix.blue = b;
      output.set_pixel(c, r, pix);
    }
  }
  output.save_image("./images/heat3dsla_1_1_opt_bmp_out.bmp");
}