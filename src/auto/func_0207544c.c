#include "engine.h"
#include "m2c.h"

void func_020755a4(M2C_UNK, M2C_UNK);

void func_0207544c(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~0x40000000) | 0x08000000);
    func_020755a4(M2C_FIELD(arg0, s32 *, 0x14), arg1);
}
