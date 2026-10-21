#include "m2c.h"

void func_02071ba4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0xB) = (s8) ((s32) (arg1 + 0x800) >> 0xC);
}
