/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02099494();                    /* extern */
extern u8 data_020d6760;

void func_02082d88(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK saved_reg_r4;
    s32 var_r0;
    s32 var_r4;
    u8 *temp_r2;

    var_r4 = saved_reg_r4;
    if ((arg1 > 0x20) || (arg1 <= -0x20)) {
        var_r4 = func_02099494(0x1000);
    }
    if ((arg2 > 0x20) || (arg2 <= -0x20)) {
        var_r0 = func_02099494(0x1000, arg2);
    } else if (arg2 >= 0) {
        var_r0 = 0x7FFFF;
    } else {
        var_r0 = -0x80000;
    }
    temp_r2                   = (u8 *) &data_020d6760 + (M2C_FIELD(arg0, s32 *, 0) << 0xA) + (M2C_FIELD(arg0, s32 *, 4) << 5);
    *(s16 *) (temp_r2 + 6)    = (s16) (var_r4 >> 4);
    *(s16 *) (temp_r2 + 0xE)  = 0;
    *(s16 *) (temp_r2 + 0x16) = 0;
    *(s16 *) (temp_r2 + 0x1E) = (s16) (var_r0 >> 4);
}
