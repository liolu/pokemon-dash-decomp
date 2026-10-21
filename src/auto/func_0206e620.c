/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02070608(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0207544c();                            /* extern */

void func_0206e620(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;

    if ((arg2 & 1) && (M2C_FIELD(arg0, s32 *, 0xFC) != 0)) {
        func_0207544c();
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r0 == 0) {
        return;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0) & 0x80000000)) {
        return;
    }
    func_02070608(temp_r0, arg1, arg2);
}
