/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_0201bf94(void);

u32 func_0201bd00(void *arg0, u32 arg1, ...) {
    u32 n;
    u32 tmp1;
    u32 tmp2;
    u32 *var;

    n = *(u32 *) ((u8 *) arg0 + 8);
    if (arg1 > 0x3FFFFFFFU - n) {
        func_0201bf94();
    }
    if (n < 0x15555555U) {
        tmp1 = (3 * (n + 1)) / 5;
        if (tmp1 < arg1) {
            var = &arg1;
        } else {
            var = &tmp1;
        }
        return n + *var;
    }
    if (n < 0x2AAAAAAAU) {
        tmp2 = (n + 1) >> 1;
        if (tmp2 < arg1) {
            var = &arg1;
        } else {
            var = &tmp2;
        }
        return n + *var;
    }
    return 0x3FFFFFFFU;
}
