#include "m2c.h"

M2C_UNK func_0207e4c8();                            /* extern */

void func_0207e35c(void *arg0, void *arg1) {
    s32 temp_r2;
    void *temp_r1;

    if (arg1 != NULL) {
        M2C_FIELD(arg0, void **, 0x24) = arg1;
    } else {
        temp_r1 = M2C_FIELD(arg0, void **, 0x28);
        if (temp_r1 != NULL) {
            M2C_FIELD(arg0, void **, 0x24) = temp_r1;
        }
    }
    temp_r2                      = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) ((s32) (temp_r2 + ((u32) (temp_r2 >> 0xA) >> 0x15)) >> 0xB);
    func_0207e4c8();
}
