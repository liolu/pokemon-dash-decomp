/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209bbb8(M2C_UNK);                     /* extern */
M2C_UNK lbl_020aab6c(s32);                          /* extern */
M2C_UNK lbl_020aabb8(s32);                          /* extern */

void func_020aa020(s32 arg0) {
    if (arg0 & 0x20) {
        func_0209bbb8(0x70);
    }
    lbl_020aab6c(arg0 & 2);
    lbl_020aabb8(arg0 & 1);
}
