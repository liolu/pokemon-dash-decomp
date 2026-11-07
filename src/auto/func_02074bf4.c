/* compiler: 1.2/b56 */
#include "m2c.h"
typedef struct B {
    s32 a;
    s32 b;
    s32 c;
} B;
typedef struct S {
    u8 pad[4];
    u16 f;
    u8 pad2[0x12];
    B v;
} S;
u32 func_02074bf4(S *s, B *b) {
    u32 r;
    u16 *p;
    s->v.a = b->a;
    s->v.b = b->b;
    s->v.c = b->c;
    p      = &s->f;
    *p |= 0xC004;
    r = s->f & 0x10;
    if (r == 0) {
        r  = *p | 0x2000;
        *p = r;
    }
    return r;
}
