/* compiler: 1.2/b56 */
#include "m2c.h"

s32 func_0207356c(void *arg0) {
    u8 *p   = (u8 *) arg0;
    s32 r   = 0;
    void *c = *(void **) (p + 0xc);
    s32 res;
    if (c != 0) {
        res = func_0207356c(c);
        if (res != 0) {
            r = 1;
        }
    }
    if (r != 0) {
        u16 *q = (u16 *) (p + 8);
        *q     = *q | 2;
    } else {
        u16 *q = (u16 *) (p + 8);
        *q     = *q & 0xfffd;
    }
    if (*(s32 *) (p + 0x6c) != 0 || (*(u16 *) (p + 8) & 2) != 0) {
        return 1;
    }
    return 0;
}
