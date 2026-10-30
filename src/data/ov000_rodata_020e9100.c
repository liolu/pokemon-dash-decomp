/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_020e6498[];
extern u8 data_ov000_020e7ef8[];

const u32 data_ov000_020e9100[13] = {0x00000000,
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
                                     (u32) &data_ov000_020e7ef8,
                                     (u32) &data_ov000_020e6498};
