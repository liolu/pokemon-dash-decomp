#include "m2c.h"

extern u8 data_020d6760[];

void func_02082e9c(s32 *arg0, s32 *arg1) {
    u8 *p;

    p                   = data_020d6760 + (arg0[0] << 10) + (arg0[1] << 5);
    *(s16 *) (p + 6)    = (s16) (arg1[0] >> 4);
    *(s16 *) (p + 0xE)  = (s16) (arg1[1] >> 4);
    *(s16 *) (p + 0x16) = (s16) (arg1[2] >> 4);
    *(s16 *) (p + 0x1E) = (s16) (arg1[3] >> 4);
}
