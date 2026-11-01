#include "m2c.h"

extern u8 data_020d6760;

void func_02082b14(void *arg0, s32 arg1) {
    u8 *base;
    u16 *h;

    base = (u8 *) &data_020d6760 + (M2C_FIELD(arg0, s32 *, 4) << 10);
    base = base + M2C_FIELD(arg0, s32 *, 8) * 8;
    h    = (u16 *) (base + 4);
    *h   = (u16) ((*h & ~0xC00) | (arg1 << 10));
}
