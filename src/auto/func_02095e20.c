/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020953dc();            /* extern */
M2C_UNK func_02095464();   /* extern */
extern M2C_UNK data_020d75ac;

void func_02095e20(void *arg0) {
    void *var_r1;

    var_r1 = func_020953dc(&data_020d75ac, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_020953dc(&data_020d75ac);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_02095464(&data_020d75ac, var_r1, arg0);
}
