#include "m2c.h"

void func_020806a0(u8 *arg0, s32 arg1) {
    s32 var_r1;
    u8 *var_r0;
    u8 temp_r2;
    u8 temp_r2_2;

    var_r0 = arg0;
    var_r1 = arg1;
    if (var_r1 <= 0) {
        return;
    }
    do {
        temp_r2 = *var_r0;
        if ((temp_r2 != 0) && (((var_r0 += 1, ((s32) temp_r2 >= 0x81)) && ((s32) temp_r2 <= 0x9F)) ||
                               (((s32) temp_r2 >= 0xE0) && ((s32) temp_r2 <= 0xFC)))) {
            temp_r2_2 = *var_r0;
            if (((u32) temp_r2_2 >= 0x40U) && ((u32) temp_r2_2 <= 0xFCU)) {
                var_r0 += 1;
            }
        }
        var_r1 -= 1;
    } while (var_r1 > 0);
}
