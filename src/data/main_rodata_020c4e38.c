/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_020948ac[];
extern u8 func_02094a48[];
extern u8 func_02094bd4[];
extern u8 func_02095178[];

const u32 data_020c4e38[6]  = {0xFFBD000A, 0x000A00C3, 0x00C3FFBD, 0xFFBD07D0, 0x07D000C3, 0x00C3FFBD};
const u32 data_020c4e50[11] = {(u32) &func_020948ac,
                               (u32) &func_02094bd4,
                               (u32) &func_02094a48,
                               (u32) &func_02095178,
                               (u32) &data_020c4e38,
                               0x00020000,
                               0x00001000,
                               0x0020000C,
                               0x00000000,
                               0x00010003,
                               0x00130062};
