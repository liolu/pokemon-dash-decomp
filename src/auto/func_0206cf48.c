/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209c2b0(void *);                      /* extern */
s32 _ZN3IRQ7DisableEv();                                /* extern */
M2C_UNK _ZN3IRQ7RestoreEj(s32);                         /* extern */

void func_0206cf48(void *arg0, s32 arg1) {
    s32 temp_r5;

    temp_r5 = _ZN3IRQ7DisableEv();
    if ((u32) ((arg1 - M2C_FIELD(arg0, s32 *, 0x24)) & ~0x80000000) <= 0x3FFFFFFFU) {
        do {
            func_0209c2b0(arg0 + 0x38);
        } while ((u32) ((arg1 - M2C_FIELD(arg0, s32 *, 0x24)) & ~0x80000000) <= 0x3FFFFFFFU);
    }
    _ZN3IRQ7RestoreEj(temp_r5);
}
