/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020d3dd0[];
extern u8 data_020d3dd4[];
extern u8 data_020d3dd8[];
extern u8 data_020d3ddc[];
extern u8 data_020d3de0[];
extern u8 data_020d3de4[];

u32 data_020d3de8[1] = {0x00000001};
u32 data_020d3dec[7] = {(u32) &data_020d3de0,
                        (u32) &data_020d3ddc,
                        (u32) &data_020d3dd0,
                        (u32) &data_020d3dd4,
                        (u32) &data_020d3dd8,
                        (u32) &data_020d3de4,
                        0x00000000};
