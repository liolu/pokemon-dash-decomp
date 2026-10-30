/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_020e6468[];
extern u8 data_ov000_020e746c[];

const u32 data_ov000_020e80f4[13] = {0x00000000,
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
                                     (u32) &data_ov000_020e746c,
                                     (u32) &data_ov000_020e6468};
