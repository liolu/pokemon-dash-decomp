/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02091440(void *, s32 *, s32, void *);    /* extern */

void func_020909e8(void **arg0, void *arg1, s32 *arg2) {
    void *temp_r0;

    temp_r0 = func_02091440(arg1, arg2, M2C_FIELD(arg1, s32 *, 4), arg1 + 4);
    if ((temp_r0 == (arg1 + 4)) || ((s32) *arg2 < (s32) M2C_FIELD(temp_r0, s32 *, 0xC))) {
        *arg0 = arg1 + 4;
        return;
    }
    *arg0 = temp_r0;
}
