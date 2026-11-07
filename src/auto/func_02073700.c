/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02073700(void *arg0, s32 arg1) {
    u16 *h;

    M2C_FIELD(arg0, s16 *, 0x14) = (s16) ((arg1 + 0x800) >> 0xC);
    h                            = (u16 *) ((u8 *) arg0 + 8);
    *h                           = (u16) (*h | 0x40);
    *h                           = (u16) (*h & 0xFFEF);
}
