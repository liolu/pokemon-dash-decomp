/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Q {
    u8 pad[8];
    u8 *x;
} Q;

typedef struct P {
    u8 pad[0x30];
    s32 f30;
} P;

typedef struct T {
    u8 pad[0x1c];
    s32 f1c;
} T;

typedef struct U {
    u8 pad[8];
    T *t;
} U;

typedef struct W {
    u8 pad[0x60];
    U *u;
    u8 pad2[0xfc];
    P *p;
} W;

s32 func_0200d5c0(s32 v);
s32 func_02087f48(u8 *p);
s32 *func_02088068(s32 a, s32 b);

u32 func_020874c0(W *w) {
    s32 *r;
    if (func_02087f48((u8 *) w + 0x15c) != 0) {
        r = func_02088068(w->p->f30, 1);
        if (r == 0) {
            r = func_02088068(w->u->t->f1c, 1);
        }
        if (r != 0) {
            return (u32) ((func_0200d5c0(r[1]) + 0x800) * 16) >> 16;
        }
    }
    return 0x222;
}
