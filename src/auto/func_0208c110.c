#include "m2c.h"

void func_0208c110(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0)   = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4)   = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8)   = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, u8 *, 0x10) = (u8) M2C_FIELD(arg1, u8 *, 0x10);
}
