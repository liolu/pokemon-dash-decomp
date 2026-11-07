/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct Obj {
    void **vt;
    int rc;
} Obj;
typedef struct E {
    int a;
    Obj *o;
} E;
typedef struct Arr {
    E *data;
    int cnt;
} Arr;

void func_0209219c(Arr *a, int n) {
    int *c  = &a->cnt;
    E *p    = a->data;
    int cnt = a->cnt;
    *c      = *c - n;
    p       = p + cnt;
    if (n == 0) {
        return;
    }
    do {
        Obj *o;
        int *q;
        p--;
        o = p->o;
        if (o != 0) {
            q  = &o->rc;
            *q = *q - 1;
            if (o->rc == 0) {
                Obj *t = p->o;
                if (t != 0) {
                    (*(void (**)(void *))((u8 *) t->vt + 4))(t);
                }
            }
        }
        p->o = 0;
        n--;
    } while (n != 0);
}
