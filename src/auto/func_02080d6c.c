/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02080d6c(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r1;
    u16 temp_lr;
    u16 temp_r3;
    u32 temp_r0;

    var_r1  = arg1;
    temp_lr = arg2 - var_r1;
    temp_r3 = arg0 - var_r1;
    if ((u32) temp_r3 < (u32) temp_lr) {
        return arg0;
    }
    temp_r0 = 0x10000 - temp_lr;
    if ((u32) (u16) (0x10000 - ((s32) (temp_r0 + (temp_r0 >> 0x1F)) >> 1)) >= (u32) temp_r3) {
        var_r1 = arg2;
    }
    return var_r1;
}
