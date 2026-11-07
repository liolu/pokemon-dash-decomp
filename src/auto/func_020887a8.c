/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200d5c0(s32);
void func_020816e4(s32, s32, s32);
s32 func_02099478(s32);

s32 func_020887a8(u8 *a, s32 b) {
    s32 t;
    s32 r = func_0200d5c0(*(s32 *) (*(u8 **) (*(u8 **) (a + 0x60) + 8) + 0xc));
    t     = *(s32 *) (a + 0x64) + 0x20;
    func_020816e4(b, t, func_02099478(r));
    return 1;
}
