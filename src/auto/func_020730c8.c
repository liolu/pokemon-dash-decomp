/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207544c(s32, M2C_UNK, s32);           /* extern */

void func_020730c8(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r2;

    temp_r2 = arg2 & 0x10;
    if (temp_r2 == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (temp_r0 == 0) {
        return;
    }
    func_0207544c(temp_r0, arg1, temp_r2);
}
