/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209f104(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020a4ee8();                            /* extern */
s32 func_020a5228(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020a532c();                                /* extern */
extern s16 data_020dae28;
extern s32 data_020dae2c;

s32 func_020a548c(void) {
    s32 temp_r0;

    if (func_020a532c() != 0) {
        return 3;
    }
    temp_r0 = func_020a5228(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020a4ee8();
    func_0209f104(0xA, 0);
    data_020dae2c = 0;
    data_020dae28 = 0;
    return 0;
}
