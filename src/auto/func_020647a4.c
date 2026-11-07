/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct Obj {
    void **vt;
    int rc;
} Obj;
typedef struct Arr {
    Obj **data;
    int cnt;
} Arr;

void func_020647a4(Arr *a, int n) {
    int *c  = &a->cnt;
    Obj **p = a->data;
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
        o = *p;
        if (o != 0) {
            q  = &o->rc;
            *q = *q - 1;
            if (o->rc == 0) {
                Obj *t = *p;
                if (t != 0) {
                    (*(void (**)(void *))((u8 *) t->vt + 4))(t);
                }
            }
        }
        *p = 0;
        n--;
    } while (n != 0);
}
