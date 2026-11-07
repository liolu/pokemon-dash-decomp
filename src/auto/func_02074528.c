/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02074528(void *arg0, s32 arg1) {
    volatile u16 *h;

    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    h                            = (volatile u16 *) ((u8 *) arg0 + 4);
    *h                           = (u16) (*h | 0xC004);
    if ((M2C_FIELD(arg0, u16 *, 4) & 0x10) == 0) {
        *h = (u16) (*h | 0x2000);
    }
}
