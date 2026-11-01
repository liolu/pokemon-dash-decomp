/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0202073c(void *, void *, s32 *, s32 *);

void *func_0201f0ac(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;

    sp8 = (s32) ((u8 *) arg0 + 4);
    sp4 = M2C_FIELD(arg0, s32 *, 8);
    func_0202073c(&sp0, arg0, &sp4, &sp8);
    return arg0;
}
