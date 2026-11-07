/* compiler: 1.2/b56 */
#include "m2c.h"

s32 func_0207379c(void *);
M2C_UNK func_020844f4(s32, s32);
extern s32 data_020d6f88;

s32 func_020738e0(void *arg0) {
    u8 *flags;

    if ((*(u8 *) ((u8 *) arg0 + 8) & 1) && (func_0207379c(arg0) == 0)) {
        flags  = (u8 *) arg0 + 8;
        *flags = (u8) (*flags & 0xFC);
        func_020844f4(data_020d6f88, *(s32 *) ((u8 *) arg0 + 0x14));
        return 1;
    }
    return 0;
}
