/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081edc();                         /* extern */
M2C_UNK func_020b52b0();        /* extern */

void func_020b51f4(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    if (arg0 == NULL) {
        return;
    }
    if (arg3 != 0) {
        func_020b52b0(arg0, M2C_FIELD(arg0, s32 *, -4), arg1);
    }
    func_02081edc(arg0 - arg2);
}
