/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209c2b0(void *);                      /* extern */
M2C_UNK func_0209d6cc();                            /* extern */

void func_0206cfa4(void *arg0, s32 arg1) {
    if (arg1 < 0) {
        func_0209d6cc();
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) <= arg1) {
        return;
    }
    do {
        func_0209c2b0(arg0 + 0x38);
    } while ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > arg1);
}
