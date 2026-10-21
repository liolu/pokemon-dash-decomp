/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a6e64(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern s8 data_020d4dfc;
extern u16 data_020d4e14;
extern s32 data_020d4e54;

s32 func_02007864(void) {
    s32 var_r1;

    if ((u32) data_020d4e14 <= 1U) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (func_020a6e64(data_020d4e54, 0xC, 0x3F, 0x18, var_r1) != 0) {
        return 0;
    }
    data_020d4dfc = 1;
    return 1;
}
