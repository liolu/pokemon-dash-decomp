/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_0215d308[];
extern u8 data_ov000_0215d370[];
extern u8 data_ov000_0217597c[];
extern u8 data_ov000_0218a0f4[];

const u32 data_ov000_0215d314[4]  = {0x00000000, 0x00B40200, (u32) &data_ov000_0215d370, 0x00000000};
const u32 data_ov000_0215d324[5]  = {(u32) &data_ov000_0217597c, 0x1F1F1F1F, 0x00001F1F, 0x00000000, 0x0000001F};
const u32 data_ov000_0215d338[14] = {(u32) &data_ov000_0218a0f4,
                                     0x00000800,
                                     0x00000000,
                                     0x00000000,
                                     (u32) &data_ov000_0215d308,
                                     0x00000000,
                                     0x00000000,
                                     0x000014CC,
                                     0x00001000,
                                     0x000014CC,
                                     0x00000000,
                                     0xFFFFC51F,
                                     0x000024CC,
                                     0x00000000};
