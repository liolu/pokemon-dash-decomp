/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02047394(void **arg0, void *arg1) {
    void *p;

    *arg0 = M2C_FIELD(arg1, void **, 0x10C);
    p     = *arg0;
    if (p != NULL) {
        M2C_FIELD(p, s32 *, 4) = M2C_FIELD(p, s32 *, 4) + 1;
    }
}
