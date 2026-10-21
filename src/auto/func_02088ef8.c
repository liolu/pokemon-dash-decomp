/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206e3f0(s32, M2C_UNK *, M2C_UNK, s32); /* extern */
extern M2C_UNK func_020885ac;
extern M2C_UNK func_020885c0;

void func_02088ef8(void *arg0, s32 arg1) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x98) != 0) {
        M2C_FIELD(arg0, s8 *, 0xB5) = 1;
        return;
    }
    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x64), s32 *, 0x10);
    if (arg1 != 0) {
        func_0206e3f0(temp_r0, &func_020885c0, 0, 0x3FF);
        return;
    }
    func_0206e3f0(temp_r0, &func_020885ac, 0, 0x3FF);
}
