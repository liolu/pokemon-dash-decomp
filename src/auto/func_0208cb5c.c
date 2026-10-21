/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200d5c0(s32);                         /* extern */
M2C_UNK func_020816e4(M2C_UNK, void *, s32);        /* extern */
s32 func_02099478();                                /* extern */

s32 func_0208cb5c(void *arg0, M2C_UNK arg1) {
    func_0200d5c0(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), void **, 8), s32 *, 0xC));
    func_020816e4(arg1, arg0 + 0xA0, func_02099478());
    return 1;
}
