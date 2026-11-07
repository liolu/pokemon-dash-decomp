/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct R {
    void *vt;
    s32 rc;
} R;

void func_02077178(u8 **it, u8 *x, u8 *w);

void func_02072814(R **out, u8 *x, s32 r, ...) {
    u8 *it;
    R *t;
    func_02077178(&it, x + 0x2c, (u8 *) &r);
    if (it == x + 0x30) {
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
