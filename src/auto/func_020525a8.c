/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081f64(M2C_UNK **);                  /* extern */
M2C_UNK func_02082b74(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020d3e6c;

void *func_020525a8(void *arg0) {
    M2C_UNK **temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK ***, 0xC);
    if (temp_r4 != NULL) {
        *temp_r4 = &data_020d3e6c;
        func_02082b74(temp_r4);
        func_02081f64(temp_r4);
    }
    return arg0;
}
