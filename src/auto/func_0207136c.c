/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02072d88(s32);                             /* extern */

s32 func_0207136c(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_2;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_r1 != 0) {
        return temp_r1;
    }
    temp_r1_2 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_r1_2 != 0) && (M2C_FIELD(arg0, u8 *, 0) & 0x40)) {
        temp_r0 = func_02072d88(temp_r1_2);
        if (temp_r0 != 0) {
            return temp_r0;
        }
    }
    return 0;
}
