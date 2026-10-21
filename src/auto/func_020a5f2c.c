/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a5228(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020a5358(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020a5474(M2C_UNK, M2C_UNK);            /* extern */

s32 func_020a5f2c(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_020a5228(1, 1);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020a5474(5, arg0);
    var_r0 = func_020a5358(5, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
