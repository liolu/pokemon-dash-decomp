#include "m2c.h"

extern void *data_020d6540;

s32 func_02073d0c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x14) == M2C_FIELD(data_020d6540, s32 *, 0x7C)) {
        return 1;
    }
    return 0;
}
