/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u8 data_020d4dfc;
extern M2C_UNK data_020d4f00;

s32 func_0200735c(s32 arg0) {
    s32 var_r0;

    if (data_020d4dfc != 0) {
        if (((s32) M2C_FIELD(&data_020d4f00, u16 *, 0x60) >> arg0) & 1) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
