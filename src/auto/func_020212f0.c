/* compiler: 1.2/b56 */
/* near start: 6 diffs with profile "1.2/sp2p3" */
#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} V3;

s32 func_020816ac(V3 *v);

s32 func_020212f0(u8 *a, u8 **b) {
    V3 s0;
    V3 s1;
    u8 *c;
    s32 *q;
    s32 sum;
    s32 a18;
    s32 q0;
    s32 a60;
    s32 c60;
    s64 p;
    s32 r;

    if ((*(s32 *) (a + 0xc) & 1) != 0) {
        return 0;
    }
    c    = *b;
    q    = (s32 *) (c + 0x18);
    a18  = *(s32 *) (a + 0x18);
    q0   = q[0];
    a60  = *(s32 *) (a + 0x60);
    c60  = *(s32 *) (c + 0x60);
    s1.x = a18 - q0;
    s1.y = *(s32 *) (a + 0x1c) - q[1];
    s1.z = *(s32 *) (a + 0x20) - q[2];
    s0   = s1;
    sum  = a60 + c60;
    r    = func_020816ac(&s0);
    p    = (s64) sum * sum + 0x800;
    if (r <= (s32) (p >> 12)) {
        return 1;
    }
    return 0;
}
