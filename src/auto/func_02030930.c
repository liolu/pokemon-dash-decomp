/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02030930(void *arg0, u8 arg1) {
    if (arg1 == M2C_FIELD(arg0, u8 *, 0xC0)) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0xC0)  = arg1;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0xF;
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) ((M2C_FIELD(arg0, s32 *, 0xC4) * 2) - M2C_FIELD(arg0, s32 *, 0xC8));
}
