#include "m2c.h"

extern s32 data_020d6118;

s32 func_0206e03c(s32 arg0) {
    return M2C_FIELD(((arg0 * 0xC) + data_020d6118), s32 *, 8);
}
