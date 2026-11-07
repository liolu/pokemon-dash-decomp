/* compiler: 1.2/b56 */
/* near start: 6 diffs with profile "2.0/sp1p5 -O1" */
#include "m2c.h"

void func_02013760(s32 *volatile *arg0, u8 *arg1) {
    s32 *t;
    *arg0 = *(s32 **) (arg1 + 0x114);
    t     = *arg0;
    if (t != 0) {
        t[1] = t[1] + 1;
    }
}
