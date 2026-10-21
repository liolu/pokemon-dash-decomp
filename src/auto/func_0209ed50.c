/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209cdb8(void *, M2C_UNK);             /* extern */

void func_0209ed50(void *arg0) {
    void *temp_r6;
    void *var_r0;

    var_r0 = M2C_FIELD(arg0, void **, 0x18);
    if (var_r0 == NULL) {
        return;
    }
    do {
        temp_r6                       = M2C_FIELD(var_r0, void **, 4);
        M2C_FIELD(var_r0, s32 *, 0)   = 0;
        M2C_FIELD(var_r0, void **, 4) = NULL;
        func_0209cdb8(var_r0, 8);
        var_r0 = temp_r6;
    } while (temp_r6 != NULL);
}
