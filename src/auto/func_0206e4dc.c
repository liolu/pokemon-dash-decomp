/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206e550();                            /* extern */

s32 func_0206e4dc(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    void *var_r4;

    func_0206e550();
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0) & 0x40000000;
    if (temp_r0_2 == 0) {
        return temp_r0_2;
    }
    var_r4 = M2C_FIELD(arg0, void **, 0x10);
    if (var_r4 == NULL) {
        return temp_r0_2;
    }
loop_4:
    func_0206e4dc(var_r4, arg1);
    temp_r0 = M2C_FIELD(var_r4, s32 *, 0) & 0x20000000;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    var_r4 = M2C_FIELD(var_r4, void **, 8);
    if (var_r4 == NULL) {
        return temp_r0;
    }
    goto loop_4;
}
