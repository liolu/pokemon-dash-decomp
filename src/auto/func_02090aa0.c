/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020914a0(void *, u32 *, s32, void *);    /* extern */

void func_02090aa0(void **arg0, void *arg1, u32 *arg2) {
    void *temp_r0;

    temp_r0 = func_020914a0(arg1, arg2, M2C_FIELD(arg1, s32 *, 4), arg1 + 4);
    if ((temp_r0 == (arg1 + 4)) || ((u32) *arg2 < (u32) M2C_FIELD(temp_r0, u32 *, 0xC))) {
        *arg0 = arg1 + 4;
        return;
    }
    *arg0 = temp_r0;
}
