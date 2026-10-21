/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209bbb8();                            /* extern */
M2C_UNK func_0209d664(s32);                         /* extern */

void func_020a74b8(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_0209bbb8(arg0);
    }
    func_0209d664(M2C_FIELD(arg1, s32 *, 4));
}
