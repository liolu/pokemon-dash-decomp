#include "m2c.h"

M2C_UNK func_020853c8(s32);                         /* extern */

void func_020230f4(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x2C) = arg2;
    func_020853c8(M2C_FIELD(arg0, s32 *, 4));
}
