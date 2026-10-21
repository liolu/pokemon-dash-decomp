/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201bf94();                            /* extern */
s32 func_02082044(s32);                             /* extern */

void func_02064768(void *arg0, u32 arg1) {
    if (arg1 > 0x3FFFFFFFU) {
        func_0201bf94();
    }
    M2C_FIELD(arg0, s32 *, 0) = func_02082044(arg1 * 4);
    M2C_FIELD(arg0, u32 *, 8) = arg1;
}
