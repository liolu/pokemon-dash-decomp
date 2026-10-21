/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02063748(s32);                         /* extern */
M2C_UNK func_020963d4(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02097fa4(M2C_UNK *, s32, s32);         /* extern */
s32 func_0209c99c();                                /* extern */
extern s32 data_020d5fac;
extern M2C_UNK data_020d5fc4;

void func_020632c4(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg1;
    var_r4 = arg2;
    if (func_0209c99c() != 0) {
        return;
    }
    func_02063748(arg0);
    if ((arg0 == 5) && (var_r5 == 6) && (var_r4 < 0x5A)) {
        var_r4 += 0x14;
        var_r5 = 7;
    }
    func_02097fa4(&data_020d5fc4, arg0, var_r5);
    func_020963d4(&data_020d5fc4, var_r4);
    data_020d5fac = var_r4;
}
