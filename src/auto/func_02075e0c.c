/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_02075e0c(u8 **arg0) {
    u16 v     = 0;
    u32 shift = 0;
    u8 b;
    do {
        u8 *p = *arg0;
        *arg0 = p + 1;
        b     = *p;
        v     = (u16) (v | ((b & 0x7F) << shift));
        shift += 7;
    } while (b & 0x80);
    return v;
}
