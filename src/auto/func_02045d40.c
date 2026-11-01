#include "m2c.h"

extern u8 data_020d5d0a[];

void func_02045d40(s32 arg0, s32 arg1) {
    data_020d5d0a[arg0] = data_020d5d0a[arg0] | (arg1 & 0x1F);
}
