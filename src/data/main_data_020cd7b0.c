/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020cd1e4[];
extern u8 func_0200db30[];
extern u8 func_02024728[];
extern u8 func_02024c58[];
extern u8 func_020255a8[];
extern u8 func_020275b0[];
extern u8 func_0202847c[];

u32 data_020cd7b0[1] = {0x00000003};
u32 data_020cd7b4[3] = {0x00000003, 0x00000000, (u32) &data_020cd1e4};
u32 data_020cd7c0[8] = {(u32) &func_0202847c, (u32) &func_020275b0, (u32) &func_0200db30, (u32) &func_020255a8,
                        (u32) &func_02024c58, (u32) &func_02024728, 0xFFFFFFDC,           (u32) &data_020cd1e4};
