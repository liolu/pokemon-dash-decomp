#include "m2c.h"

void func_020185f8(s32 arg0, u16 *arg1) {
    u16 *temp_r2;
    u16 *var_r1;
    u16 *var_r3;
    u16 temp_r0;

    var_r1 = arg1;
    var_r3 = arg0 + 0xE6;
    do {
        temp_r0 = *var_r1;
        var_r1  = (u16 *) ((s8 *) var_r1 + 2);
        temp_r2 = var_r3;
        *var_r3 = temp_r0;
        var_r3  = (u16 *) ((s8 *) var_r3 + 2);
    } while (*temp_r2 != 0);
}
