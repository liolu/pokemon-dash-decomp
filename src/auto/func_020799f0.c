/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02079c28(void *, u8 *, s32, s32);
void func_02079a34(void *, s32);

void *func_020799f0(void *arg0, s32 arg1, s32 arg2, s32 arg3, ...) {
    u8 sp0;
    u8 b;

    b   = *(u8 *) &arg1;
    sp0 = b;
    func_02079c28(arg0, &sp0, arg2, b);
    func_02079a34(arg0, arg2);
    return arg0;
}
