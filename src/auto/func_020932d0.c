/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02093bc8(void *, s32, void *, u8 *, u8 *);
s32 func_02093ee0(void *, s32, u8, u8, s32);

void func_020932d0(s32 *arg0, void *arg1, s32 arg2) {
    u32 sp8;
    u8 sp4;
    u8 sp5;

    *arg0 = func_02093ee0(arg1, func_02093bc8(arg1, arg2, &sp8, &sp4, &sp5), sp4, sp5, arg2);
}
