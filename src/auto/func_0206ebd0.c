/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206ec9c(M2C_UNK);

void func_0206ebd0(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x1C) = (s16) ((s32) (arg1 + 0x800) >> 0xC);
    M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 8);
    if (M2C_FIELD(arg0, s32 *, 0) & 0x10) {
        return;
    }
    func_0206ec9c(arg0);
}
