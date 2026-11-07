/* compiler: 1.2/b56 */
#include "m2c.h"

void func_020742a8(void *arg0, s32 arg1) {
    u16 *p;

    M2C_FIELD(arg0, s16 *, 0xA0) = (s16) ((arg1 + 0x800) >> 0xC);
    p                            = (u16 *) ((u8 *) arg0 + 4);
    *p                           = (u16) (*p | 0x800);
}
