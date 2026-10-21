#include "m2c.h"

s32 func_020605f4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10) == 2) {
        return 1;
    }
    return 0;
}
