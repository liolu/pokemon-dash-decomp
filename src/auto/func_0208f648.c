/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct Obj {
    void **vt;
    int rc;
} Obj;
typedef struct D {
    void *vt;
    u8 pad[0x14];
    Obj *ref;
} D;
extern u8 data_020d43c4, data_020d4414, data_020ccfdc;
extern void func_02090e38(void *);

D *func_0208f648(D *d) {
    Obj *o;
    int *q;
    d->vt = &data_020d43c4;
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
    func_02090e38((u8 *) d + 0xc);
    d->vt = &data_020d4414;
    d->vt = &data_020ccfdc;
    return d;
}
