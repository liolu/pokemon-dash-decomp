/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020d0890[];
extern u8 data_020d38e8[];
extern u8 func_02066a2c[];
extern u8 func_0208f2d4[];
extern u8 func_0208f310[];
extern u8 func_0208f384[];
extern u8 func_0208f420[];
extern u8 func_0208f42c[];
extern u8 func_0208f434[];
extern u8 func_0208f530[];
extern u8 func_0208f6d0[];
extern u8 func_0208f760[];

u32 data_020d439c[2]  = {(u32) &func_0208f310, (u32) &func_0208f2d4};
u32 data_020d43a4[8]  = {0x4C433132, 0x6564616F, 0x6D655464, 0x74616C70,
                         0x646F4D65, 0x00656C75, 0x00000000, (u32) &data_020d0890};
u32 data_020d43c4[10] = {(u32) &func_0208f760, (u32) &func_0208f6d0, (u32) &func_0208f530, (u32) &func_02066a2c,
                         (u32) &func_0208f434, (u32) &func_0208f42c, (u32) &func_0208f420, (u32) &func_0208f384,
                         0x00000000,           (u32) &data_020d38e8};
