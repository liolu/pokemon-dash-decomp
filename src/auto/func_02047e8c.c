/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0201c8c8(s32, s32, s32);                   /* extern */
s32 func_0201c884(s32);                             /* extern */
void func_0207c7f4(s32);                            /* extern */

void func_02047e8c(void) {
    s32 a;
    s32 b;

    a = func_0201c8c8(0x199, -0x1000, 0);
    b = func_0201c8c8(0x199, -0x1000, 1);
    while ((func_0201c884(a) == 0) || (func_0201c884(b) == 0)) {
        func_0207c7f4(0);
    }
}
