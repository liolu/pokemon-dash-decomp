/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 _s32_div_f(s32, s32);                        /* extern */

s32 func_02062c10(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x14);
    return temp_r4 +
           _s32_div_f(M2C_FIELD(arg0, s32 *, 0xC) * (M2C_FIELD(arg0, s32 *, 0x18) - temp_r4), M2C_FIELD(arg0, s32 *, 8));
}
