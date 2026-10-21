/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02048f04(void *);                      /* extern */
M2C_UNK func_0207e7c4(s32);                         /* extern */
M2C_UNK func_0207f6b8(s32);                         /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */
M2C_UNK func_02099ab0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_02051018(void *arg0) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x15C);
    if (temp_r4 != 0) {
        func_0207f6b8(temp_r4);
        func_02081f64(temp_r4);
    }
    temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x160);
    if (temp_r4_2 != 0) {
        func_0207f6b8(temp_r4_2);
        func_02081f64(temp_r4_2);
    }
    temp_r4_3 = M2C_FIELD(arg0, s32 *, 0x154);
    if (temp_r4_3 != 0) {
        func_0207e7c4(temp_r4_3);
        func_02081f64(temp_r4_3);
    }
    temp_r4_4 = M2C_FIELD(arg0, s32 *, 0x158);
    if (temp_r4_4 != 0) {
        func_0207e7c4(temp_r4_4);
        func_02081f64(temp_r4_4);
    }
    func_02099ab0(1, 5, 0);
    func_02048f04(arg0);
}
