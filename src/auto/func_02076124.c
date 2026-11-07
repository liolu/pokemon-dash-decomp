/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct S {
    u32 d;
    u32 pad;
    u32 base;
    u32 **tbl;
    u32 idx;
} S;
u32 *func_02076124(S *s) {
    u32 i = s->idx;
    u32 n = s->base + (i >> 7);
    return &s->tbl[n % s->d][i & 0x7f];
}
