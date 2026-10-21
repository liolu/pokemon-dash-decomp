/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a33e4();                            /* extern */
s32 func_020a3a70(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_020da444;
extern M2C_UNK func_020a33fc;

s32 func_020a3a2c(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_020a3a70(arg0, &func_020a33fc, 0);
    M2C_FIELD(&data_020da444, s32 *, 0x20) = temp_r0;
    if (temp_r0 == 0) {
        func_020a33e4();
    }
    return M2C_FIELD(&data_020da444, s32 *, 0x20);
}
