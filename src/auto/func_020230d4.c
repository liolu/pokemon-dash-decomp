#include "m2c.h"

void func_020230d4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24)                       = 1;
    M2C_FIELD(arg0, s32 *, 0x38)                       = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x30)                       = 0;
}
