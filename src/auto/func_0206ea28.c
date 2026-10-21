/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0206ea28(s32 *arg0, s32 arg1) {
    if (arg1 > 0x800) {
        *arg0 &= ~4;
        return;
    }
    *arg0 |= 4;
}
