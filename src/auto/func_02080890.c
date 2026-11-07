/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02080890(u8 *arg0) {
    s32 lr;
    s32 ip;
    u8 *r3;
    s32 r2;
    lr = *arg0;
    ip = 0;
    r2 = 0;
    r3 = arg0 + 1;
    if (lr != 0) {
        do {
            if (r2 != 0) {
                if (lr >= 0x40 && lr <= 0xfc) {
                    ip++;
                }
                r2 = 0;
            } else if ((lr >= 0x81 && lr <= 0x9f) || (lr >= 0xe0 && lr <= 0xfc)) {
                r2 = 1;
            } else {
                ip++;
            }
            lr = *r3;
            r3++;
        } while (lr != 0);
    }
    return ip;
}
