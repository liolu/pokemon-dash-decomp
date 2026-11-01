/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s64 func_020b29dc(s32, s32);

void func_0208b6f0(void *arg0, void *arg1) {
    u8 *a = (u8 *) arg0;
    u8 *b = (u8 *) arg1;
    s32 r4;
    s32 r1;
    s32 r2;
    s32 r3;

    r4 = *(s32 *) b;
    if (r4 == 0) {
        r1 = 0;
    } else {
        r1 = (s32) (func_020b29dc(*(s32 *) (b + 8) + *(s32 *) (b + 4), r4) >> 32);
    }
    r3                 = *(s32 *) (b + 0xC);
    r2                 = *(s32 *) (b + 8);
    *(s32 *) a         = r3 + r1 * 4;
    *(s32 *) (a + 4)   = r3;
    *(s32 *) (a + 8)   = r3 + r2 * 4;
    *(s32 *) (a + 0xC) = r3 + r4 * 4;
}
