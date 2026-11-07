/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_020d54d4[];

s32 func_020460e8(s32 *arg0) {
    s32 k = arg0[0];
    s32 v;
    if (k == 0) {
        goto ok;
    }
    if (k == 1) {
        goto ok;
    }
    if (k != 2) {
        goto no;
    }
ok:
    v = (k * 5 + arg0[1]) * 5 + arg0[2] + 1;
    if ((s32) data_020d54d4[0x738] < v) {
        data_020d54d4[0x738] = (u8) v;
        return 1;
    }
no:
    return 0;
}
