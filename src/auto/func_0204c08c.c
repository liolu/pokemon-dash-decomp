#include "m2c.h"

s32 func_0204c08c(void *arg0) {
    s32 temp_r1;
    s32 var_r0;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x50);
    var_r0  = 1;
    if (temp_r1 == 3) {
        return 1;
    }
    if (temp_r1 != 2) {
        var_r0 = 0;
    }
    return var_r0;
}
