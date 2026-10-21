#include "m2c.h"

s32 func_020605e0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10) == 5) {
        return 1;
    }
    return 0;
}
