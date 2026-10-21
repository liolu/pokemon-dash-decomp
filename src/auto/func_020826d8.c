/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081edc(s32);                         /* extern */
M2C_UNK func_020823c8(void *);                      /* extern */

void *func_020826d8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) != M2C_FIELD(arg0, s32 *, 8)) {
        do {
            func_020823c8(arg0);
        } while (M2C_FIELD(arg0, s32 *, 4) != M2C_FIELD(arg0, s32 *, 8));
    }
    func_02081edc(M2C_FIELD(arg0, s32 *, 0));
    return arg0;
}
