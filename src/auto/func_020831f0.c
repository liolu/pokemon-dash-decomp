/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208444c(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_020848c4(s32, s32, M2C_UNK, M2C_UNK *);    /* extern */
extern M2C_UNK data_020d3f58;
extern s32 data_020d6f80;
extern s32 data_020d6fa0;

void *func_020831f0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r0;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    if (arg1 == 0) {
        var_r0 = 0x06400000;
    } else {
        var_r0 = 0x06600000;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_r0;
    temp_r0                     = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_r0) {                              /* irregular */
        case 0:
            M2C_FIELD(arg0, s32 *, 4) = func_020848c4(data_020d6fa0, M2C_FIELD(arg0, s32 *, 8), 0x100, &data_020d3f58);
            func_0208444c(data_020d6fa0, 0, 0, 0, 0);
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 4) = func_020848c4(data_020d6f80, M2C_FIELD(arg0, s32 *, 8), 0x100, &data_020d3f58);
            func_0208444c(data_020d6f80, 0, 0, 0, 0);
            break;
    }
    return arg0;
}
