/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0206ec9c(void *arg0) {
    s32 var_r0;
    void *var_r4;

    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x10);
    var_r4                    = M2C_FIELD(arg0, void **, 0x10);
    if (var_r4 == NULL) {
        return arg0;
    }
    do {
        var_r0 = M2C_FIELD(var_r4, s32 *, 0) & 0x10;
        if (var_r0 == 0) {
            var_r0 = (s32) func_0206ec9c(var_r4);
        }
        var_r4 = M2C_FIELD(var_r4, void **, 8);
    } while (var_r4 != NULL);
    return (void *) var_r0;
}
