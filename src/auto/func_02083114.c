/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020802b0(void *, void *, s32, s32);

void func_02083114(u8 *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4) {
    s32 t;
    s32 u;

    if (arg4 == 0) {
        arg4 = *(s32 *) (arg0 + 8) - arg3;
    }
    t = *(s32 *) (arg0 + 0xC) + *(s32 *) (arg0 + 4);
    u = t + arg3;
    func_020802b0(arg1, arg2, u, arg4);
}
