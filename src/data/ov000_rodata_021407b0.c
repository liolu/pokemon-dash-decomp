/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_02157ce0[];
extern u8 data_ov000_021893a8[];
extern u8 data_ov000_02189a00[];

const u32 data_ov000_021407b0[5] = {(u32) &data_ov000_02157ce0, 0x1F1F1F1F, 0x00001F1F, 0x00000000, 0x0000001F};
const u32 data_ov000_021407c4[6] = {
    (u32) &data_ov000_02189a00, 0x00000800, (u32) &data_ov000_021893a8, 0x00000800, 0x00000000, 0x00000000};
