/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205f820(void *);                      /* extern */
M2C_UNK func_02060c58(s32);                         /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */

void func_0205e688(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x700);
    if (temp_r4 != 0) {
        func_02060c58(temp_r4);
        func_02081f64(temp_r4);
    }
    M2C_FIELD(arg0, s32 *, 0x700) = 0;
    if (M2C_FIELD(arg0, s32 *, 0xEC) != 0xD) {
        return;
    }
    func_0205f820(arg0);
}
