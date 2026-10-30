/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_021403e8[];
extern u8 data_ov000_02140bb4[];
extern u8 data_ov000_02188fd0[];
extern u8 data_ov000_021894c0[];

u32 data_ov000_021893e0[14] = {(u32) &data_ov000_02188fd0,
                               0x00000800,
                               (u32) &data_ov000_021894c0,
                               0x00000000,
                               (u32) &data_ov000_021403e8,
                               0x00000000,
                               0x00000000,
                               0x00001000,
                               0x00001000,
                               0x00001000,
                               0x00000000,
                               0x00000000,
                               0x00000000,
                               (u32) &data_ov000_02140bb4};
