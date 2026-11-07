/* compiler: 1.2/b56 */
#include "m2c.h"

s32 func_02074c3c(u8 *arg0, u32 *arg1) {
    u16 *p;
    s32 v;

    *(u32 *) (arg0 + 0xC)  = arg1[0];
    *(u32 *) (arg0 + 0x10) = arg1[1];
    *(u32 *) (arg0 + 0x14) = arg1[2];
    p                      = (u16 *) (arg0 + 4);
    *p                     = *p | 0xC004;
    v                      = *(u16 *) (arg0 + 4) & 0x10;
    if (v == 0) {
        v  = *p | 0x2000;
        *p = v;
    }
    return v;
}
