/* compiler: 1.2/b56 */
#include "m2c.h"
typedef struct S {
    u8 pad[4];
    u16 f;
    u8 pad2[18];
    s32 x;
} S;
u32 func_0207455c(S *s, s32 x) {
    u32 r;
    u16 *p = &s->f;
    s->x   = x;
    *p |= 0xC004;
    r = s->f & 0x10;
    if (r == 0) {
        r  = *p | 0x2000;
        *p = r;
    }
    return r;
}
