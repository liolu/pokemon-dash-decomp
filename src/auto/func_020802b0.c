/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0206d9a0(s32, s32);
s32 func_0208037c(void *, s32);
s32 func_020a0724(void *, s32, s32);
s32 func_020a0790(void *, s32, s32);
s32 func_020a084c(void *);
void func_020a0bf4(void *);

s32 func_020802b0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 sp0[68];

    func_020a0bf4(sp0);
    if (func_0208037c(sp0, arg0) == 0) {
        return 0;
    }
    if (func_020a0724(sp0, arg1, 0) == 0) {
        func_020a084c(sp0);
        return 0;
    }
    func_0206d9a0(arg2, arg3);
    if (func_020a0790(sp0, arg2, arg3) == 0) {
        func_020a084c(sp0);
        return 0;
    }
    if (func_020a084c(sp0) != 0) {
        return 1;
    }
    return 0;
}
