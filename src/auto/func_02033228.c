#include "m2c.h"

s32 *func_02033228(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 *var_r2;
    s32 temp_ip;

    var_r2  = arg2;
    temp_ip = *arg0;
    if (temp_ip < (s32) *arg1) {
        return arg1;
    }
    if ((s32) *var_r2 >= temp_ip) {
        var_r2 = arg0;
    }
    return var_r2;
}
