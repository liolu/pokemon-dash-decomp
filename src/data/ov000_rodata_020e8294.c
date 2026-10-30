/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_020e6428[];
extern u8 data_ov000_020e74fc[];

const u32 data_ov000_020e8294[13] = {0x00000000,
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
                                     (u32) &data_ov000_020e74fc,
                                     (u32) &data_ov000_020e6428};
