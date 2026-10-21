/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207c8e8(void *);                      /* extern */

s32 func_0207c9a8(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x9C) & 1;
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    do {
        func_0207c8e8(arg0);
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x9C) & 1;
    } while (temp_r0 == 0);
    return temp_r0;
}
