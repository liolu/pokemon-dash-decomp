/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_02002a8c(s32 *arg0, s32 arg1) {
    s32 i;
    u32 sum = 0;
    s32 n   = arg1 / 4;
    for (i = 0; i < n; i++) {
        sum += *arg0;
        arg0++;
    }
    return (u16) (((sum >> 16) & 0xFFFF) + (sum & 0xFFFF));
}
