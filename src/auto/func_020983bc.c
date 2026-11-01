/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_020d7e9c[];
void func_02098238(void *, s32);

void func_020983bc(s32 arg0) {
    s32 i;
    u8 *p;

    p = data_020d7e9c;
    i = 0;
    do {
        func_02098238(p, arg0);
        i += 1;
        p += 0x144;
    } while (i < 4);
}
