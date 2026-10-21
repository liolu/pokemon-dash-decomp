#include "m2c.h"

void func_0207d1f8(void **arg0, void *arg1, u32 arg2) {
    s32 var_r2_2;
    u32 temp_r3;
    u32 var_r2;

    var_r2  = arg2;
    temp_r3 = M2C_FIELD(arg1, u32 *, 0);
    if (var_r2 <= (u32) (temp_r3 >> 1)) {
        *arg0 = M2C_FIELD(arg1, void **, 8);
        if ((s32) var_r2 >= 0) {
            if ((s32) var_r2 <= 0) {
                return;
            }
            do {
                var_r2 -= 1;
                *arg0 = M2C_FIELD(*arg0, void **, 4);
            } while ((s32) var_r2 > 0);
            return;
        }
        if ((s32) var_r2 >= 0) {
            return;
        }
        do {
            var_r2 += 1;
            *arg0 = M2C_FIELD(*arg0, void **, 0);
        } while ((s32) var_r2 < 0);
        return;
    }
    *arg0    = arg1 + 4;
    var_r2_2 = var_r2 - temp_r3;
    if (var_r2_2 >= 0) {
        if (var_r2_2 <= 0) {
            return;
        }
        do {
            var_r2_2 -= 1;
            *arg0 = M2C_FIELD(*arg0, void **, 4);
        } while (var_r2_2 > 0);
        return;
    }
    if (var_r2_2 >= 0) {
        return;
    }
    do {
        var_r2_2 += 1;
        *arg0 = M2C_FIELD(*arg0, void **, 0);
    } while (var_r2_2 < 0);
}
