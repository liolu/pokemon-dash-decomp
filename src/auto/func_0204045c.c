/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003a44();                      /* extern */
M2C_UNK func_02004698();                      /* extern */
M2C_UNK func_02032558();                      /* extern */
M2C_UNK func_02081f64();                      /* extern */
extern M2C_UNK data_020cf3bc;
extern M2C_UNK data_020cf404;

void *func_0204045c(void *arg0) {
    s32 *temp_r1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020cf404;
    temp_r1                        = M2C_FIELD(arg0, s32 **, 0x144);
    if (temp_r1 != NULL) {
        *temp_r1 -= 1;
        if ((*temp_r1 == 0) && (M2C_FIELD(arg0, s32 **, 0x144) != NULL)) {
            func_02081f64();
        }
    }
    M2C_FIELD(arg0, s32 **, 0x144) = NULL;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020cf3bc;
    func_02004698(arg0 + 0x110);
    func_02003a44(arg0 + 0x10C);
    func_02003a44(arg0 + 0x108);
    func_02003a44(arg0 + 0x104);
    func_02032558(arg0);
    func_02081f64(arg0);
    return arg0;
}
