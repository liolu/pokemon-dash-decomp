/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_02096c24();                               /* extern */
s32 func_0209750c(s32, M2C_UNK);                    /* extern */

s32 func_02097874(s32 arg0, M2C_UNK arg1) {
    s32 *temp_r0;

    temp_r0 = func_02096c24();
    if (temp_r0 == NULL) {
        return 0;
    }
    if (func_0209750c(*temp_r0, arg1) != 0) {
        return 1;
    }
    return 0;
}
