/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 _ZN3IRQ7DisableEv();                                /* extern */
M2C_UNK _ZN3IRQ7RestoreEj(s32);                         /* extern */
s32 func_0209d67c();                                /* extern */
M2C_UNK func_0209d690(s32);                         /* extern */

s32 func_0209be24(s32 arg0, void *arg1, M2C_UNK (*arg2)(), s32 arg3) {
    s32 var_r4;

    if (arg0 != M2C_FIELD(arg1, u16 *, 4)) {
        return -2;
    }
    if (arg3 != 0) {
        var_r4 = func_0209d67c();
    } else {
        var_r4 = _ZN3IRQ7DisableEv();
    }
    M2C_FIELD(arg1, u16 *, 4) = 0U;
    if (arg2 != NULL) {
        arg2();
    }
    M2C_FIELD(arg1, s32 *, 0) = 0;
    if (arg3 != 0) {
        func_0209d690(var_r4);
    } else {
        _ZN3IRQ7RestoreEj(var_r4);
    }
    return 0;
}
