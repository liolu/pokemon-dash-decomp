#include "m2c.h"

s32 func_02077e80(void *arg0, void *arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x10) != M2C_FIELD(arg1, s32 *, 0x10)) {
        return 1;
    }
    return 0;
}
