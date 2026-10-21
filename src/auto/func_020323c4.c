/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020323c4(void *arg0) {
    s32 var_r2;
    void *temp_r1;
    void *var_r0;

    temp_r1 = M2C_FIELD(arg0, void **, 0x70);
    var_r2  = 1;
    if ((temp_r1 != NULL) && (M2C_FIELD(temp_r1, void **, 4) != NULL)) {
        var_r2 = 0;
    }
    if (var_r2 == 0) {
        var_r0 = M2C_FIELD(temp_r1, void **, 4);
        if (var_r0 != NULL) {
            var_r0 -= 8;
        }
        return M2C_FIELD(var_r0, s32 *, 0x70);
    }
    return 0;
}
