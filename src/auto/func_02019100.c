/* compiler: 1.2/b56 */
#include "m2c.h"

extern void func_020ab4f8(s32, s32, s32);

s32 func_02019100(s32 *arg0, s32 arg1) {
    s32 t;
    s32 r;
    s32 *c;

    t = arg0[0] + (arg0[1] << 4) - arg1;
    r = (t + (s32) (((u32) (t >> 3)) >> 0x1C)) >> 4;
    func_020ab4f8(arg1, arg1 + 0x10, (r - 1) << 4);
    c  = &arg0[1];
    *c = *c - 1;
    return arg1;
}
