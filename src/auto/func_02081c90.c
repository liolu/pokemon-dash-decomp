/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02081c90(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 i;

    i = 0;
    do {
        arg0[i] = arg1[i] + arg2[i];
        i++;
    } while (i < 0xC);
}
