/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct R {
    void **vt;
    s32 rc;
} R;

void func_02092520(R **p);
void func_02048c58(void *a, R **p);

void func_02048be4(void *a) {
    R *p;
    func_02092520(&p);
    func_02048c58(a, &p);
    if (p != 0) {
        s32 *c = &p->rc;
        *c     = *c - 1;
        if (p->rc == 0 && p != 0) {
            (*(void (**)(R *))((u8 *) p->vt + 4))(p);
        }
    }
    p = 0;
}
