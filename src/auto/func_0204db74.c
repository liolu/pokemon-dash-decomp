/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020b27d0(s32, M2C_UNK);                    /* extern */

s32 func_0204db74(void *arg0) {
    M2C_UNK var_r1;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r2 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0x14) == 1) {
            var_r1 = 0x40;
        } else {
            var_r1 = 0x20;
        }
        return func_020b27d0(M2C_FIELD(temp_r2, s32 *, 0x10), var_r1);
    }
    return -1;
}
