/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u8 *func_0208fd78(u8 *arg0, u32 arg1) {
    u32 ip;
    u8 *r2;
    u32 *r0;
    u32 r1;

    if (arg1 == 0x30000000) {
        return NULL;
    }
    ip = arg1 & 0xFFF;
    if (ip >= *(u32 *) (arg0 + 0x1C)) {
        return NULL;
    }
    r2 = *(u8 **) (arg0 + 0x18);
    r1 = ip << 3;
    r0 = *(u32 **) (r2 + (ip * 8));
    if (*r0 == 0x30000000) {
        return NULL;
    }
    return r2 + r1;
}
