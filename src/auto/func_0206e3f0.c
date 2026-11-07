/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef s32 (*Cb)(s32, s32);

s32 func_020704f0(s32 a, Cb b, s32 c, s32 d);
s32 func_0206e3f0(s32 *arg0, Cb arg1, s32 arg2, s32 arg3);

s32 func_0206e3f0(s32 *arg0, Cb arg1, s32 arg2, s32 arg3) {
    s32 *var;

    if (arg3 & 1) {
        if ((arg0[63] != 0) && (arg1(arg0[63], arg2) == 0)) {
            return 0;
        }
    }
    if ((arg0[5] != 0) && ((arg0[0] & 0x80000000) != 0) && (func_020704f0(arg0[5], arg1, arg2, arg3) == 0)) {
        return 0;
    }
    if ((arg0[0] & 0x40000000) != 0) {
        var = (s32 *) arg0[4];
        if (var != NULL) {
            do {
                if (func_0206e3f0(var, arg1, arg2, arg3) == 0) {
                    return 0;
                }
                if ((var[0] & 0x20000000) == 0) {
                    break;
                }
                var = (s32 *) var[2];
            } while (var != NULL);
        }
    }
    return 1;
}
