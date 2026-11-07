/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02073768(void *arg0, s32 arg1) {
    u16 *p;

    M2C_FIELD(arg0, s16 *, 0x10) = (s16) ((arg1 + 0x800) >> 12);
    p                            = (u16 *) ((u8 *) arg0 + 8);
    *p                           = (u16) (*p | 0x40);
    *p                           = (u16) (*p & 0xFFEF);
}
