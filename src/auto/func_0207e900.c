/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208444c(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_020846f4(s32, s32, M2C_UNK, M2C_UNK *);    /* extern */
extern M2C_UNK data_020d3d5c;
extern s32 data_020d6f6c;
extern s32 data_020d6f74;

void *func_0207e900(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK var_r2;
    s32 temp_r0;
    s32 var_r0;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = -1;
    if (arg1 == 0) {
        var_r0 = 0x06000000;
    } else {
        var_r0 = 0x06200000;
    }
    M2C_FIELD(arg0, s32 *, 8)    = arg2;
    M2C_FIELD(arg0, s32 *, 0xC)  = var_r0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    temp_r0                      = M2C_FIELD(arg0, s32 *, 0);
    if (arg3 != 0) {
        var_r2 = 0x40;
    } else {
        var_r2 = 0x4000;
    }
    switch (temp_r0) {                              /* irregular */
        case 0:
            M2C_FIELD(arg0, s32 *, 4) = func_020846f4(data_020d6f6c, M2C_FIELD(arg0, s32 *, 8), var_r2, &data_020d3d5c);
            func_0208444c(data_020d6f6c, 0, 0, 0, 0);
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 4) = func_020846f4(data_020d6f74, M2C_FIELD(arg0, s32 *, 8), var_r2, &data_020d3d5c);
            func_0208444c(data_020d6f74, 0, 0, 0, 0);
            break;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 4) & 0x3FFF);
    return arg0;
}
