/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0201bf94(s32 v);

u32 func_0203c730(u8 *a, s32 n, ...) {
    u32 r4;
    u32 t1;
    u32 t2;
    u32 *m;

    r4 = *(u32 *) (a + 8);
    if ((u32) n > 0x3fffffff - r4) {
        func_0201bf94(0x3fffffff - r4);
    }
    if (r4 < 0x15555555) {
        t1 = ((r4 + 1) * 3) / 5;
        m  = (t1 < (u32) n) ? (u32 *) &n : &t1;
        return r4 + *m;
    }
    if (r4 < 0x2aaaaaaa) {
        t2 = (r4 + 1) / 2;
        m  = (t2 < (u32) n) ? (u32 *) &n : &t2;
        return r4 + *m;
    }
    return 0x3fffffff;
}
