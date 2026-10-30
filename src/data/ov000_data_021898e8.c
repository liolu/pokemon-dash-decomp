/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_02141334[];
extern u8 data_ov000_02189078[];
extern u8 data_ov000_02189920[];

u32 data_ov000_021898e8[14] = {(u32) &data_ov000_02189078,
                               0x00000800,
                               (u32) &data_ov000_02189920,
                               0x00000000,
                               0x00000000,
                               0x80000000,
                               0x000020DE,
                               0x00001000,
                               0x00001000,
                               0x00001000,
                               0x00001A41,
                               0xFFFFD738,
                               0x00000000,
                               (u32) &data_ov000_02141334};
