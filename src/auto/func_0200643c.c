/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020087e0();                              /* extern */

s32 func_0200643c(void) {
    s32 var_r0;
    void *temp_r0;

    temp_r0 = func_020087e0();
    if (temp_r0 != NULL) {
        if (M2C_FIELD(temp_r0, u8 *, 0) == 4) {
            var_r0 = M2C_FIELD(temp_r0, s32 *, 0x14);
        } else {
            var_r0 = -1;
        }
        return var_r0;
    }
    return 0;
}
