/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_020e64e8[];
extern u8 data_ov000_020e7c04[];

const u32 data_ov000_020e8d24[13] = {0x00000000,
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
                                     (u32) &data_ov000_020e7c04,
                                     (u32) &data_ov000_020e64e8};
