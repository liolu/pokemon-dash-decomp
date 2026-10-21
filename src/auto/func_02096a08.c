#include "m2c.h"

extern void *data_020d7e6c;

void func_02096a08(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_020d7e6c, s32 *, 0x7C) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
