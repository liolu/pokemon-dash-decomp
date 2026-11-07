/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct T {
    int a, b, c;
} T;
typedef struct P {
    u8 pad[0xe4];
    u16 h;
} P;
typedef struct S {
    u8 pad[0x154];
    P *p;
    u8 pad2[0x1b4 - 0x158];
    int st;
    int b8;
    int bc;
} S;
extern T data_020cd1d8;
extern int func_02045e6c(T *, int);

int func_020107a8(S *s, int arg) {
    T sp;
    int lr;
    if (s->st == 9) {
        if (s->p->h == 0) {
            lr = s->bc;
            if (lr < 5) {
                int ip = s->b8;
                T *q   = &sp;
                *q     = data_020cd1d8;
                sp.b   = ip;
                sp.c   = lr + 1;
                if (func_02045e6c(q, arg) != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
