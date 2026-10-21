#include "m2c.h"

extern s8 *data_020d4e38;

void func_020069e4(s32 arg0) {
    s8 var_r1;

    if (arg0 != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 2;
    }
    *data_020d4e38 = var_r1;
}
