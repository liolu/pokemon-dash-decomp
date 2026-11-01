/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02096a08(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02096a24(M2C_UNK);                         /* extern */
s32 func_02096cfc(s32);                             /* extern */
s32 _ZN3IRQ7DisableEv();                                /* extern */
M2C_UNK _ZN3IRQ7RestoreEj(s32);                         /* extern */

void func_020973ec(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r5;
    s32 temp_r4;

    temp_r4 = _ZN3IRQ7DisableEv();
    temp_r5 = func_02096cfc(arg1);
    if (arg0 == func_02096a24(arg2)) {
        func_02096a08(arg2, 0);
    }
    func_02096cfc(temp_r5);
    _ZN3IRQ7RestoreEj(temp_r4);
}
