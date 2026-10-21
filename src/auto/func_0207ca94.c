/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207c878();                            /* extern */
M2C_UNK func_0207cd88(s32);                         /* extern */
M2C_UNK func_02081edc(s32);                         /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */
M2C_UNK func_020826d8(void *);                      /* extern */
extern M2C_UNK data_020d3c98;

void *func_0207ca94(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d3c98;
    func_0207c878();
    func_02081edc(M2C_FIELD(arg0, s32 *, 0x98));
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xB4);
    if (temp_r4 != 0) {
        func_0207cd88(temp_r4);
        func_02081f64(temp_r4);
    }
    func_020826d8(arg0 + 0xA8);
    return arg0;
}
