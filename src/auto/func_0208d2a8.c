/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0208d2a8(u8 *arg0) {
    u8 *lr;
    s32 n;

    n  = *(s32 *) (arg0 + 0x134) * 0x8C;
    lr = *(u8 **) (arg0 + 0x130);
    if (n == 0) {
        return;
    }
    do {
        *(s32 *) (lr + 8) = 0;
        lr += 0x8C;
    } while (lr != *(u8 **) (arg0 + 0x130) + *(s32 *) (arg0 + 0x134) * 0x8C);
}
