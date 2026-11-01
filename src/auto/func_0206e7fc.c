/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0206e864(u8 *, u8 *, s32, s32);

s32 func_0206e7fc(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 var_r6;
    s32 temp_r0;
    u8 *p;
    u8 *q;

    var_r6 = func_0206e864(arg0, arg1, arg2, arg3);
    p      = *(u8 **) (arg0 + 0x10);
    q      = *(u8 **) arg1;
    while (p != NULL && q != NULL) {
        temp_r0 = func_0206e7fc(p, q, arg2, arg3);
        if (var_r6 == 0) {
            var_r6 = temp_r0;
        }
        p = *(u8 **) (p + 8);
        q = *(u8 **) (q + 4);
    }
    return var_r6;
}
