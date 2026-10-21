/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020709c8(M2C_UNK, M2C_UNK);

s32 func_02070198(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r4;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    var_r4  = 0;
    if (temp_r0 != 0) {
        var_r4 = func_02070198(temp_r0, arg1);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r0_2 != 0) {
        if ((func_020709c8(temp_r0_2, arg1) != 0) || (var_r4 != 0)) {
            var_r4 = 1;
        } else {
            var_r4 = 0;
        }
    }
    return var_r4;
}
