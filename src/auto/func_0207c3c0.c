#include "m2c.h"

s32 func_0207c3c0(u8 *arg0) {
    u8 *p = *(u8 **) (arg0 + 0xB8);
    u8 *q;

    if (p == NULL) {
        return 0;
    }
    q = *(u8 **) (arg0 + 0xBC);
    if (q == p + 4) {
        return 0;
    }
    *(u8 **) (arg0 + 0xBC) = *(u8 **) (q + 4);
    return *(s32 *) (q + 8);
}
