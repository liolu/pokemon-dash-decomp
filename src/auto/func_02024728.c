/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020332ac();                            /* extern */
M2C_UNK func_02036638(s32, M2C_UNK);                /* extern */
M2C_UNK func_ov001_020dc7c8();                      /* extern */

void func_02024728(void *arg0) {
    s32 temp_r0;

    func_ov001_020dc7c8();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x210);
    if (temp_r0 != 0x10) {
        func_02036638(temp_r0, 0);
        M2C_FIELD(arg0, s32 *, 0x210) = 0x10;
    }
    func_020332ac();
}
