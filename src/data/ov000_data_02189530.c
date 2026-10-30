/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_02140cd4[];
extern u8 data_ov000_02188fe8[];
extern u8 data_ov000_021895a0[];
extern u8 data_ov000_02189990[];

u32 data_ov000_02189530[14] = {(u32) &data_ov000_02188fe8,
                               0x00000800,
                               (u32) &data_ov000_021895a0,
                               (u32) &data_ov000_02189990,
                               0x00000000,
                               0x01024000,
                               0x0000C000,
                               0x00001000,
                               0x00001000,
                               0x00001000,
                               0x00000000,
                               0x00000000,
                               0x00000000,
                               (u32) &data_ov000_02140cd4};
