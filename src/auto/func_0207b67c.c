/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0207b67c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 4);
    if (M2C_FIELD(arg0, s32 *, 0) == M2C_FIELD(arg0, s32 *, 0xC)) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 4);
    }
}
