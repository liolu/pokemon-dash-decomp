/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081f64();                            /* extern */

s32 **func_02042ee8(s32 **arg0) {
    s32 *temp_r1;

    temp_r1 = *arg0;
    if (temp_r1 != NULL) {
        *temp_r1 -= 1;
        if ((*temp_r1 == 0) && (*arg0 != NULL)) {
            func_02081f64();
        }
    }
    *arg0 = NULL;
    return arg0;
}
