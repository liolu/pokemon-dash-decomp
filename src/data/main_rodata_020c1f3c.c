/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_0215d4e4[];
extern u8 data_ov000_021751cc[];
extern u8 data_ov000_021755ac[];

const u32 data_020c1f3c[6] = {0x2829B000, 0x00000000, (u32) &data_ov000_021755ac,
                              0x2829B001, 0x00000000, (u32) &data_ov000_021751cc};
const u32 data_020c1f54[7] = {0x00000001, 0x00000294, (u32) &data_ov000_0215d4e4, 0x00002999, 0x00000000,
                              0x00000000, 0x00000000};
