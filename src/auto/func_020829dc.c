/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct S {
    int pad0;
    int a;
    int b;
    int c;
    u8 f;
    u8 pad[3];
    int d;
} S;
extern u8 data_020d6760[];

void func_020829dc(S *s, int v, int *p) {
    int r1;
    int ip;
    unsigned *t;
    int sh;
    s->c = v;
    if (p != 0) {
        r1 = p[1];
    } else {
        r1 = 0;
    }
    s->d = r1;
    sh   = s->d;
    if (s->f != 0) {
        ip = s->c;
    } else {
        ip = 0x200;
    }
    t = (unsigned *) (data_020d6760 + (s->a << 10) + s->b * 8);
    if (ip != 0x100 && ip != 0x300) {
        *t = (*t & 0xc1fffcff) | ip;
    } else {
        *t = (*t & 0xc1fffcff) | ip | (sh << 25);
    }
}
