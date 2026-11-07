/* compiler: 1.2/b56 */
#include "m2c.h"

extern s32 func_02066594(void *, s32);

s32 func_02066958(u8 *arg0) {
    s32 r;
    s32 b;
    s32 *p;

    r = func_02066594(arg0, 7);
    b = *(u8 *) (arg0 + 0xBC);
    if (b != 0) {
        b = 1;
    } else {
        b = r;
    }
    if (b == 0) {
        p  = (s32 *) (arg0 + 0x14);
        *p = *p | 0x100;
    } else {
        p  = (s32 *) (arg0 + 0x14);
        *p = *p & ~0x100;
    }
    return r;
}
