/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209cd9c(s32, M2C_UNK);                /* extern */
extern s32 data_020da2a0;

s32 func_0209ec70(s32 arg0) {
    func_0209cd9c(data_020da2a0, 0x280);
    return M2C_FIELD(((arg0 * 0x24) + data_020da2a0), s32 *, 0x40);
}
