/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02070760(void *, M2C_UNK);             /* extern */

void func_02070720(void *arg0, M2C_UNK arg1) {
    void *var_r5;

    var_r5 = arg0;
    if (var_r5 == NULL) {
        return;
    }
    do {
        func_02070760(var_r5, arg1);
        var_r5 = M2C_FIELD(var_r5, void **, 4);
    } while (var_r5 != NULL);
}
