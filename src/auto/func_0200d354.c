/* compiler: 1.2/b56 */
#include "m2c.h"
typedef struct R {
    void **vt;
    int rc;
} R;
extern u8 data_020ccfdc[];
extern u8 data_020cd10c[];
extern u8 data_020cd140[];
u8 *func_0200d354(u8 *p) {
    R *r;
    R *o;
    int *q;
    *(u8 **) p = data_020cd10c;
    r          = *(R **) (p + 8);
    if (r) {
        q  = &r->rc;
        *q = *q - 1;
        if (r->rc == 0) {
            o = *(R **) (p + 8);
            if (o) {
                ((void (*)(R *)) o->vt[1])(o);
            }
        }
    }
    *(R **) (p + 8) = 0;
    *(u8 **) p      = data_020cd140;
    *(u8 **) p      = data_020ccfdc;
    return p;
}
