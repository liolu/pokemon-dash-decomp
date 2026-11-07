/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02073734(u8 *arg0, s32 arg1) {
    u16 *p;
    *(s16 *) (arg0 + 0x12) = (s16) ((arg1 + 0x800) >> 12);
    p                      = (u16 *) (arg0 + 8);
    *p                     = *p | 0x40;
    *p                     = *p & 0xFFEF;
}
