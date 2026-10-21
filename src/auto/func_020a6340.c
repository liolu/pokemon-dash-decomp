/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a6340(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r2;
    s32 var_r4;
    u16 var_lr;

    var_r2 = arg2;
    var_lr = 1;
    var_r4 = 0;
    if (arg3 > 0) {
        do {
            var_r4 += 1;
            if (arg1 & var_lr) {
                var_r2 += M2C_FIELD(arg0, u16 *, 0x810);
            }
            var_lr *= 2;
        } while (var_r4 < arg3);
    }
    return var_r2;
}
