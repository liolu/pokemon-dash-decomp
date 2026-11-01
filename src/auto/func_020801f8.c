/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_020c244c[];

u32 func_020801f8(u8 *arg0, s32 arg1) {
    u32 crc = 0xFFFFFFFF;
    s32 i   = 0;
    u32 idx;

    if (arg1 > 0) {
        do {
            idx = (crc & 0xFF) ^ *arg0++;
            i   = i + 1;
            crc = data_020c244c[idx] ^ (crc >> 8);
        } while (i < arg1);
    }
    return ~crc;
}
