/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020752d0(s32, void *);                     /* extern */

s32 func_02072fd4(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0_2 = arg1 & 0x10;
    if (temp_r0_2 == 0) {
        return temp_r0_2;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (temp_r0 == 0) {
        return temp_r0;
    }
    return func_020752d0(temp_r0, arg0);
}
