/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207d830(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0207dbf8(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_0207dfe8(s32, M2C_UNK);                /* extern */
M2C_UNK func_0207e1ec(s32, M2C_UNK);                /* extern */
M2C_UNK func_0207f230(s32);                         /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */
extern s32 data_020d51d8;
extern s32 data_020d51e8;
extern s32 data_020d5228;
extern s32 data_020d5274;
extern s32 data_020d5278;

void func_020367e0(void) {
    s32 temp_r4;
    s32 temp_r4_2;

    func_0207dfe8(data_020d5274, 0);
    func_0207dfe8(data_020d5278, 0);
    func_0207dfe8(data_020d51e8, 0);
    temp_r4 = data_020d51d8;
    if (temp_r4 != 0) {
        func_0207f230(temp_r4);
        func_02081f64(temp_r4);
    }
    temp_r4_2 = data_020d5228;
    if (temp_r4_2 != 0) {
        func_0207f230(temp_r4_2);
        func_02081f64(temp_r4_2);
    }
    func_0207dbf8(data_020d51e8, 1, 0, 0x800, 0, 0);
    func_0207d830(data_020d51e8, 0, 0);
    func_0207e1ec(data_020d5278, 2);
    func_0207e1ec(data_020d51e8, 3);
}
