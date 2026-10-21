#include "m2c.h"

void func_020230b8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24)                       = 4;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x30)                       = 0;
}
