/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct Obj {
    void **vt;
    int rc;
} Obj;
typedef struct D {
    void *vt;
    u8 pad[4];
    Obj *ref;
} D;
extern u8 data_020cd7f8, data_020cd140, data_020ccfdc;
extern void func_02081f64(void *);

D *func_0202b494(D *d) {
    Obj *o;
    int *q;
    d->vt = &data_020cd7f8;
    o     = d->ref;
    if (o != 0) {
        q  = &o->rc;
        *q = *q - 1;
        if (o->rc == 0) {
            Obj *t = d->ref;
            if (t != 0) {
                (*(void (**)(void *))((u8 *) t->vt + 4))(t);
            }
        }
    }
    d->ref = 0;
    d->vt  = &data_020cd140;
    d->vt  = &data_020ccfdc;
    func_02081f64(d);
    return d;
}
