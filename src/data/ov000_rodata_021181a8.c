/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_02115bdc[];
extern u8 data_ov000_021171d4[];

const u32 data_ov000_021181a8[13] = {0x00000000,
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
                                     (u32) &data_ov000_021171d4,
                                     (u32) &data_ov000_02115bdc};
