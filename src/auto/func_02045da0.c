#include "m2c.h"

extern M2C_UNK data_020d54d4;

void func_02045da0(s32 arg0) {
    M2C_FIELD(&data_020d54d4, s32 *, 0x24) = (s32) (M2C_FIELD(&data_020d54d4, s32 *, 0x24) | arg0);
}
