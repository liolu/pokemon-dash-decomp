/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02021164();                            /* extern */
s32 func_02088bd8(s32);                             /* extern */
s32 func_02088fbc(void *, s32);                     /* extern */

s32 func_02020f50(void *arg0) {
    s32 temp_r0;
    void *temp_r4;

    func_02021164();
    temp_r4 = M2C_FIELD(arg0, void **, 0x14);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x14) & 0x80;
    if (temp_r0 != 0) {
        return temp_r0;
    }
    return func_02088fbc(temp_r4, func_02088bd8(M2C_FIELD(arg0, s32 *, 0x10)));
}
