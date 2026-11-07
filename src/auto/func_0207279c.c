/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct R {
    void *vt;
    s32 rc;
} R;

void func_020771d4(u8 **it, u8 *x, u8 *w);

void func_0207279c(R **out, u8 *x, s32 r, ...) {
    u8 *it;
    R *t;
    func_020771d4(&it, x + 0x38, (u8 *) &r);
    if (it == x + 0x3c) {
        *out = 0;
        return;
    }
    *out = *(R **) (it + 0x10);
    t    = *out;
    if (t != 0) {
        s32 *c = &t->rc;
        *c     = *c + 1;
    }
}
