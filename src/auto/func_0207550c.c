/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020754bc(s32 *a, s32 b, s32 c);

void func_0207550c(s32 *arg0, s32 arg1, s32 arg2) {
    s32 *p = arg0;
    if (p == 0) {
        return;
    }
    do {
        func_020754bc(p, arg1, arg2);
        p = (s32 *) *p;
    } while (p != 0);
}
