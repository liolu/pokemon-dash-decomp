/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void func_0206fbdc(void);
extern s32 func_0206ef1c(void *, void *, void *);

void func_0206f2e0(u8 *arg0, u32 *arg1) {
    u32 fl;
    u8 *n;
    func_0206fbdc();
    fl = *(u32 *) arg0;
    if ((fl & 2) != 0) {
        return;
    }
    if (((*arg1 << 11) & fl) == 0) {
        return;
    }
    {
        u8 *t = *(u8 **) (arg0 + 0x100);
        if (t != 0) {
            func_0206ef1c(arg0, arg1, ((void **) t)[arg0[0x104]]);
            return;
        }
    }
    n = *(u8 **) (arg0 + 0x14);
    if (n == 0) {
        return;
    }
    do {
        func_0206ef1c(arg0, arg1, n);
        n = *(u8 **) (n + 4);
    } while (n != 0);
}
