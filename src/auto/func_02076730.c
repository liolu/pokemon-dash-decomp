/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct B {
    s32 x;
    u8 fl;
} B;
typedef struct G {
    s32 x;
    B *cur;
} G;

extern G *data_020d6540;

s32 func_02076730(B *p) {
    G *g = data_020d6540;
    B *c = g->cur;
    B *r;
    if (c == p) {
        return 1;
    }
    r = p;
    if (p == 0) {
        r = c;
    }
    c = g->cur;
    if (c != 0 && c == r) {
        u8 *q = &c->fl;
        *q &= 0xfd;
        g->cur = 0;
    }
    g->cur = p;
    {
        u8 *q = &g->cur->fl;
        *q |= 2;
    }
    return 1;
}
