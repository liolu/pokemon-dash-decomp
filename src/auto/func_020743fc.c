/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200d5c0(s32);                             /* extern */

void func_020743fc(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0xA0) = func_0200d5c0(M2C_FIELD(arg1, s32 *, 0x38));
    M2C_FIELD(arg0, s32 *, 0xA4) = func_0200d5c0(M2C_FIELD(arg1, s32 *, 0x3C));
    M2C_FIELD(arg0, s32 *, 0xA8) = func_0200d5c0(M2C_FIELD(arg1, s32 *, 0x40));
    M2C_FIELD(arg0, s32 *, 0xAC) = func_0200d5c0(M2C_FIELD(arg1, s32 *, 0x44));
}
