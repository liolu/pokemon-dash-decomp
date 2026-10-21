#include "m2c.h"

void func_02071b24(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0x13) = (s8) ((s32) (arg1 + 0x800) >> 0xC);
}
