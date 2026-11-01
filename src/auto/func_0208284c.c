#include "m2c.h"

extern u8 data_020d6760;

void func_0208284c(void *arg0, s32 arg1) {
    s32 idx;
    u8 *p;

    idx                    = M2C_FIELD(arg0, s32 *, 8);
    p                      = (u8 *) &data_020d6760 + (M2C_FIELD(arg0, u32 *, 4) << 10);
    *(u32 *) (p + idx * 8) = (*(u32 *) (p + idx * 8) & ~0x2000) | (arg1 << 0xD);
}
