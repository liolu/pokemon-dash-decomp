#include "m2c.h"

extern u32 data_020d876c;

s32 func_0209e614(u32 arg0) {
    s32 var_r0;

    if (arg0 > (u32) data_020d876c) {
        if ((u32) (arg0 - data_020d876c) >= 0x80000000U) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    if ((u32) (data_020d876c - arg0) < 0x80000000U) {
        return 1;
    }
    return 0;
}
