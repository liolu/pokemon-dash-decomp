/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct N {
    struct N *a;
    struct N *b;
} N;
extern void func_02081f64(N *);
void func_0207ce2c(N **out, s32 *cnt, N **first, N **last) {
    N *l = *last;
    N *f = *first;
    N *p;
    if (f == l) {
        *out = l;
        return;
    }
    p       = l->a;
    f->a->b = p->b;
    p->b->a = f->a;
    if (*first != *last) {
        do {
            N *o   = *first;
            *first = o->b;
            func_02081f64(o);
            *cnt -= 1;
        } while (*first != *last);
    }
    *out = *last;
}
