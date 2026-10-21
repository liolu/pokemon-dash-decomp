#include "m2c.h"

extern s32 data_020d7e6c;

s32 func_02096cfc(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_020d7e6c;
    data_020d7e6c = arg0;
    return temp_r2;
}
