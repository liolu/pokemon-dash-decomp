/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct R {
    void **vt;
    s32 rc;
} R;

typedef struct O {
    void *vt;
    u8 pad[0x14];
    R *p;
} O;

extern u8 data_020cd624;
extern u8 data_020ccfdc;

O *func_020201d4(O *o) {
    R *p;
    o->vt = &data_020cd624;
    p     = o->p;
    if (p != 0) {
        s32 *c = &p->rc;
        *c     = *c - 1;
        if (p->rc == 0) {
            p = o->p;
            if (p != 0) {
                (*(void (**)(R *))((u8 *) p->vt + 4))(p);
            }
        }
    }
    o->p  = 0;
    o->vt = &data_020ccfdc;
    return o;
}
