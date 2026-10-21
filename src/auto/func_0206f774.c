/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02070198(M2C_UNK, M2C_UNK);

s32 func_0206f774(s32 arg0, s32 arg1) {
    M2C_UNK saved_reg_r4;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 var_r4;

    var_r4  = saved_reg_r4;
    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0 != 0) {
        var_r4 = func_0206f774(temp_r0, arg1);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r0_2 != 0) {
        if ((func_0206f774(temp_r0_2, arg1) != 0) || (var_r4 != 0)) {
            var_r4 = 1;
        } else {
            var_r4 = 0;
        }
    }
    temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r0_3 != 0) {
        if ((func_02070198(temp_r0_3, arg1) != 0) || (var_r4 != 0)) {
            var_r4 = 1;
        } else {
            var_r4 = 0;
        }
    }
    return var_r4;
}
