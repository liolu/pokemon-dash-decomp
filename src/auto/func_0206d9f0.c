/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_020d6114;

s32 func_0206e058(s32);
s32 func_0206daac(s32, s32);
s32 func_0206e03c(s32);
s32 func_0206e010(s32);
void func_0209d6b4(void);

s32 func_0206d9f0(s32 key, s32 *out, s32 flag) {
    s32 lo;
    s32 hi;
    s32 mid;
    s32 c;

    lo = 0;
    hi = data_020d6114;
    if (hi != 0) {
        do {
            mid = (lo + hi) / 2;
            c   = func_0206daac(key, func_0206e058(mid));
            if (c == 0) {
                if (out != NULL) {
                    *out = func_0206e03c(mid);
                }
                return func_0206e010(mid);
            }
            if (c < 0) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        } while (lo != hi);
    }
    if (out != NULL) {
        *out = 0;
    }
    if (flag != 0) {
        func_0209d6b4();
        for (;;) {
        }
    }
    return 0;
}
