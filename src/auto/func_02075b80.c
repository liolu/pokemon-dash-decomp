/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct S {
    u8 pad[4];
    u8 sub[12];
    u8 f;
    u8 pad2[8];
    u8 g;
    u8 pad3[0x16];
    s32 a;
    s32 b;
} S;
s32 func_02075eb0(void *p, u8 g);
s32 func_02075b80(S *s) {
    s32 r;
    r    = s->f & 0xf;
    s->a = s->b;
    s->b = func_02075eb0(s->sub, s->g);
    return r;
}
