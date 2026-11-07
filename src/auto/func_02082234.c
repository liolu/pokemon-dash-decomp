/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u32 func_0209dc94();

u32 func_02082234(u32 arg0, u32 arg1, s32 arg2) {
    s32 var_r2;
    u16 temp_r0;
    u8 *var_r1;
    u8 *var_r3;
    u32 var_r0;

    var_r2 = arg2;
    if (arg0 == arg1) {
        return arg0;
    }
    if (var_r2 == 0) {
        return arg0;
    }
    if (arg0 > arg1) {
        return func_0209dc94();
    }
    var_r3 = (u8 *) (arg0 + var_r2);
    var_r0 = var_r2 & 1;
    var_r1 = (u8 *) (arg1 + var_r2);
    if (var_r0 != 0) {
        var_r3 -= 1;
        var_r0 = *(u8 *) var_r3;
        var_r2 -= 1;
        var_r1 -= 1;
        *var_r1 = (u8) var_r0;
    }
    if (var_r2 == 0) {
        return (u32) var_r0;
    }
    do {
        var_r3 -= 2;
        temp_r0 = *(u16 *) var_r3;
        var_r2 -= 2;
        var_r1 -= 2;
        *(u16 *) var_r1 = temp_r0;
    } while (var_r2 != 0);
    return (u32) temp_r0;
}
