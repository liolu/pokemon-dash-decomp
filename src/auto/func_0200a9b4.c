/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200a9b4(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0x168) != 0) || ((M2C_FIELD(arg0, u8 *, 0x140) == 4) && (M2C_FIELD(arg0, s32 *, 0x11C) == 0))) {
        return 1;
    }
    return 0;
}
