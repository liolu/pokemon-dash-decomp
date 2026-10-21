#include "m2c.h"

extern s32 data_020d6118;
extern s32 data_020d611c;

s32 func_0206e010(s32 arg0) {
    return data_020d611c + M2C_FIELD(((arg0 * 0xC) + data_020d6118), s32 *, 4);
}
