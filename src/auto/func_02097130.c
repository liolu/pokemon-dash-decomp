/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02095750(s32, M2C_UNK);                /* extern */
s32 func_020957ac(s32, u16);                        /* extern */
s32 func_02096fb8(void *);                          /* extern */

s32 func_02097130(void *arg0) {
    if (func_020957ac(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (func_02096fb8(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    func_02095750(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
