/* compiler: 1.2/b56 */
#include "m2c.h"

void func_0208a708(volatile s32 *a) {
    volatile s32 *q = &a[4];
    *q              = *q + 8;
    if (a[4] != a[5]) {
        return;
    }
    a[0] = a[0] + 4;
    if (a[0] == a[3]) {
        a[0] = a[1];
    }
    a[4] = *(volatile s32 *) a[0];
    a[5] = a[4] + 0x200;
}
