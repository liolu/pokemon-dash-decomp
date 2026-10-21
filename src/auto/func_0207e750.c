/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207f230(s32);                         /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */
extern M2C_UNK data_020d65ac;

void *func_0207e750(void *arg0) {
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r5_2;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x28);
    if (temp_r5 != 0) {
        func_0207f230(temp_r5);
        func_02081f64(temp_r5);
    }
    temp_r5_2 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_r5_2 != 0) {
        func_0207f230(temp_r5_2);
        func_02081f64(temp_r5_2);
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0);
    *((M2C_UNK *) ((s8 *) &data_020d65ac + (temp_r3 * 4))) =
        *((M2C_UNK *) ((s8 *) &data_020d65ac + (temp_r3 * 4))) & (-2 << M2C_FIELD(arg0, s32 *, 4));
    return arg0;
}
