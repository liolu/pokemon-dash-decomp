/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0209d90c(s32, s32);
void func_01ff84e8(s32, s32, s32, s32);

void func_0209e0d8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    volatile u32 *p;

    func_0209d90c(arg0, -1);
    if (arg3 == 0) {
        return;
    }
    p = (volatile u32 *) (0x40000B0 + (arg0 * 3 + 2) * 4);
    while (*p & 0x80000000) {
    }
    func_01ff84e8(arg0, arg1, arg2, 0xAF000001);
}
