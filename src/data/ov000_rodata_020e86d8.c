/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_020e6778[];
extern u8 data_ov000_020e77cc[];

const u32 data_ov000_020e86d8[13] = {0x00000000,
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
                                     (u32) &data_ov000_020e77cc,
                                     (u32) &data_ov000_020e6778};
