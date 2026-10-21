/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02064988(void *, s32);                 /* extern */
s32 func_02081fec(M2C_UNK);                         /* extern */

void *func_020649f8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4)   = -1;
    M2C_FIELD(arg0, s32 *, 8)   = -1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0)   = func_02081fec(2);
    if (arg1 != 0) {
        func_02064988(arg0, arg1);
    }
    return arg0;
}
