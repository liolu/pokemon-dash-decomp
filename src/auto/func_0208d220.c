/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208d3e8(void *, s32);                 /* extern */

s32 func_0208d220(void *arg0, void *arg1, void *arg2) {
    if ((arg2 != NULL) && ((M2C_FIELD(arg1, s32 *, 0x14) != M2C_FIELD(arg1, s32 *, 0xC)) ||
                           (M2C_FIELD(arg1, s32 *, 0x10) != M2C_FIELD(arg1, s32 *, 8)))) {
        func_0208d3e8(arg0,
                      (0xFFF & ((s32) (M2C_FIELD(arg2, s32 *, 4) + 0x800) >> 0xC)) |
                          ((0x07FFF000 & (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), void **, 8), s32 *, 4) << 0xC)) |
                           0x30000000));
        return 1;
    }
    return 0;
}
