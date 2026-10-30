/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_02171624[];
extern u8 data_ov000_021751cc[];
extern u8 data_ov000_021755ac[];

const u32 data_020c1f00[3] = {0x2829C000, 0x00000000, (u32) &data_ov000_02171624};
const u32 data_020c1f0c[6] = {0x28299000, 0x00000000, (u32) &data_ov000_021755ac,
                              0x28299001, 0x00000000, (u32) &data_ov000_021751cc};
