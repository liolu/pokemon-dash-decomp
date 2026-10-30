/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_020e6338[];
extern u8 data_ov000_020e76ac[];

const u32 data_ov000_020e8504[13] = {0x00000000,
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
                                     (u32) &data_ov000_020e76ac,
                                     (u32) &data_ov000_020e6338};
