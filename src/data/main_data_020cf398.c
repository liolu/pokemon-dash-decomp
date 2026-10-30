/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020cf384[];
extern u8 data_020cf38c[];
extern u8 data_020d4d10[];
extern u8 func_02003b24[];
extern u8 func_02003b40[];
extern u8 func_0200c8e4[];
extern u8 func_0200ca84[];
extern u8 func_02011a38[];
extern u8 func_02030e7c[];
extern u8 func_02031770[];
extern u8 func_02031cac[];
extern u8 func_02040284[];
extern u8 func_0204583c[];

u32 data_020cf398[3]  = {(u32) &data_020d4d10, (u32) &data_020cf384, (u32) &data_020cf38c};
u32 data_020cf3a4[6]  = {0x52433031, 0x6C617669, 0x65736142, 0x00000000, 0x00000000, (u32) &data_020cf38c};
u32 data_020cf3bc[18] = {(u32) &func_02040284, (u32) &func_02011a38, (u32) &func_0200ca84, (u32) &func_02003b24,
                         (u32) &func_02003b40, (u32) &func_0200c8e4, (u32) &func_02031cac, (u32) &func_02031770,
                         (u32) &func_02030e7c, (u32) &func_0204583c, 0x00000000,           0x00000000,
                         0x00000000,           0x00000000,           0x00000000,           0x00000000,
                         0x00000000,           (u32) &data_020cf398};
