/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_020e62c8[];
extern u8 data_ov000_020e73dc[];

const u32 data_ov000_020e815c[13] = {0x00000000,
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
                                     (u32) &data_ov000_020e73dc,
                                     (u32) &data_ov000_020e62c8};
