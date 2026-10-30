/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_020e65d8[];
extern u8 data_ov000_020e797c[];

const u32 data_ov000_020e8a18[13] = {0x00000000,
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
                                     (u32) &data_ov000_020e797c,
                                     (u32) &data_ov000_020e65d8};
