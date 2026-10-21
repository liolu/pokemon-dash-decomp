/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207bba4(s32, M2C_UNK, s32, s32);      /* extern */
M2C_UNK func_0207c620();                            /* extern */

s32 func_02069944(void *arg0, void *arg1) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg1, void **, 0x18);
    func_0207bba4(M2C_FIELD(arg0, s32 *, 0xC8) + 0x138, 0xC, M2C_FIELD(temp_r1, s32 *, 0), M2C_FIELD(temp_r1, s32 *, 4));
    func_0207c620();
    return 1;
}
