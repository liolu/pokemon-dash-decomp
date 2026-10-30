/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_02115efc[];
extern u8 data_ov000_021170fc[];

const u32 data_ov000_02118070[13] = {0x00000000,
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
                                     (u32) &data_ov000_021170fc,
                                     (u32) &data_ov000_02115efc};
