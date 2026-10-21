#include "m2c.h"

M2C_UNK func_0207e4c8();                            /* extern */

void func_0207e324(void *arg0, void *arg1) {
    s32 temp_r2_2;
    void *temp_r2;

    if (arg1 != NULL) {
        M2C_FIELD(arg0, void **, 0x2C) = arg1;
    } else {
        temp_r2 = M2C_FIELD(arg0, void **, 0x30);
        if (temp_r2 != NULL) {
            M2C_FIELD(arg0, void **, 0x2C) = temp_r2;
        }
    }
    temp_r2_2                    = M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) ((s32) (temp_r2_2 + ((u32) (temp_r2_2 >> 0xD) >> 0x12)) >> 0xE);
    func_0207e4c8();
}
