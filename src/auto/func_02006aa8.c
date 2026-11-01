/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200735c(u16);

s32 func_02006aa8(void) {
    s32 sum;
    u16 i;

    sum = 0;
    i   = 0;
    do {
        sum += func_0200735c(i);
        i = (u16) (i + 1);
    } while (i < 6);
    return sum;
}
