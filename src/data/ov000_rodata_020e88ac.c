/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_020e6618[];
extern u8 data_ov000_020e77a8[];

const u32 data_ov000_020e88ac[13] = {0x00000000,
                                     0x00000000,
                                     0x00000000,
                                     0x00001000,
                                     0x00001000,
                                     0x00001000,
                                     0x00000000,
                                     0x00000000,
                                     0x00000000,
                                     0x00000000,
                                     0x00000000,
                                     (u32) &data_ov000_020e77a8,
                                     (u32) &data_ov000_020e6618};
