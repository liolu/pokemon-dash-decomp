/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0206e6d0(void *, void *, s32);

void func_0206e67c(void *arg0, void *arg1, s32 arg2) {
    void *p;
    void *q;
    func_0206e6d0(arg0, arg1, arg2);
    p = M2C_FIELD(arg0, void **, 0x10);
    q = *(void **) arg1;
    while (p != NULL && q != NULL) {
        func_0206e67c(p, q, arg2);
        p = M2C_FIELD(p, void **, 8);
        q = M2C_FIELD(q, void **, 4);
    }
}
