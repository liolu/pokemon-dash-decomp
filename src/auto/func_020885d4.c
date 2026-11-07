/* compiler: 1.2/b56 */
#include "m2c.h"

s32 func_020885d4(void *arg0, void *arg1) {
    u16 *src;
    u16 *dst;

    src    = (u16 *) (*(u8 **) ((u8 *) arg0 + 0x64) + 0x18);
    dst    = (u16 *) arg1;
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    return 1;
}
