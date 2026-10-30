/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_020e66a8[];
extern u8 data_ov000_020e7c4c[];

const u32 data_ov000_020e8e28[13] = {0x00000000,
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
                                     (u32) &data_ov000_020e7c4c,
                                     (u32) &data_ov000_020e66a8};
