/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02075470(s32);                         /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */

s32 func_020731ac(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;

    temp_r0_2 = arg2 & 0x10;
    if (temp_r0_2 == 0) {
        return temp_r0_2;
    }
    temp_r0 = M2C_FIELD(arg1, s32 *, 4);
    if (temp_r0 == 0) {
        return temp_r0;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (temp_r4 != 0) {
        func_02075470(temp_r4);
        func_02081f64(temp_r4);
    }
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    return 0;
}
