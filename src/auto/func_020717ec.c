/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02071a74(void *);                      /* extern */
M2C_UNK func_0207320c(s32, s32);                    /* extern */
M2C_UNK func_02075470(s32);                         /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */

void func_020717ec(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;

    if (arg1 & 4) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x18);
        if (temp_r4 != 0) {
            func_02075470(temp_r4);
            func_02081f64(temp_r4);
        }
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 != 0) {
        func_0207320c(temp_r0, arg1);
    }
    func_02071a74(arg0);
}
