/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020cce8c[];
extern u8 data_020d42a0[];
extern u8 data_020d42ac[];
extern u8 data_020d4d10[];

u32 data_020d42b8[3] = {(u32) &data_020d4d10, (u32) &data_020d42ac, (u32) &data_020cce8c};
u32 data_020d42c4[5] = {(u32) &data_020d4d10, (u32) &data_020d42a0, (u32) &data_020d42b8, 0x00000000, (u32) &data_020d42c4};
