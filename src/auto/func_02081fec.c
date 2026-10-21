/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0206cc50(s32, M2C_UNK, s32);               /* extern */
s32 func_0208218c(s32);                             /* extern */
extern s32 data_020d6638;

void func_02081fec(u32 arg0) {
    s32 var_r0;
    s32 var_r4;

    if (arg0 >= 0x7CU) {
        var_r4 = 0x20;
    } else {
        var_r4 = 4;
    }
    if (var_r4 != 0x20) {
        var_r0 = func_0208218c(arg0 + var_r4);
    } else {
        var_r0 = func_0206cc50(data_020d6638, -1, arg0 + var_r4);
    }
    M2C_FIELD((var_r0 + var_r4), u32 *, -4) = arg0;
}
