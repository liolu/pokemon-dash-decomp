/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_020e6668[];
extern u8 data_ov000_020e7a0c[];

const u32 data_ov000_020e8ae8[13] = {0x00000000,
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
                                     (u32) &data_ov000_020e7a0c,
                                     (u32) &data_ov000_020e6668};
