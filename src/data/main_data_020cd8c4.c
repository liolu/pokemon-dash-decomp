/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020cd02c[];
extern u8 func_02003b24[];
extern u8 func_02003b40[];
extern u8 func_0200c8e4[];
extern u8 func_0200ca84[];
extern u8 func_0202e844[];
extern u8 func_02030e7c[];
extern u8 func_02031770[];
extern u8 func_02031cac[];
extern u8 func_0203286c[];
extern u8 func_02032b88[];

u32 data_020cd8c4[1]  = {0x00000016};
u32 data_020cd8c8[3]  = {0x00000034, 0x00000000, (u32) &data_020cd02c};
u32 data_020cd8d4[11] = {(u32) &func_02032b88,
                         (u32) &func_0203286c,
                         (u32) &func_0200ca84,
                         (u32) &func_02003b24,
                         (u32) &func_02003b40,
                         (u32) &func_0200c8e4,
                         (u32) &func_02031cac,
                         (u32) &func_02031770,
                         (u32) &func_02030e7c,
                         (u32) &func_0202e844,
                         0x00000000};
