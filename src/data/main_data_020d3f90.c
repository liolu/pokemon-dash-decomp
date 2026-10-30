/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020d3fb4[];
extern u8 data_020d3fc8[];
extern u8 data_020d4d10[];
extern u8 data_020d4d20[];

#pragma explicit_zero_data on
u32 data_020d3f90[1] = {0};
u32 data_020d3f94[2] = {(u32) &data_020d4d20, (u32) &data_020d3fb4};
u32 data_020d3f9c[5] = {(u32) &data_020d4d10, (u32) &data_020d3fc8, (u32) &data_020d3f94, 0x00000000, (u32) &data_020d3f9c};
