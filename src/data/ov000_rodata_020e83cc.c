/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_020e63a8[];
extern u8 data_ov000_020e7be0[];

const u32 data_ov000_020e83cc[13] = {0x00000000,
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
                                     (u32) &data_ov000_020e7be0,
                                     (u32) &data_ov000_020e63a8};
