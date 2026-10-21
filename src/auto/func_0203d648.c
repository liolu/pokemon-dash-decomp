/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207e06c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0207e1ec(s32, M2C_UNK);                /* extern */
M2C_UNK func_0207f230(s32);                         /* extern */
M2C_UNK func_02081edc(s32);                         /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */
M2C_UNK func_02083714(s32);                         /* extern */
extern s32 data_020d51a8;
extern s32 data_020d51d8;
extern s32 data_020d51e8;
extern s32 data_020d5200;
extern s32 data_020d5228;
extern s32 data_020d5274;
extern s32 data_020d541c;

void func_0203d648(void) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;

    func_0207e1ec(data_020d51e8, 3);
    func_0207e06c(data_020d5274, 0, 0);
    func_02081edc(data_020d541c);
    temp_r4 = data_020d5200;
    if (temp_r4 != 0) {
        func_02083714(temp_r4);
        func_02081f64(temp_r4);
    }
    temp_r4_2 = data_020d51a8;
    if (temp_r4_2 != 0) {
        func_02083714(temp_r4_2);
        func_02081f64(temp_r4_2);
    }
    temp_r4_3 = data_020d5228;
    if (temp_r4_3 != 0) {
        func_0207f230(temp_r4_3);
        func_02081f64(temp_r4_3);
    }
    temp_r4_4 = data_020d51d8;
    if (temp_r4_4 == 0) {
        return;
    }
    func_0207f230(temp_r4_4);
    func_02081f64(temp_r4_4);
}
