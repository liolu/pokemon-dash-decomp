/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_02140d94[];
extern u8 data_ov000_021890d0[];
extern u8 data_ov000_021896f0[];
extern u8 data_ov000_021897d0[];

u32 data_ov000_021895d8[14] = {(u32) &data_ov000_021890d0,
                               0x00000800,
                               (u32) &data_ov000_021896f0,
                               (u32) &data_ov000_021897d0,
                               0x00000000,
                               0x06C16B06,
                               0x0000C6DE,
                               0x00001000,
                               0x00001000,
                               0x00001000,
                               0xFFFFCECD,
                               0x0000456C,
                               0x00002220,
                               (u32) &data_ov000_02140d94};
