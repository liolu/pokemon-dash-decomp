#include "m2c.h"

s32 func_02067c70(u8 *arg0, s32 arg1) {
    s32 *base = *(s32 **) (arg0 + 0x18);
    return base[arg1];
}
