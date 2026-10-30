/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_020e6328[];
extern u8 data_ov000_020e7c28[];

const u32 data_ov000_020e8d58[13] = {0x00000000,
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
                                     (u32) &data_ov000_020e7c28,
                                     (u32) &data_ov000_020e6328};
