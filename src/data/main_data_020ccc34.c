/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020cc534[];
extern u8 data_020cc538[];
extern u8 data_020cc540[];
extern u8 data_020cc548[];
extern u8 data_020cc550[];
extern u8 data_020cc558[];
extern u8 data_020cc564[];
extern u8 data_020cc570[];
extern u8 data_020cc57c[];
extern u8 data_020cc588[];
extern u8 data_020cc598[];
extern u8 data_020cc5a8[];
extern u8 data_020cc5b8[];
extern u8 data_020cc5c8[];
extern u8 data_020cc5d8[];
extern u8 data_020cc5ec[];
extern u8 data_020cc604[];
extern u8 data_020cc61c[];
extern u8 data_020cc634[];
extern u8 data_020cc64c[];
extern u8 data_020cc664[];
extern u8 data_020cc680[];
extern u8 data_020cc6a0[];
extern u8 data_020cc6c0[];
extern u8 data_020cc6e0[];
extern u8 data_020cc700[];
extern u8 data_020cc720[];
extern u8 data_020cc740[];
extern u8 data_020cc764[];
extern u8 data_020cc788[];
extern u8 data_020cc7ac[];
extern u8 data_020cc7d0[];
extern u8 data_020cc7f4[];
extern u8 data_020cc81c[];
extern u8 data_020cc844[];
extern u8 data_020cc874[];
extern u8 data_020cc8a4[];
extern u8 data_020cc8d4[];
extern u8 data_020cc908[];
extern u8 data_020cc93c[];
extern u8 data_020cc970[];
extern u8 data_020cc9a4[];
extern u8 data_020cc9dc[];
extern u8 data_020cca18[];
extern u8 data_020cca58[];
extern u8 data_020cca9c[];
extern u8 data_020ccae0[];
extern u8 data_020ccb2c[];
extern u8 data_020ccb7c[];
extern u8 data_020ccbd0[];

u32 data_020ccc34[25] = {0x83414247, 0x8350837C, 0x83678362, 0x83938382, 0x815E8358, 0x5683205B, 0x5B818A83,
                         0xF0825983, 0x82B3820A, 0x82C482B5, 0x82AD82A8, 0xAB8220C6, 0xBE82DD82, 0xCC82AF82,
                         0x837C830A, 0x83828350, 0x834A8393, 0x82768362, 0xC2820AF0, 0xE982AD82, 0xC682B182,
                         0x8220AA82, 0x82AB82C5, 0x21BC82E9, 0x00000000};
u32 data_020ccc98[29] = {0x4C834783, 0x70835883, 0x67835B81, 0x89834F83, 0x76839383, 0xC5828A83, 0x820ACD82, 0x20E882E6,
                         0xB282C482, 0xA282ED82, 0x83898320, 0x836F8343, 0x82BD828B, 0x20AA82BF, 0x7E834C83, 0x820AF082,
                         0x82C182DC, 0x82A282C4, 0x21B782DC, 0x82AA8220, 0x82CE82F1, 0x0AC482C1, 0x83836083, 0x73839383,
                         0x93834983, 0x8220F082, 0x82B482DF, 0x21A482BB, 0x00000000};
u32 data_020ccd0c[30] = {0xBD82DC82, 0x82B38220, 0x82B582A2, 0xAB8220E5, 0xE382AB82, 0xC982A482, 0xC182CC82, 0x830AC482,
                         0x835B8152, 0x20F08258, 0xC182B682, 0xE882AD82, 0x82C88220, 0x82DF82AA, 0x82A082BD, 0xB7820AC6,
                         0xC882AB82, 0xB582CE82, 0xA982E582, 0x8320E782, 0x8343835F, 0x82B58275, 0x58830AC4, 0x5B815E83,
                         0xB7826783, 0xB182E982, 0xAA82C682, 0x82C58220, 0x82DC82AB, 0x000000B7};
u32 data_020ccd84[55] = {
    (u32) &data_020cc9a4, (u32) &data_020cc5b8, (u32) &data_020cca58, (u32) &data_020ccb7c, (u32) &data_020ccd0c,
    (u32) &data_020ccc98, (u32) &data_020cc9dc, (u32) &data_020cc970, (u32) &data_020cc680, (u32) &data_020cc788,
    (u32) &data_020cc598, (u32) &data_020ccbd0, (u32) &data_020ccc34, (u32) &data_020ccb2c, (u32) &data_020cc93c,
    (u32) &data_020cc764, (u32) &data_020cc7ac, (u32) &data_020ccae0, (u32) &data_020cc664, (u32) &data_020cc720,
    (u32) &data_020cca9c, (u32) &data_020cc81c, (u32) &data_020cc7d0, (u32) &data_020cc5ec, (u32) &data_020cca18,
    (u32) &data_020cc7f4, (u32) &data_020cc64c, (u32) &data_020cc8a4, (u32) &data_020cc740, (u32) &data_020cc844,
    (u32) &data_020cc700, (u32) &data_020cc61c, (u32) &data_020cc8d4, (u32) &data_020cc874, (u32) &data_020cc908,
    (u32) &data_020cc6c0, (u32) &data_020cc6e0, (u32) &data_020cc604, (u32) &data_020cc570, (u32) &data_020cc564,
    (u32) &data_020cc5a8, (u32) &data_020cc5c8, (u32) &data_020cc558, (u32) &data_020cc6a0, (u32) &data_020cc57c,
    (u32) &data_020cc634, (u32) &data_020cc534, (u32) &data_020cc540, (u32) &data_020cc538, (u32) &data_020cc588,
    (u32) &data_020cc5d8, (u32) &data_020cc680, (u32) &data_020cc788, (u32) &data_020cc548, (u32) &data_020cc550};
