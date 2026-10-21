/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02088004();                            /* extern */

void func_02087f5c(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 temp_r2;

    func_02088004();
    temp_r2 = arg3 & 0xFFF;
    if (arg3 == 0x08000000) {
        return;
    }
    if (temp_r2 >= (u32) M2C_FIELD(arg1, u32 *, 0x40)) {
        return;
    }
    if (((s32) (arg3 & 0x07FFF000) >> 0xC) != M2C_FIELD(arg1, s32 *, 4)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0) = arg2;
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((temp_r2 * 0x34) + M2C_FIELD(arg1, s32 *, 0x3C));
    M2C_FIELD(arg0, s32 *, 8) = arg4;
}
