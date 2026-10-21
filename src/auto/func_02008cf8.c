/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008d40(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02031cac();                                /* extern */

s32 func_02008cf8(M2C_UNK arg0, s32 arg1, M2C_UNK arg2) {
    if (func_02031cac() == 0) {
        return 0;
    }
    func_02008d40(arg0, 3, arg2);
    return 1;
}
