/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct N {
    u8 pad[4];
    const char **name;
    struct N *sib;
    int pad3;
    struct N *child;
} N;
extern int _ZN4cstd6strcmpEPKcS1_(const char *, const char *);

N *func_0206fadc(N *n, const char *s) {
    N *c;
    N *r;
    const char **p = n->name;
    if (p != 0 && *p != 0 && _ZN4cstd6strcmpEPKcS1_(s, *p) == 0) {
        return n;
    }
    c = n->child;
    if (c != 0) {
        do {
            r = func_0206fadc(c, s);
            if (r != 0) {
                return r;
            }
            c = c->sib;
        } while (c != 0);
    }
    return 0;
}
