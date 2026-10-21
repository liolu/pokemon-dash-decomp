#include "m2c.h"

void func_02071bb4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0xA) = (s8) ((s32) (arg1 + 0x800) >> 0xC);
}
