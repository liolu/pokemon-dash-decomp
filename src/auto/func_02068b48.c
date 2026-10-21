/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204738c(s32, M2C_UNK);                /* extern */
M2C_UNK func_020699c4(s32, M2C_UNK);                /* extern */
M2C_UNK func_020699cc(s32, M2C_UNK);                /* extern */
M2C_UNK func_02086a48(s32, s32, M2C_UNK);           /* extern */

s32 func_02068b48(void *arg0) {
    func_020699c4(M2C_FIELD(arg0, s32 *, 0xC8), 0);
    func_020699cc(M2C_FIELD(arg0, s32 *, 0xC8), 0);
    func_02086a48(M2C_FIELD(arg0, s32 *, 0xC8), 0x08019086, 0x38000001);
    func_0204738c(M2C_FIELD(arg0, s32 *, 0xC0), 4);
    return 1;
}
