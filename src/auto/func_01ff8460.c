/* compiler: 1.2/b56 */
/* near: 8 diffs with profile "1.2/sp3 -O1,p" */
#include "m2c.h"
u32 func_01ff8460(s32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    volatile u32 *base = (volatile u32 *) 0x040000B0;
    volatile u32 *p    = base + arg0 * 3;
    *p                 = arg1;
    p[1]               = arg2;
    p[2]               = arg3;
    *base;
    return *base;
}
