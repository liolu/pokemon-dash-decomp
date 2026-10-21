#include "m2c.h"

s32 func_02070bd8(s32 arg0, s8 *arg1, s8 **arg2) {
    s8 *var_r1;
    s8 temp_r3;

    var_r1  = arg1;
    temp_r3 = *var_r1;
    if (temp_r3 != 0) {
        if (temp_r3 != 0x54) {
            return 0;
        }
        var_r1 += 1;
        goto block_4;
    }
block_4:
    if (arg2 != NULL) {
        *arg2 = var_r1;
    }
    return arg0;
}
