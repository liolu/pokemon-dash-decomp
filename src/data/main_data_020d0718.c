/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020d0704[];
extern u8 data_020d075c[];
extern u8 data_020d4d20[];

u32 data_020d0718[2] = {(u32) &data_020d4d20, (u32) &data_020d0704};
u32 data_020d0720[7] = {0x756F732F, 0x645F646E, 0x2E617461, 0x74616473, 0x00000000, 0x00000000, (u32) &data_020d075c};
