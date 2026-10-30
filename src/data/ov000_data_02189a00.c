/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_021414b4[];
extern u8 data_ov000_02188fcc[];
extern u8 data_ov000_02189258[];
extern u8 data_ov000_021894f8[];

u32 data_ov000_02189a00[14] = {(u32) &data_ov000_02188fcc,
                               0x00000800,
                               (u32) &data_ov000_02189258,
                               (u32) &data_ov000_021894f8,
                               0x00000000,
                               0x00000000,
                               0x00000000,
                               0x00001000,
                               0x00001000,
                               0x00001000,
                               0x00000000,
                               0x00005F12,
                               0x00000442,
                               (u32) &data_ov000_021414b4};
