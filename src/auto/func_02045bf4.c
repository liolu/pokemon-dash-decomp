#include "m2c.h"

extern s32 data_020d54d0;

s32 func_02045bf4(void) {
    s32 var_r0;

    var_r0 = 1;
    if (data_020d54d0 == 2) {
        return 1;
    }
    if (data_020d54d0 != 3) {
        var_r0 = 0;
    }
    return var_r0;
}
