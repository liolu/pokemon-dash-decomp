#include "m2c.h"

void func_0200bc44(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((M2C_FIELD(arg0, s32 *, 0xC) & ~0xC0) | arg1);
}
