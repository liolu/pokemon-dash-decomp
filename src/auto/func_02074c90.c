/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02075470(s32);                         /* extern */
M2C_UNK func_020767b8();                            /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */

void func_02074c90(void *arg0) {
    s32 temp_r4;

    func_020767b8();
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (temp_r4 == 0) {
        return;
    }
    func_02075470(temp_r4);
    func_02081f64(temp_r4);
}
