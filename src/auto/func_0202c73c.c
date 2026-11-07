/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct R {
    void **vt;
    int rc;
} R;
typedef struct N {
    struct N *prev;
    struct N *next;
    R *ref;
} N;

void func_02081f64(N *);

void func_0202c73c(N **out, int *count, N **cur) {
    N *n = *cur;
    R *r;
    *cur          = n->next;
    n->prev->next = n->next;
    n->next->prev = n->prev;
    r             = n->ref;
    if (r != 0) {
        int *q = &r->rc;
        *q     = *q - 1;
        if (r->rc == 0) {
            R *o = n->ref;
            if (o != 0) {
                (*(void (**)(void *))(*(u8 **) o + 4))(o);
            }
        }
    }
    n->ref = 0;
    func_02081f64(n);
    *count = *count - 1;
    *out   = *cur;
}
