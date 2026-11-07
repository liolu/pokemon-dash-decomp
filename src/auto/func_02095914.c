/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02095914(void *arg0) {
    s32 *p;
    s32 v;

    v    = M2C_FIELD(arg0, s32 *, 0x18);
    p    = (s32 *) ((u8 *) arg0 + 0x24);
    *p   = v;
    p[2] = 0;
}
