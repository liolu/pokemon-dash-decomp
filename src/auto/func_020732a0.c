/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02075470(s32);                         /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */

s32 func_020732a0(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = arg1 & 0x10;
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
