/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209955c(void *, void *);              /* extern */
M2C_UNK func_02099820(s32, s32, void *);            /* extern */

s32 func_02074a9c(s32 arg0, void *arg1) {
    func_02099820(arg0 + 0x18, arg0 + 0xC, arg1);
    if ((M2C_FIELD(arg1, s32 *, 0) == 0) && (M2C_FIELD(arg1, s32 *, 4) == 0) && (M2C_FIELD(arg1, s32 *, 8) == 0)) {
        return 0;
    }
    func_0209955c(arg1, arg1);
    if ((M2C_FIELD(arg1, s32 *, 0) != 0) || (M2C_FIELD(arg1, s32 *, 4) != 0) || (M2C_FIELD(arg1, s32 *, 8) != 0)) {
        return 1;
    }
    return 0;
}
