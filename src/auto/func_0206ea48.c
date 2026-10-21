/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0206ea48(s32 *arg0, s32 arg1) {
    if (arg1 > 0x800) {
        *arg0 &= ~2;
        return;
    }
    *arg0 |= 2;
}
