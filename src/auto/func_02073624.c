/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02073624(u8 *arg0, s32 arg1) {
    u16 *p;
    *(s32 *) (arg0 + 0x1C) = arg1;
    p                      = (u16 *) (arg0 + 8);
    *p                     = *p | 0x40;
    *p                     = *p & 0xFFEF;
}
