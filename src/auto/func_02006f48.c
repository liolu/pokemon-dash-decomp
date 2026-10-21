#include "m2c.h"

extern u8 data_020d4df0;

s32 func_02006f48(void) {
    if (data_020d4df0 == 0) {
        return 1;
    }
    return 0;
}
