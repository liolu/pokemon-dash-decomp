/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02074f94(u8 *arg0, s32 arg1) {
    u8 *p                  = arg0 + 4;
    *(s32 *) (arg0 + 0x14) = arg1;
    *p                     = *p | 0xC0;
}
