/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209085c(s32, s32);                        /* extern */

s32 func_0208e3b8(void *arg0) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0xC);
    if (!(M2C_FIELD(temp_r2, s32 *, 4) & 2)) {
        return M2C_FIELD(temp_r2, s32 *, 8);
    }
    return func_0209085c(M2C_FIELD(arg0, s32 *, 0x50), M2C_FIELD(temp_r2, s32 *, 8));
}
