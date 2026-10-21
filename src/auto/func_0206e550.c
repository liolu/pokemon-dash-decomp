/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02070570(s32, s32);                    /* extern */
M2C_UNK func_020752d0(s32, void *);                 /* extern */

void func_0206e550(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (arg1 & 1) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xFC);
        if (temp_r0 != 0) {
            func_020752d0(temp_r0, arg0);
        }
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r0_2 == 0) {
        return;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0) & 0x80000000)) {
        return;
    }
    func_02070570(temp_r0_2, arg1);
}
