/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206e7a4();                            /* extern */

void func_0206e758(void *arg0, M2C_UNK arg1) {
    void *var_r4;

    func_0206e7a4();
    var_r4 = M2C_FIELD(arg0, void **, 0x10);
    if (var_r4 == NULL) {
        return;
    }
    do {
        func_0206e758(var_r4, arg1);
        var_r4 = M2C_FIELD(var_r4, void **, 8);
    } while (var_r4 != NULL);
}
