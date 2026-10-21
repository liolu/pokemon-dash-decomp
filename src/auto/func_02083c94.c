/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081f64(s32);                         /* extern */
M2C_UNK func_02082ee8(s32);                         /* extern */
extern M2C_UNK data_020d3fb0;

void *func_02083c94(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d3fb0;
    temp_r4                        = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r4 != 0) {
        func_02082ee8(temp_r4);
        func_02081f64(temp_r4);
    }
    return arg0;
}
