/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020705c4(void *, M2C_UNK);             /* extern */

s32 func_02070570(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    void *var_r5;

    var_r5 = arg0;
    if (var_r5 == NULL) {
        return (s32) arg0;
    }
loop_2:
    func_020705c4(var_r5, arg1);
    temp_r0 = M2C_FIELD(var_r5, u8 *, 0) & 1;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    var_r5 = M2C_FIELD(var_r5, void **, 4);
    if (var_r5 == NULL) {
        return temp_r0;
    }
    goto loop_2;
}
