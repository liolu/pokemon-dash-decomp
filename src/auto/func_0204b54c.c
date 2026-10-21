/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207f230(s32);                         /* extern */
M2C_UNK func_0207f4a0(s32);                         /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */

void *func_0204b54c(void *arg0) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r4 != 0) {
        func_0207f230(temp_r4);
        func_02081f64(temp_r4);
    }
    temp_r4_2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r4_2 != 0) {
        func_0207f230(temp_r4_2);
        func_02081f64(temp_r4_2);
    }
    temp_r4_3 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r4_3 != 0) {
        func_0207f4a0(temp_r4_3);
        func_02081f64(temp_r4_3);
    }
    return arg0;
}
