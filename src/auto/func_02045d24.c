#include "m2c.h"

extern M2C_UNK data_020d5d0a;

s32 func_02045d24(s32 arg0) {
    s32 var_r0;

    var_r0 = ((u8 *) &data_020d5d0a)[arg0] & 0x1F;
    if (arg0 == 0) {
        var_r0 |= 0x20;
    }
    return var_r0;
}
