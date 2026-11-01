/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_02002704(s32, s32, s32);
extern s32 data_020d4dc4;

s32 func_020026b8(s32 arg0) {
    s32 var_r5;
    s32 temp_r4;

    temp_r4 = (data_020d4dc4 & 1) * 0xE;
    var_r5  = 0;
    do {
        func_02002704(var_r5 + temp_r4, var_r5, arg0);
        var_r5 += 1;
    } while (var_r5 < 0xE);
    return 1;
}
