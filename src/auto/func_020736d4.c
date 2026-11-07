/* compiler: 1.2/b56 */
#include "m2c.h"

void func_020736d4(u8 *arg0, s32 arg1) {
    u16 *h = (u16 *) (arg0 + 8);

    *(s32 *) (arg0 + 0x24) = arg1;
    *h                     = (u16) (*h | 0x40);
    *h                     = (u16) (*h & 0xFFEF);
}
