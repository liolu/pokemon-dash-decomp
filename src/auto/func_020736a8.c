/* compiler: 1.2/b56 */
#include "m2c.h"

void func_020736a8(void *arg0, s32 arg1) {
    u16 *p;

    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
    p                            = (u16 *) ((u8 *) arg0 + 8);
    *p                           = (u16) (*p | 0x40);
    *p                           = (u16) (*p & 0xFFEF);
}
