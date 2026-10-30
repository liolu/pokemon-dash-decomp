/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_020e7f88[];
extern u8 data_ov000_020e7fbc[];
extern u8 data_ov000_020e808c[];
extern u8 data_ov000_020e80c0[];
extern u8 data_ov000_020e8128[];
extern u8 data_ov000_020e8190[];
extern u8 data_ov000_020e8260[];
extern u8 data_ov000_020e8294[];
extern u8 data_ov000_020e82c8[];
extern u8 data_ov000_020e8330[];
extern u8 data_ov000_020e8400[];
extern u8 data_ov000_020e8434[];
extern u8 data_ov000_020e84d0[];
extern u8 data_ov000_020e856c[];
extern u8 data_ov000_020e85d4[];
extern u8 data_ov000_020e8670[];
extern u8 data_ov000_020e87a8[];
extern u8 data_ov000_020e8844[];
extern u8 data_ov000_020e8914[];
extern u8 data_ov000_020e89b0[];
extern u8 data_ov000_020e89e4[];
extern u8 data_ov000_020e8a18[];
extern u8 data_ov000_020e8a80[];
extern u8 data_ov000_020e8ab4[];
extern u8 data_ov000_020e8ae8[];
extern u8 data_ov000_020e8b1c[];
extern u8 data_ov000_020e8b84[];
extern u8 data_ov000_020e8bb8[];
extern u8 data_ov000_020e8bec[];
extern u8 data_ov000_020e8c20[];
extern u8 data_ov000_020e8c54[];
extern u8 data_ov000_020e8c88[];
extern u8 data_ov000_020e8cbc[];
extern u8 data_ov000_020e8cf0[];
extern u8 data_ov000_020e8d24[];
extern u8 data_ov000_020e8d58[];
extern u8 data_ov000_020e8d8c[];
extern u8 data_ov000_020e8df4[];
extern u8 data_ov000_020e8e5c[];
extern u8 data_ov000_020e8ec4[];
extern u8 data_ov000_020e8f60[];
extern u8 data_ov000_020e9098[];
extern u8 data_ov000_020e90cc[];
extern u8 data_ov000_020e9168[];

const u32 data_ov000_020dc9a0[1]   = {0x300190D3};
const u32 data_ov000_020dc9a4[153] = {
    0x20019002, (u32) &data_ov000_020e89b0, 0x300190D4, 0x20019002, (u32) &data_ov000_020e82c8, 0x300190D5,
    0x20019002, (u32) &data_ov000_020e8a18, 0x300190D6, 0x20019002, (u32) &data_ov000_020e8ab4, 0x300190D7,
    0x20019002, (u32) &data_ov000_020e8ae8, 0x300190D8, 0x20019002, (u32) &data_ov000_020e82c8, 0x300190D9,
    0x20019002, (u32) &data_ov000_020e8b84, 0x300190DA, 0x20019002, (u32) &data_ov000_020e8bec, 0x300190DB,
    0x20019002, (u32) &data_ov000_020e8c20, 0x300190DC, 0x20019002, (u32) &data_ov000_020e8c88, 0x300190DD,
    0x20019002, (u32) &data_ov000_020e8cbc, 0x300190DE, 0x20019002, (u32) &data_ov000_020e8c20, 0x300190DF,
    0x20019002, (u32) &data_ov000_020e8d24, 0x300190E0, 0x20019002, (u32) &data_ov000_020e8d8c, 0x300190E1,
    0x20019002, (u32) &data_ov000_020e8df4, 0x300190E2, 0x20019002, (u32) &data_ov000_020e8e5c, 0x300190E3,
    0x20019002, (u32) &data_ov000_020e8ec4, 0x300190E4, 0x20019002, (u32) &data_ov000_020e8f60, 0x300190E5,
    0x20019002, (u32) &data_ov000_020e82c8, 0x300190E6, 0x20019002, (u32) &data_ov000_020e90cc, 0x300190E7,
    0x20019002, (u32) &data_ov000_020e9168, 0x300190E8, 0x20019002, (u32) &data_ov000_020e7fbc, 0x300190E9,
    0x20019002, (u32) &data_ov000_020e82c8, 0x300190EA, 0x20019002, (u32) &data_ov000_020e80c0, 0x300190EB,
    0x20019002, (u32) &data_ov000_020e8128, 0x300190EC, 0x20019002, (u32) &data_ov000_020e8190, 0x300190ED,
    0x20019002, (u32) &data_ov000_020e82c8, 0x300190EE, 0x20019002, (u32) &data_ov000_020e8330, 0x300190EF,
    0x20019002, (u32) &data_ov000_020e8434, 0x300190F0, 0x20019002, (u32) &data_ov000_020e84d0, 0x300190F1,
    0x20019002, (u32) &data_ov000_020e85d4, 0x300190F2, 0x20019002, (u32) &data_ov000_020e8670, 0x300190F3,
    0x20019002, (u32) &data_ov000_020e87a8, 0x300190F4, 0x20019002, (u32) &data_ov000_020e8844, 0x300190F5,
    0x20019002, (u32) &data_ov000_020e8914, 0x300190F6, 0x20019002, (u32) &data_ov000_020e8294, 0x300190F7,
    0x20019002, (u32) &data_ov000_020e89e4, 0x300190F8, 0x20019002, (u32) &data_ov000_020e8a80, 0x300190F9,
    0x20019002, (u32) &data_ov000_020e8b1c, 0x300190FA, 0x20019002, (u32) &data_ov000_020e8bb8, 0x300190FB,
    0x20019002, (u32) &data_ov000_020e8c54, 0x300190FC, 0x20019002, (u32) &data_ov000_020e8cf0, 0x300190FD,
    0x20019002, (u32) &data_ov000_020e8d58, 0x300190FE, 0x20019002, (u32) &data_ov000_020e89e4, 0x300190FF,
    0x20019002, (u32) &data_ov000_020e8bb8, 0x30019100, 0x20019002, (u32) &data_ov000_020e9098, 0x30019101,
    0x20019002, (u32) &data_ov000_020e7f88, 0x30019102, 0x20019002, (u32) &data_ov000_020e808c, 0x30019103,
    0x20019002, (u32) &data_ov000_020e856c, 0x30019104, 0x20019002, (u32) &data_ov000_020e8260, 0x30019105,
    0x20019002, (u32) &data_ov000_020e8400, 0x30019106};
