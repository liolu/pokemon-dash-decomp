#include "m2c.h"

extern void *data_020d5164;

s32 func_02065fe8(void *arg0) {
    if (M2C_FIELD(data_020d5164, s32 *, 0x164) == M2C_FIELD(arg0, s32 *, 0xDC)) {
        return 1;
    }
    return 0;
}
