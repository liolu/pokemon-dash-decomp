/* compiler: 1.2/b56 */
#include "m2c.h"

void func_0200c738(u8 *arg0, s32 arg1) {
    if (arg1 != 0) {
        *(s32 *) (arg0 + 0xC) |= 0x20;
    } else {
        *(s32 *) (arg0 + 0xC) &= ~0x20;
    }
}
