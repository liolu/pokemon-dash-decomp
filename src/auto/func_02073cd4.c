#include "m2c.h"

extern M2C_UNK data_020ccfdc;
extern M2C_UNK data_020d3988;

void func_02073cd4(void *arg0, void *arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ccfdc;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s8 *, 8)       = (s8) (M2C_FIELD(arg1, s32 *, 8) & 0x78);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d3988;
    M2C_FIELD(arg0, void **, 0xC)  = arg1;
    M2C_FIELD(arg0, s32 *, 0x10)   = arg2;
}
