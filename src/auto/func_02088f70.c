/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206e3f0(s32, M2C_UNK *, s32, s32);    /* extern */
extern M2C_UNK func_0207549c;

void func_02088f70(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x98) != 0) {
        M2C_FIELD(arg0, s32 *, 0xB0) = arg1;
        return;
    }
    func_0206e3f0(M2C_FIELD(M2C_FIELD(arg0, void **, 0x64), s32 *, 0x10), &func_0207549c, arg1, 0x3FF);
}
