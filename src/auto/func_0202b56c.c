/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02088c4c(s32, s32, M2C_UNK);               /* extern */

s32 func_0202b56c(void *arg0) {
    if (func_02088c4c(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), 0) == 0) {
        return 1;
    }
    return 0;
}
