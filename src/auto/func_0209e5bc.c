#include "engine.h"
#include "m2c.h"

extern M2C_UNK *data_020d8770;

s32 func_0209e5bc(void) {
    M2C_UNK *var_r1;
    s32 var_r0;

    var_r0 = 0;
    var_r1 = data_020d8770;
    if (var_r1 == NULL) {
        return 0;
    }
    do {
        var_r1 = *var_r1;
        var_r0 += 1;
    } while (var_r1 != NULL);
    return var_r0;
}
