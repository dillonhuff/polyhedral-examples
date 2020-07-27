#pragma once
#include "prog.h"

prog conv_multi();
prog strided_conv();
prog accumulation();
prog unsharp();
prog cascade();
prog gaussian();
prog harris();
prog pointwise();
prog brighten_blur();
prog halide_harris();
prog unet_conv_3_3();
prog resnet();
prog mini_conv_halide_fixed();
prog camera_pipeline();

