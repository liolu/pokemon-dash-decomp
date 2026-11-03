/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0209dba4(s32 a, s32 b, s32 c, s32 d);
extern s32 data_020d4534;

void func_0207f1f8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r3 = arg3;
    s32 sum;

    if (var_r3 == 0) {
        var_r3 = *(s32 *) (arg0 + 8) - arg2;
    }
    sum = *(s32 *) (arg0 + 0xC) + *(s32 *) (arg0 + 4);
    func_0209dba4(data_020d4534, arg1, sum + arg2, var_r3);
}
