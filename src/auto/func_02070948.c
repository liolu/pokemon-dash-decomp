/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02081edc();                           /* extern */
M2C_UNK func_02081f64();                      /* extern */

s32 func_02070948(void *arg0) {
    s32 *var_r4;
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 4);
    if (temp_r4 != NULL) {
        func_02070948(temp_r4);
        func_02081f64(temp_r4);
    }
    temp_r0 = M2C_FIELD(arg0, u8 *, 0) & 8;
    if (temp_r0 != 0) {
        return temp_r0;
    }
    var_r4 = M2C_FIELD(arg0, s32 **, 0x10);
    if (var_r4 == NULL) {
        return temp_r0;
    }
    if (*var_r4 != 0) {
        do {
            func_02081f64();
            var_r4 = (s32 *) ((s8 *) var_r4 + 4);
        } while (*var_r4 != 0);
    }
    return func_02081edc(M2C_FIELD(arg0, s32 **, 0x10));
}
