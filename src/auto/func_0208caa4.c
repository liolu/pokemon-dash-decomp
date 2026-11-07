/* compiler: 1.2/b56 */
#include "m2c.h"

s32 func_0208caa4(u8 *arg0, s32 *arg1) {
    u8 *b  = *(u8 **) (arg0 + 0x68);
    s32 *p = (s32 *) (b + 0x2C);

    arg1[0] = p[0];
    arg1[1] = p[1];
    arg1[2] = p[2];
    return 1;
}
