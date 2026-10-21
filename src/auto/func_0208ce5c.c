#include "m2c.h"

s32 func_0208ce5c(void *arg0) {
    s32 var_r0;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x128);
    if (temp_r0 != NULL) {
        if ((s32) M2C_FIELD(temp_r0, s32 *, 0xC) <= (s32) M2C_FIELD(temp_r0, s32 *, 4)) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
