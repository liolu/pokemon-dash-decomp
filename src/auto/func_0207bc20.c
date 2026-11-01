/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02082044(s32);
void func_020825e4(s32, s32, s32 *, s32, s32, s32, s32 *);
void func_0207c280(s32, s32);

void func_0207bc20(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r4;

    if (*arg0 == 0) {
        return;
    }
    temp_r0 = func_02082044(0x2C);
    temp_r4 = temp_r0;
    if (temp_r4 != 0) {
        func_020825e4(temp_r4, 1, arg0, arg1, 0, 1, &arg2);
    }
    func_0207c280(*arg0, temp_r4);
}
