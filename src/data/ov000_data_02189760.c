/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_02140fd4[];
extern u8 data_ov000_02189058[];
extern u8 data_ov000_02189798[];
extern u8 data_ov000_021898e8[];

u32 data_ov000_02189760[14] = {(u32) &data_ov000_02189058,
                               0x00000800,
                               (u32) &data_ov000_02189798,
                               (u32) &data_ov000_021898e8,
                               0x00000000,
                               0x80000000,
                               0x0000D405,
                               0x00001000,
                               0x00001000,
                               0x00001000,
                               0x000009EC,
                               0xFFFFFDAF,
                               0x0000268F,
                               (u32) &data_ov000_02140fd4};
