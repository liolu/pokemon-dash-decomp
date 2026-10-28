/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 _ZN3IRQ7DisableEv();                                /* extern */
M2C_UNK _ZN3IRQ7RestoreEj(s32);                         /* extern */
s32 func_0209d67c();                                /* extern */
M2C_UNK func_0209d690(s32);                         /* extern */
s32 func_0209df64(s16, void *);                     /* extern */

s32 func_0209bd94(s16 arg0, void *arg1, M2C_UNK (*arg2)(), s32 arg3) {
    s32 temp_r0;
    s32 var_r5;

    if (arg3 != 0) {
        var_r5 = func_0209d67c();
    } else {
        var_r5 = _ZN3IRQ7DisableEv();
    }
    temp_r0 = func_0209df64(arg0, arg1);
    if (temp_r0 == 0) {
        if (arg2 != NULL) {
            arg2();
        }
        M2C_FIELD(arg1, s16 *, 4) = arg0;
    }
    if (arg3 != 0) {
        func_0209d690(var_r5);
    } else {
        _ZN3IRQ7RestoreEj(var_r5);
    }
    return temp_r0;
}
