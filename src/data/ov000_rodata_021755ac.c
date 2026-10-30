/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_021754d0[];
extern u8 data_ov000_0217550c[];
extern u8 data_ov000_0217559c[];
extern u8 data_ov000_021755d0[];

const u32 data_ov000_021755ac[4] = {(u32) &data_ov000_0217559c, 0x00000000, (u32) &data_ov000_021754d0, 0x00000000};
const u32 data_ov000_021755bc[5] = {(u32) &data_ov000_021755d0, (u32) &data_ov000_0217550c, 0x0000000D, 0x00000000,
                                    0x00000006};
