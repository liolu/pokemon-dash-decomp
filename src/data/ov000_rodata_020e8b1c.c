/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_020e6788[];
extern u8 data_ov000_020e7a30[];

const u32 data_ov000_020e8b1c[13] = {0x00000000,
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
                                     (u32) &data_ov000_020e7a30,
                                     (u32) &data_ov000_020e6788};
