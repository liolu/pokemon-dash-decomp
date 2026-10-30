/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_02115acc[];
extern u8 data_ov000_02116c34[];

const u32 data_ov000_021179bc[13] = {0x00000000,
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
                                     (u32) &data_ov000_02116c34,
                                     (u32) &data_ov000_02115acc};
