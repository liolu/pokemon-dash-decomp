/* compiler: 1.2/b56 */
#include "m2c.h"

s32 func_020866b0(u8 *arg0, s32 *arg1) {
    s32 *s  = (s32 *) (arg0 + 0x6C);
    s32 a   = s[0];
    s32 r   = 1;
    arg1[0] = a;
    arg1[1] = s[1];
    arg1[2] = s[2];
    return r;
}
