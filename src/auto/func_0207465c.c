/* compiler: 1.2/b56 */
#include "m2c.h"

void func_0207465c(void *arg0, s16 arg1) {
    u16 *h;

    M2C_FIELD(arg0, s16 *, 0x24) = arg1;
    h                            = (u16 *) ((u8 *) arg0 + 4);
    *h                           = (u16) (*h | 0xE004);
    *h                           = (u16) (*h & 0xEFEF);
}
