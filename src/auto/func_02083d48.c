/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void func_02083ee0(void *, void *);
struct Q {
    u16 a, b, c, d;
};
extern struct Q *data_020d6f60;
extern struct Q *data_020d6f64;
extern struct Q *data_020d6f68;

void func_02083d48(void) {
    struct Q *s = data_020d6f68;
    struct Q *d = data_020d6f60;
    d->a        = s->a;
    d->b        = s->b;
    d->c        = s->c;
    d->d        = s->d;
    func_02083ee0(data_020d6f64, data_020d6f60);
    s    = data_020d6f64;
    d    = data_020d6f68;
    d->a = s->a;
    d->b = s->b;
    d->c = s->c;
    d->d = s->d;
}
