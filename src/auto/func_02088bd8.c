/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02099494();                        /* extern */

s32 func_02088bd8(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 0x98) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0xB0) == 0x1000) {
            return M2C_FIELD(arg0, s32 *, 0xA8);
        }
        return func_02099494(M2C_FIELD(arg0, s32 *, 0xA8));
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0x88);
    if (temp_r1 == NULL) {
        return -0x1000;
    }
    return func_02099494(M2C_FIELD(temp_r1, s32 *, 4), M2C_FIELD(temp_r1, s32 *, 0x10));
}
