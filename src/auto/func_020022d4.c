/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020022d4(u8 *arg0) {
    s32 *w = (s32 *) arg0;
    u32 i  = 0;
    s32 *p = (s32 *) (arg0 + 0x20);
    do {
        p[i] = p[i] ^ w[1];
        p[i] = p[i] ^ w[0];
        i++;
    } while (i < 12);
}
