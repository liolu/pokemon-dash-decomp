/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02096a08(M2C_UNK, s32);                /* extern */
s32 func_02096a24();                                /* extern */
s32 func_02096cec();                                /* extern */
s32 func_020975cc(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_020973b8;

s32 func_0209756c(M2C_UNK arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = func_02096a24();
    if (var_r4 == 0) {
        var_r4 = func_020975cc(arg0, &func_020973b8, func_02096cec(), arg0, arg1);
        if (var_r4 != 0) {
            func_02096a08(arg0, var_r4);
        }
    }
    return var_r4;
}
