/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02082044(M2C_UNK);                         /* extern */
M2C_UNK func_02082f00(s32, s32);                    /* extern */
extern M2C_UNK data_020d3fb0;
extern M2C_UNK data_020d3fe8;

void *func_02083cd8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d3fe8;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d3fb0;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, s32 *, 8)      = arg2;
    M2C_FIELD(arg0, s32 *, 0xC)    = arg3;
    M2C_FIELD(arg0, s32 *, 0x10)   = arg4;
    if (arg4 == 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    }
    temp_r0 = func_02082044(8);
    if (temp_r0 != 0) {
        func_02082f00(temp_r0, M2C_FIELD(arg0, s32 *, 4));
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
    return arg0;
}
