/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u32 func_02099494(u32);
void func_0207d878(void *, u32 *, void *, void *, s32, s32);

void func_0207d7d8(void *arg0, s32 unused, void *arg2, void *arg3) {
    u32 buf[4];
    u32 r0;

    r0     = func_02099494(0x1000);
    buf[3] = r0;
    buf[0] = r0;
    buf[2] = 0;
    buf[1] = 0;
    func_0207d878(arg0, buf, arg2, arg3, 0, 0);
}
