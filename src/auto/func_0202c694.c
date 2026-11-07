/* compiler: 1.2/b56 */
#include "m2c.h"
typedef struct R {
    void **vt;
    s32 cnt;
} R;
typedef struct N {
    struct N *a;
    struct N *b;
    R *rc;
} N;
extern void func_02081f64(N *);
void func_0202c694(N **out, s32 *cnt, N **pos) {
    N *n    = *pos;
    *pos    = n->b;
    n->a->b = n->b;
    n->b->a = n->a;
    if (n->rc != 0) {
        R *r   = n->rc;
        s32 *q = &r->cnt;
        *q     = *q - 1;
        if (r->cnt == 0) {
            R *o = n->rc;
            if (o != 0) {
                (*(void (**)(R *))((u8 *) o->vt + 4))(o);
            }
        }
    }
    n->rc = 0;
    func_02081f64(n);
    *cnt -= 1;
    *out = *pos;
}
