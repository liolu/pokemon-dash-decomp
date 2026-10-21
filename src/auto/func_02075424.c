/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207550c(s32, M2C_UNK, s32);           /* extern */

void func_02075424(void *arg0, M2C_UNK arg1) {
    func_0207550c(M2C_FIELD(arg0, s32 *, 0x14), arg1, M2C_FIELD(arg0, s32 *, 0x10));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x40000000);
}
