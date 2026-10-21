#include "m2c.h"

void func_02082694(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s8 var_ip;

    M2C_FIELD(arg0, s32 *, 0)    = arg2;
    var_ip                       = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = arg3;
    M2C_FIELD(arg0, s32 *, 0xC)  = arg4;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s8 *, 0x1C)  = 0;
    if (arg1 != 0) {
        var_ip = 1;
    }
    M2C_FIELD(arg0, s8 *, 0x1D)  = var_ip;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
}
