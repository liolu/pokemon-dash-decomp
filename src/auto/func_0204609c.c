/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020d54d4;

s32 func_0204609c(void *arg0) {
    s32 var_r3;

    var_r3 = M2C_FIELD(arg0, s32 *, 0);
    if (var_r3 == 3) {
        var_r3 = 0;
    } else if (var_r3 == 4) {
        var_r3 = 2;
    }
    if ((s32) ((((var_r3 * 5) + M2C_FIELD(arg0, s32 *, 4)) * 5) + M2C_FIELD(arg0, s32 *, 8) + 1) <=
        (s32) M2C_FIELD(&data_020d54d4, u8 *, 0x738)) {
        return 1;
    }
    return 0;
}
