/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct S {
    u8 pad[4];
    u8 b4;
    u8 pad2[0x9c - 5];
    u8 f;
} S;
extern S *data_020d6560;
extern void func_0209c208(void *);

void func_0207c8e8(S *s) {
    u8 *p;
    if (s->f & 2) {
        p  = &s->f;
        *p = *p | 1;
        return;
    }
    data_020d6560 = s;
    if ((s->f & 0x12) == 0) {
        do {
            func_0209c208(&s->b4);
        } while ((s->f & 0x12) == 0);
    }
    p             = &s->f;
    *p            = *p & ~0x10;
    data_020d6560 = 0;
}
