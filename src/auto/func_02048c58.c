/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02048c58(s32 *volatile *arg0, s32 **arg1) {
    s32 *t;
    *arg0 = *arg1;
    t     = *arg0;
    if (t != 0) {
        t[1] = t[1] + 1;
    }
}
