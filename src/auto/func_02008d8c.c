/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02062ff8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_02008d8c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x188) != 0) {
        func_02062ff8(0, 6, 1);
        M2C_FIELD(arg0, u8 *, 0x188) = 0U;
    }
    if (M2C_FIELD(arg0, u8 *, 0x189) != 1) {
        return;
    }
    func_02062ff8(0, 9, 1);
    M2C_FIELD(arg0, u8 *, 0x189) = 0U;
}
