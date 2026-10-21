/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020ccfdc;
extern M2C_UNK data_020cd624;

void func_0201de58(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ccfdc;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020cd624;
    M2C_FIELD(arg0, s32 *, 8)      = arg1;
    M2C_FIELD(arg0, s32 *, 0xC)    = arg2;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    M2C_FIELD(arg0, s32 *, 0x24)   = -1;
}
