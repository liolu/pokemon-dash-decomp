#include "m2c.h"

s32 func_0201b0f0(void *arg0, s32 *arg1) {
    s32 var_r0;

    if ((s32) *M2C_FIELD(arg0, s32 **, 4) < (s32) *arg1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return 1;
    }
    return 0;
}
