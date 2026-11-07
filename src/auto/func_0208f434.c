/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct Obj {
    void **vt;
    int rc;
} Obj;
extern void func_0208f4bc(Obj **);

void func_0208f434(Obj **out) {
    Obj *sp0;
    Obj *t;
    int *q;
    func_0208f4bc(&sp0);
    *out = sp0;
    t    = *out;
    if (t != 0) {
        q  = &t->rc;
        *q = *q + 1;
    }
    if (sp0 != 0) {
        q  = &sp0->rc;
        *q = *q - 1;
        if (sp0->rc == 0) {
            if (sp0 != 0) {
                (*(void (**)(void *))((u8 *) sp0->vt + 4))(sp0);
            }
        }
    }
    sp0 = 0;
}
