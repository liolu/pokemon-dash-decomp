/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209c2b0(void *);                      /* extern */
s32 _ZN3IRQ7DisableEv();                                /* extern */
M2C_UNK _ZN3IRQ7RestoreEj(s32);                         /* extern */

void func_0209c32c(void *arg0) {
    s32 temp_r4;

    temp_r4 = _ZN3IRQ7DisableEv();
    if (M2C_FIELD(arg0, s32 *, 0x64) != 2) {
        func_0209c2b0(arg0 + 0x90);
    }
    _ZN3IRQ7RestoreEj(temp_r4);
}
