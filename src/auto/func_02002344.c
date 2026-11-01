/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02002394(u8 *, u8 *);

void func_02002344(u8 *arg0, s32 arg1) {
    u8 buf[16];

    if (arg1 != 1) {
        return;
    }
    buf[0] = 0xFC;
    buf[1] = 0x15;
    func_02002394(buf + 2, arg0);
    func_02002394(arg0, buf);
}
