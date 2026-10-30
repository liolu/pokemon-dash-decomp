/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_021413f4[];
extern u8 data_ov000_02188ff0[];
extern u8 data_ov000_02189418[];
extern u8 data_ov000_02189a00[];

u32 data_ov000_02189990[14] = {(u32) &data_ov000_02188ff0,
                               0x00000800,
                               (u32) &data_ov000_02189a00,
                               (u32) &data_ov000_02189418,
                               0x00000000,
                               0x00000251,
                               0x00000000,
                               0x00001000,
                               0x00001000,
                               0x00001000,
                               0x00000000,
                               0x00000000,
                               0x00000000,
                               (u32) &data_ov000_021413f4};
