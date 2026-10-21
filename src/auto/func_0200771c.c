/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020d4e60;

s32 func_0200771c(s32 arg0) {
    s32 temp_r1;
    s32 var_r3;

    var_r3  = 0;
    temp_r1 = (arg0 * 0xE0) + data_020d4e60;
    if ((M2C_FIELD(temp_r1, u8 *, 0xC9) != 0) && (M2C_FIELD(temp_r1, u8 *, 0xA7) != 0)) {
        var_r3 = 1;
    }
    return var_r3;
}
