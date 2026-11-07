/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200d5c0(s32);
s32 func_020ab160(s32);
void func_020996b4(s32 *);

void func_02081748(s32 *arg0) {
    s32 sp0[4];
    s32 t5;
    s32 t6;
    s32 t0;

    t6     = func_020ab160(func_0200d5c0(arg0[3]));
    t5     = func_020ab160(func_0200d5c0(arg0[0]));
    t0     = func_020ab160(func_0200d5c0(arg0[6]));
    sp0[0] = t0 + (t5 + t6);
    t6     = func_020ab160(func_0200d5c0(arg0[4]));
    t5     = func_020ab160(func_0200d5c0(arg0[1]));
    t0     = func_020ab160(func_0200d5c0(arg0[7]));
    sp0[1] = t0 + (t5 + t6);
    t6     = func_020ab160(func_0200d5c0(arg0[5]));
    t5     = func_020ab160(func_0200d5c0(arg0[2]));
    t0     = func_020ab160(func_0200d5c0(arg0[8]));
    sp0[2] = t0 + (t5 + t6);
    func_020996b4(sp0);
}
