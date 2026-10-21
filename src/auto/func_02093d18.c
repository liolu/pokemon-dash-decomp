/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081f64();                     /* extern */

void func_02093d18(void ***arg0, s32 *arg1, void ***arg2) {
    s32 *temp_r1;
    void **temp_r4;

    temp_r4                                                = *arg2;
    *arg2                                                  = M2C_FIELD(temp_r4, void ***, 4);
    M2C_FIELD(M2C_FIELD(temp_r4, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_r4, void ***, 4);
    *M2C_FIELD(temp_r4, void ***, 4)                       = M2C_FIELD(temp_r4, void **, 0);
    temp_r1                                                = M2C_FIELD(temp_r4, s32 **, 8);
    if (temp_r1 != NULL) {
        *temp_r1 -= 1;
        if ((*temp_r1 == 0) && (M2C_FIELD(temp_r4, s32 **, 8) != NULL)) {
            func_02081f64();
        }
    }
    M2C_FIELD(temp_r4, s32 **, 8) = NULL;
    func_02081f64(temp_r4);
    *arg1 -= 1;
    *arg0 = *arg2;
}
