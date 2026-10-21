/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209fc84(void *, s32);                     /* extern */
M2C_UNK func_0209fe28(void *, s32);                 /* extern */
M2C_UNK func_020a0360();                            /* extern */
s32 func_020a0400(s32);                             /* extern */

s32 func_020a0318(void *arg0) {
    func_0209fe28(arg0, func_0209fc84(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_020a0400(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_020a0360();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
