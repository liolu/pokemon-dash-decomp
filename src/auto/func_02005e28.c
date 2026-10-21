/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u8 *func_020087e0(M2C_UNK);                         /* extern */

s32 func_02005e28(void) {
    u8 *temp_r0;

    temp_r0 = func_020087e0(0);
    if ((temp_r0 != NULL) && (*temp_r0 == 2)) {
        return 1;
    }
    return 0;
}
