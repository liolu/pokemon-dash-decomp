/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct Nd {
    struct Nd *prev;
    struct Nd *next;
} Nd;

typedef struct H {
    s32 cnt;
    Nd n;
} H;

typedef struct Hd {
    Nd *first;
} Hd;

void func_0207d2ac(s32 *total, Hd **dst, H *src) {
    Nd *n;
    Nd *last;
    Nd *first;
    Hd *d;
    if (src->cnt == 0) {
        return;
    }
    n              = &src->n;
    last           = n->next;
    first          = n->prev;
    n->next        = n;
    n->prev        = n->next;
    d              = *dst;
    d->first->next = last;
    last->prev     = d->first;
    d->first       = first;
    first->next    = (Nd *) d;
    *total += src->cnt;
    src->cnt = 0;
}
