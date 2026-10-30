/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_02141574[];
extern u8 data_ov000_02189048[];
extern u8 data_ov000_02189488[];
extern u8 data_ov000_02189728[];

u32 data_ov000_02189300[14] = {(u32) &data_ov000_02189048,
                               0x00000800,
                               (u32) &data_ov000_02189728,
                               (u32) &data_ov000_02189488,
                               0x00000000,
                               0xECEE2E57,
                               0x0000C863,
                               0x00001000,
                               0x00001000,
                               0x00001000,
                               0xFFFFD53C,
                               0x00001800,
                               0x000019EB,
                               (u32) &data_ov000_02141574};
