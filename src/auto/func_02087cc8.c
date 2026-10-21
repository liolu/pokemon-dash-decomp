#include "m2c.h"

s32 func_02087cc8(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x140);
        M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x144);
        M2C_FIELD(arg1, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x148);
    }
    return 1;
}
