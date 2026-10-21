/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02070698(s32, s32, s32);               /* extern */
M2C_UNK func_02075470(s32);                         /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */

void func_0206e6d0(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r4;

    if ((arg2 & 1) && (M2C_FIELD(arg1, s32 *, 8) != 0)) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0xFC);
        if (temp_r4 != 0) {
            func_02075470(temp_r4);
            func_02081f64(temp_r4);
        }
        M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r0 == 0) {
        return;
    }
    temp_r1 = M2C_FIELD(arg1, s32 *, 0xC);
    if (temp_r1 == 0) {
        return;
    }
    func_02070698(temp_r0, temp_r1, arg2);
}
