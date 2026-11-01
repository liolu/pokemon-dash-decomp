#include "m2c.h"

extern s32 data_020d6118;

s32 func_0206e058(s32 arg0) {
    u8 *base;

    base = (u8 *) data_020d6118;
    return (s32) (base + *(s32 *) (base + arg0 * 12) - 0x20);
}
