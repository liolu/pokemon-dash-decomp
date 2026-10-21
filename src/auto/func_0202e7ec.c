#include "m2c.h"

extern s32 data_020cd8c0;

s32 func_0202e7ec(void) {
    s32 temp_r1;

    temp_r1       = data_020cd8c0 + 1;
    data_020cd8c0 = temp_r1;
    if (temp_r1 == 0x34) {
        data_020cd8c0 = 0x2A;
    }
    return data_020cd8c0;
}
