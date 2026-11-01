/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0207a3c4(void *, u8 *, s32, s32);
void func_0207a1ec(void *, s32);

void *func_0207a1a8(void *arg0, s32 arg1, s32 arg2, s32 arg3, ...) {
    u8 sp0;
    u8 b;

    b   = *(u8 *) &arg1;
    sp0 = b;
    func_0207a3c4(arg0, &sp0, arg2, b);
    func_0207a1ec(arg0, arg2);
    return arg0;
}
