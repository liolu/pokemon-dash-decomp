/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204e510();                            /* extern */
M2C_UNK func_0207dfe8(s32, M2C_UNK);                /* extern */
M2C_UNK func_0207f230(s32);                         /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */

void func_0205cc04(void *arg0) {
    s32 temp_r4;
    void **temp_r0;

    func_0204e510();
    func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x13C), 0);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x14C);
    if (temp_r4 != 0) {
        func_0207f230(temp_r4);
        func_02081f64(temp_r4);
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x6F0);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
}
