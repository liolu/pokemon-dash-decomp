/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209ec70(u8);                              /* extern */

s32 func_020962bc(void **arg0) {
    void *temp_r1;

    temp_r1 = *arg0;
    if (temp_r1 == NULL) {
        return 0;
    }
    if (M2C_FIELD(temp_r1, u8 *, 0x2D) == 0) {
        return 0;
    }
    return func_0209ec70(M2C_FIELD(temp_r1, u8 *, 0x3C));
}
