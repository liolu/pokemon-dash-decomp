/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209cd9c(u16 *, M2C_UNK);              /* extern */
s32 func_020a532c();                                /* extern */
extern void *data_020dae2c;

s32 func_020a52d0(void) {
    s32 temp_r0;

    temp_r0 = func_020a532c();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0209cd9c(M2C_FIELD(data_020dae2c, u16 **, 4), 2);
    if ((u32) *M2C_FIELD(data_020dae2c, u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
