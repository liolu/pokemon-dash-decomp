/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_02140af4[];
extern u8 data_ov000_02189018[];
extern u8 data_ov000_02189300[];
extern u8 data_ov000_02189680[];

u32 data_ov000_021894f8[14] = {(u32) &data_ov000_02189018,
                               0x00000800,
                               (u32) &data_ov000_02189680,
                               (u32) &data_ov000_02189300,
                               0x00000000,
                               0xED8653BC,
                               0x0000B6C5,
                               0x00001000,
                               0x00001000,
                               0x00001000,
                               0x00002AC4,
                               0x00001800,
                               0x000019EB,
                               (u32) &data_ov000_02140af4};
