#include "m2c.h"

extern s32 data_020dae2c;

void func_020a5474(s32 arg0, s32 arg1) {
    M2C_FIELD((data_020dae2c + (arg0 * 4)), s32 *, 0x14) = arg1;
}
