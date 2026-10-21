#include "m2c.h"

void func_0200c8c8(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x18) << 7;
    *arg2 = M2C_FIELD(arg0, s32 *, 0x20) << 7;
}
