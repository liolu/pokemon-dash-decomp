#include "m2c.h"

extern u8 data_020d3e18[];
extern s32 data_020d66c0[];

void func_02082160(s32 *arg0, u32 arg1) {
    s32 idx            = data_020d3e18[(arg1 - 1) >> 2] - 1;
    arg0[0]            = data_020d66c0[idx];
    data_020d66c0[idx] = (s32) arg0;
}
