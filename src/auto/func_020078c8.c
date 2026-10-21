/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a6300(M2C_UNK *, s32, u16, s32, s32, s32); /* extern */
extern s32 data_020d4e28;
extern s32 data_020d4e30;
extern s32 data_020d4e34;
extern s32 data_020d4e44;
extern void *data_020d4e70;
extern M2C_UNK func_02007bf0;

s32 func_020078c8(void) {
    u16 var_r0;

    if (M2C_FIELD(data_020d4e70, u16 *, 0x16) == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (func_020a6300(&func_02007bf0, data_020d4e34, (u16) data_020d4e44, data_020d4e30, (s32) (u16) data_020d4e28,
                      (s32) var_r0) != 2) {
        return 0;
    }
    return 1;
}
