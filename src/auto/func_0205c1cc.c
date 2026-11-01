/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_020d5d54[];

s32 func_0205c1cc(void) {
    s32 sum = 0;
    s32 i;
    for (i = 0; i < 5; i++) {
        s32 v = data_020d5d54[i];
        if (v >= 0) {
            sum += v;
        }
    }
    return sum;
}
