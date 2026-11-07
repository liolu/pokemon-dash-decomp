/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct L {
    s32 head;
    s32 tail;
    u16 cnt;
    u16 off;
} L;

typedef struct N {
    s32 prev;
    s32 next;
} N;

void func_020953f4(L *l, u8 *obj) {
    N *n  = (N *) (obj + l->off);
    s32 p = n->prev;
    if (p == 0) {
        l->head = n->next;
    } else {
        ((N *) (p + l->off))->next = n->next;
    }
    p = n->next;
    if (p == 0) {
        l->tail = n->prev;
    } else {
        *(s32 *) (p + l->off) = n->prev;
    }
    n->prev = 0;
    n->next = 0;
    {
        u16 *c = &l->cnt;
        *c     = *c - 1;
    }
}
