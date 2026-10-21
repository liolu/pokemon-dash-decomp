#include "m2c.h"

extern u16 data_020dae28;

s32 func_020a532c(void) {
    if (data_020dae28 != 0) {
        return 0;
    }
    return 3;
}
