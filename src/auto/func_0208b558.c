/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0208b774(void *, u8 *, s32, s32);
void func_0208b59c(void *, s32);

void *func_0208b558(void *arg0, s32 arg1, s32 arg2, s32 arg3, ...) {
    u8 sp0;
    u8 b;

    b   = *(u8 *) &arg1;
    sp0 = b;
    func_0208b774(arg0, &sp0, arg2, b);
    func_0208b59c(arg0, arg2);
    return arg0;
}
