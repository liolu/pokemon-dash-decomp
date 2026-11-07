/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_020714ec(s32, s32, s32, s32);
s32 func_020704f0(u8 *p, s32 a, s32 b, s32 c) {
    if (p != 0) {
        do {
            if (*(s32 *) (p + 8) != 0 && (p[0] & 2)) {
                if (func_020714ec(*(s32 *) (p + 8), a, b, c) == 0) {
                    return 0;
                }
            }
            if ((p[0] & 1) == 0) {
                break;
            }
            p = *(u8 **) (p + 4);
        } while (p != 0);
    }
    return 1;
}
