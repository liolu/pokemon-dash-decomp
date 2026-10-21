/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020973ec(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0209e27c(s32, s32);                    /* extern */
M2C_UNK func_0209ed50(s32);                         /* extern */

void func_02097340(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_020973ec(arg0, arg2, arg3);
    func_0209e27c(arg0, arg0 + arg1);
    func_0209ed50(arg0);
}
