#include "m2c.h"

void func_02002394(u8 *arg0, u8 *arg1) {
    u8 *var_r0;
    u8 *var_r1;
    u8 var_r2;

    var_r0 = arg0;
    var_r1 = arg1;
    var_r2 = *var_r1;
    if (var_r2 != 0xFF) {
        do {
            *var_r0 = var_r2;
            var_r0 += 1;
            var_r1 += 1;
            var_r2 = *var_r1;
        } while (var_r2 != 0xFF);
    }
    *var_r0 = 0xFF;
}
