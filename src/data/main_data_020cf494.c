/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020cd1ac[];
extern u8 data_020cd1b4[];
extern u8 data_020cf48c[];
extern u8 data_020d4d00[];

u32 data_020cf494[10] = {(u32) &data_020d4d00, (u32) &data_020cf48c, 0x00000000, 0x00000002, (u32) &data_020cd1b4,
                         0x00000002,           (u32) &data_020cd1ac, 0x00002402, 0x00000000, (u32) &data_020cf494};
