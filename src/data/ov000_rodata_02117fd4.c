/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_02115abc[];
extern u8 data_ov000_0211688c[];

const u32 data_ov000_02117fd4[13] = {0x00000000,
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
                                     (u32) &data_ov000_0211688c,
                                     (u32) &data_ov000_02115abc};
