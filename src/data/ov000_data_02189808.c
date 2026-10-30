/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_02141154[];
extern u8 data_ov000_02189028[];
extern u8 data_ov000_02189878[];

u32 data_ov000_02189808[14] = {(u32) &data_ov000_02189028,
                               0x00000800,
                               (u32) &data_ov000_02189878,
                               0x00000000,
                               0x00000000,
                               0x00000000,
                               0x00005370,
                               0x00001000,
                               0x00001000,
                               0x00001000,
                               0xFFFFE8A8,
                               0x00002EC8,
                               0x00000000,
                               (u32) &data_ov000_02141154};
