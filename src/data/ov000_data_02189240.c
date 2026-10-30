/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_021405f4[];
extern u8 data_ov000_021406a4[];
extern u8 data_ov000_021406b4[];
extern u8 data_ov000_0214095c[];
extern u8 data_ov000_02140974[];
extern u8 data_ov000_02141514[];
extern u8 data_ov000_021890f0[];
extern u8 data_ov000_021892c8[];

u32 data_ov000_02189240[6]  = {(u32) &data_ov000_0214095c, (u32) &data_ov000_021405f4, (u32) &data_ov000_021406a4,
                               (u32) &data_ov000_021406b4, (u32) &data_ov000_02140974, 0x00000000};
u32 data_ov000_02189258[14] = {(u32) &data_ov000_021890f0,
                               0x00000800,
                               (u32) &data_ov000_021892c8,
                               0x00000000,
                               0x00000000,
                               0x00000000,
                               0x00000000,
                               0x00001000,
                               0x00001000,
                               0x00001000,
                               0x00000000,
                               0xFFFFA58E,
                               0xFFFFF9A6,
                               (u32) &data_ov000_02141514};
