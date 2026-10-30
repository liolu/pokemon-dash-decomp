/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_02165320[];
extern u8 data_ov000_02165330[];
extern u8 data_ov000_02165340[];
extern u8 data_ov000_0218a460[];

const u32 data_ov000_02165304[3] = {0x00000000, (u32) &data_ov000_02165340, (u32) &data_ov000_02165330};
const u32 data_ov000_02165310[4] = {(u32) &data_ov000_02165320, 0x00000010, 0x00000000, (u32) &data_ov000_0218a460};
