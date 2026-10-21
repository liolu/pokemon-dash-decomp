#include "m2c.h"

extern s32 data_020d7598;

void func_02095c00(s32 arg0) {
    data_020d7598 &= ~(1 << arg0);
}
