/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
} P;
typedef struct {
    u8 pad[0x2c];
    P *tab;
    u32 n;
} Q;
typedef struct {
    u8 pad[8];
    Q *q;
} H;

s32 func_0208fd20(H *arg0, s32 arg1) {
    Q *t;
    u32 i;
    if (arg1 == 0x18000000) {
        return 0;
    }
    t = arg0->q;
    i = arg1 & 0xFFF;
    if (i >= t->n) {
        return 0;
    }
    if (t->tab[i].a != 0x18000000 && t->tab[i].b != 0) {
        return t->tab[i].b;
    }
    return 0;
}
