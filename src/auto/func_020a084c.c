/* compiler: 1.2/b56 */
#include "m2c.h"

s32 func_020a01b0(u8 *, s32);

s32 func_020a084c(u8 *arg0) {
    u32 v;

    if (func_020a01b0(arg0, 8) == 0) {
        return 0;
    }
    *(s32 *) (arg0 + 8)    = 0;
    *(s32 *) (arg0 + 0x10) = 0xE;
    v                      = *(u32 *) (arg0 + 0xC);
    v                      = v & ~0x30;
    *(u32 *) (arg0 + 0xC)  = v;
    return 1;
}
