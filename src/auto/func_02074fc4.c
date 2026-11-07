/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02074fc4(u8 *arg0, s32 arg1) {
    u8 *p;
    u32 v;
    *(s32 *) (arg0 + 0xC) = arg1;
    p                     = arg0 + 4;
    v                     = *p;
    v                     = v | 0xC0;
    *p                    = (u8) v;
}
