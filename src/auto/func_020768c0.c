/* compiler: 1.2/b56 */
#include "m2c.h"

s32 func_020768c0(u8 *arg0, u8 *arg1) {
    u8 *a;
    u8 *b;
    u16 *p;

    b = arg1;
    if (b == 0) {
        b = *(u8 **) (arg0 + 0x18);
    }
    a = *(u8 **) (arg0 + 0x18);
    if (a == b && a != 0) {
        p                      = (u16 *) (a + 4);
        *p                     = *p & 0xFFF7;
        *(u8 **) (arg0 + 0x18) = 0;
        return 1;
    }
    return 0;
}
