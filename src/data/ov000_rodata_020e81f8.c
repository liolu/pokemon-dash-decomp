/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_020e67a8[];
extern u8 data_ov000_020e74b4[];

const u32 data_ov000_020e81f8[13] = {0x00000000,
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
                                     (u32) &data_ov000_020e74b4,
                                     (u32) &data_ov000_020e67a8};
