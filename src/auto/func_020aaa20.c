/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020aab5c();                                /* extern */
s32 func_020aaba8();                                /* extern */
s32 func_020aac34();                                /* extern */
M2C_UNK func_020aac3c(s32);                         /* extern */

void func_020aaa20(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = func_020aaba8();
    M2C_FIELD(arg0, s32 *, 4) = func_020aab5c();
    M2C_FIELD(arg0, s32 *, 8) = func_020aac34();
    func_020aac3c(0x02600029);
}
