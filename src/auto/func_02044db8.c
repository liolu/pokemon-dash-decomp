#include "m2c.h"

s32 func_02044db8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x128) == 0xF) {
        return 1;
    }
    return 0;
}
