/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02095f24();                                /* extern */
M2C_UNK func_020971f8();                            /* extern */

s32 func_02097ab0(void) {
    s32 temp_r0;

    temp_r0 = func_02095f24();
    if (temp_r0 != 0) {
        func_020971f8();
    }
    return temp_r0;
}
