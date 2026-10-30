/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020cf6fc[];
extern u8 data_020cf70c[];
extern u8 data_020cf730[];

const u32 data_020bf898[5]  = {(u32) &data_020cf70c, 0x00004000, (u32) &data_020cf6fc, 0x00000000, 0x00000100};
const u32 data_020bf8ac[11] = {(u32) &data_020cf730, 0x00000024, 0x00001000, 0xC0000000, 0xFFFFFFE8, 0x00000018,
                               0x00000008,           0x00000038, 0x00000040, 0x00000040, 0x00000000};
