/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_0207d878(void *, s32 *, s32, s32, s32, s32);

void func_0207d830(void *arg0, s32 arg1, s32 arg2) {
    s32 a[4];

    a[3] = 0x1000;
    a[0] = 0x1000;
    a[2] = 0;
    a[1] = 0;
    func_0207d878(arg0, a, arg1, arg2, arg1, arg2);
}
