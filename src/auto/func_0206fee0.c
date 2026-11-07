/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0206fee0(s32 *arg0);
s32 func_020708b0(s32 a);

s32 func_0206fee0(s32 *arg0) {
    s32 r5;

    r5 = 0;
    if ((arg0[2] != 0) && (func_0206fee0((s32 *) arg0[2]) != 0)) {
        r5 = 1;
    }
    if (r5 != 0) {
        arg0[0] = arg0[0] | 0x20000000;
    } else {
        arg0[0] = arg0[0] & ~0x20000000;
    }
    r5 = 0;
    if ((arg0[4] != 0) && (func_0206fee0((s32 *) arg0[4]) != 0)) {
        r5 = 1;
    }
    if (r5 != 0) {
        arg0[0] = arg0[0] | 0x40000000;
    } else {
        arg0[0] = arg0[0] & ~0x40000000;
    }
    r5 = 0;
    if ((arg0[5] != 0) && (func_020708b0(arg0[5]) != 0)) {
        r5 = 1;
    }
    if (r5 != 0) {
        arg0[0] = arg0[0] | 0x80000000;
    } else {
        arg0[0] = arg0[0] & ~0x80000000;
    }
    if ((arg0[63] != 0) || ((arg0[0] & 0xE0000000) != 0)) {
        return 1;
    }
    return 0;
}
