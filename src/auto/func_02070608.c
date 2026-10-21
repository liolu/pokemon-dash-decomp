/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02070654(void *, M2C_UNK, M2C_UNK);    /* extern */

s32 func_02070608(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    void *var_r6;

    var_r6 = arg0;
    if (var_r6 == NULL) {
        return (s32) arg0;
    }
loop_2:
    func_02070654(var_r6, arg1, arg2);
    temp_r0 = M2C_FIELD(var_r6, u8 *, 0) & 1;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    var_r6 = M2C_FIELD(var_r6, void **, 4);
    if (var_r6 == NULL) {
        return temp_r0;
    }
    goto loop_2;
}
