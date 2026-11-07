/* compiler: 1.2/b56 */
#include "m2c.h"
typedef struct R {
    void **vt;
    s32 cnt;
} R;
typedef struct S {
    void *vt;
    u8 p4[8];
    R *rc;
    u8 f10[4];
    u8 f14[4];
    s32 f18;
} S;
extern u8 data_020ccfdc;
extern u8 data_020cd5f8;
extern void func_0202073c(void *, void *, void *, void *);
extern void func_02081f64(S *);
S *func_02020364(S *s) {
    void *sp0;
    s32 sp4;
    void *sp8;
    s->vt = &data_020cd5f8;
    sp8   = s->f14;
    sp4   = s->f18;
    func_0202073c(&sp0, s->f10, &sp4, &sp8);
    if (s->rc != 0) {
        R *r   = s->rc;
        s32 *q = &r->cnt;
        *q     = *q - 1;
        if (r->cnt == 0) {
            R *o = s->rc;
            if (o != 0) {
                (*(void (**)(R *))((u8 *) o->vt + 4))(o);
            }
        }
    }
    s->rc = 0;
    s->vt = &data_020ccfdc;
    func_02081f64(s);
    return s;
}
