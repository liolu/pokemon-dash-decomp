/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020cd2cc[];
extern u8 data_020cd670[];
extern u8 data_020cd67c[];
extern u8 data_020d4d10[];
extern u8 func_02003b24[];
extern u8 func_02003b40[];
extern u8 func_0200ca84[];
extern u8 func_020189e0[];
extern u8 func_02020c7c[];
extern u8 func_02020f38[];
extern u8 func_02020f50[];
extern u8 func_02020f98[];
extern u8 func_020212bc[];

u32 data_020cd688[3]  = {(u32) &data_020d4d10, (u32) &data_020cd670, (u32) &data_020cd2cc};
u32 data_020cd694[6]  = {0x52433131, 0x73727061, 0x67726142, 0x00000065, 0x00000000, (u32) &data_020cd67c};
u32 data_020cd6ac[11] = {(u32) &func_02020c7c, (u32) &func_020189e0, (u32) &func_0200ca84, (u32) &func_02003b24,
                         (u32) &func_02003b40, (u32) &func_02020f50, (u32) &func_02020f98, (u32) &func_02020f38,
                         (u32) &func_020212bc, 0x00000000,           (u32) &data_020cd2cc};
