/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207c280(s32, s32);                    /* extern */
s32 func_02082044(M2C_UNK);                         /* extern */
M2C_UNK func_020825b4(s32, M2C_UNK, s32 *, M2C_UNK, s32); /* extern */

void func_0207bc9c(s32 *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    if (*arg0 == 0) {
        return;
    }
    temp_r0 = func_02082044(0x2C);
    if (temp_r0 != 0) {
        func_020825b4(temp_r0, 1, arg0, arg1, 0);
    }
    func_0207c280(*arg0, temp_r0);
}
