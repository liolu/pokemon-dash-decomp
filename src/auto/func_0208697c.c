/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020868e4(M2C_UNK, s32);                /* extern */
M2C_UNK func_02086dbc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02087c68();                                /* extern */

void func_0208697c(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    if (func_02087c68() <= arg2) {
        return;
    }
    func_02086dbc(arg0, arg1, 0x38000001);
    func_020868e4(arg0, arg2);
}
