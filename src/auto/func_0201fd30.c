/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201f5ec();                                /* extern */
s32 func_0201f640(M2C_UNK);                         /* extern */
M2C_UNK func_0201f7e4(M2C_UNK, s32);                /* extern */

void func_0201fd30(M2C_UNK arg0) {
    s32 var_r1;

    var_r1 = func_0201f5ec();
    if (var_r1 < 0) {
        var_r1 = func_0201f640(arg0);
    }
    func_0201f7e4(arg0, var_r1);
}
