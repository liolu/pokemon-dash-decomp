/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207e838(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0207fc24(s32, M2C_UNK);                /* extern */
s32 func_02082044(M2C_UNK);                         /* extern */
extern s32 data_020d65b4;

s32 func_0207fbd4(void) {
    s32 temp_r0;

    if (data_020d65b4 == 0) {
        temp_r0 = func_02082044(0x34);
        if (temp_r0 != 0) {
            func_0207e838(temp_r0, 0, 1);
        }
        func_0207fc24(temp_r0, 1);
    }
    return data_020d65b4;
}
