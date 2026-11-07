/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02075b44(void *arg0) {
    u8 *p;

    if ((*((u8 *) arg0 + 0x10) & 0x40) == 0) {
        return;
    }
    *((u8 *) arg0 + 0x12)        = *((u8 *) arg0 + 0x11);
    p                            = (u8 *) arg0 + 0x10;
    *p                           = (u8) (*p & ~0x40);
    *p                           = (u8) (*p | 0x80);
    M2C_FIELD(arg0, s32 *, 0x28) = M2C_FIELD(arg0, s32 *, 0x2C);
}
