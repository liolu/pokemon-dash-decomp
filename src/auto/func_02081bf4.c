/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02081bf4(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0) == 0x1000) && (M2C_FIELD(arg0, s32 *, 4) == 0) && (M2C_FIELD(arg0, s32 *, 8) == 0) &&
        (M2C_FIELD(arg0, s32 *, 0xC) == 0) && (M2C_FIELD(arg0, s32 *, 0x10) == 0x1000) &&
        (M2C_FIELD(arg0, s32 *, 0x14) == 0) && (M2C_FIELD(arg0, s32 *, 0x18) == 0) && (M2C_FIELD(arg0, s32 *, 0x1C) == 0) &&
        (M2C_FIELD(arg0, s32 *, 0x20) == 0x1000) && (M2C_FIELD(arg0, s32 *, 0x24) == 0) &&
        (M2C_FIELD(arg0, s32 *, 0x28) == 0) && (M2C_FIELD(arg0, s32 *, 0x2C) == 0)) {
        return 1;
    }
    return 0;
}
