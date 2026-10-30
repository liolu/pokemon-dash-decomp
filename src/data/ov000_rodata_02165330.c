/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_02165378[];
extern u8 data_ov000_021653e4[];
extern u8 data_ov000_02165448[];
extern u8 data_ov000_0218a478[];

const u32 data_ov000_02165330[4] = {0x00000000, 0x00640004, (u32) &data_ov000_021653e4, 0x00000000};
const u32 data_ov000_02165340[5] = {(u32) &data_ov000_02165378, 0x1F1F1F1F, 0x1F1F1F1F, 0x1F1F1F1F, 0x0000001F};
const u32 data_ov000_02165354[9] = {
    (u32) &data_ov000_02165448, 0x00001000, 0x00400040, 0x00000006, 0x00000000, 0x00000000, 0x00000000,
    (u32) &data_ov000_0218a478, 0x00000000};
