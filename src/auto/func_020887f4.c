/* compiler: 1.2/b56 */
/* near start: 2 diffs with profile "1.2/sp2p3" */
#include "m2c.h"

s32 func_0200d5c0(void *p);
void func_020816e4(s32 *out, void *a, s32 b);
void *func_0206ec9c(void *p);

s32 func_020887f4(void *arg0, void *arg1) {
    volatile s32 vec[3];
    void *a;
    void *b;
    void *c;
    s32 res;
    s32 *obj;
    s32 *q;

    a   = *(void **) ((u8 *) arg0 + 0x60);
    b   = *(void **) ((u8 *) a + 8);
    c   = *(void **) ((u8 *) b + 0xC);
    res = func_0200d5c0(c);
    func_020816e4((s32 *) vec, arg1, res);
    obj = *(s32 **) ((u8 *) arg0 + 0x64);
    q   = (s32 *) ((u8 *) obj + 0x20);
    if (vec[0] == q[0]) {
        if (vec[1] == q[1]) {
            if (vec[2] == q[2]) {
                return 1;
            }
        }
    }
    obj[8]  = vec[0];
    obj[9]  = vec[1];
    obj[10] = vec[2];
    obj[0]  = obj[0] | 8;
    if ((obj[0] & 0x10) == 0) {
        func_0206ec9c(obj);
    }
    return 1;
}
