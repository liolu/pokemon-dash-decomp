/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0203d648();                            /* extern */
M2C_UNK func_0203f31c();                            /* extern */
M2C_UNK func_0207dfe8(s32, M2C_UNK);                /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */
M2C_UNK func_02083714(s32);                         /* extern */
M2C_UNK func_020856a8(s32);                         /* extern */
M2C_UNK func_02085908(M2C_UNK);                     /* extern */
extern u8 data_020d518c;
extern s32 data_020d51a4;
extern u32 data_020d51b0;
extern s32 data_020d51e8;
extern s32 data_020d5274;
extern s32 data_020d5278;
extern s32 data_020d5294;
extern s32 data_020d52e4;
extern s32 data_020d5420;
extern s32 data_020d5480[];

void func_0203d09c(void) {
    s32 var_r7;
    s32 temp_r6;
    s32 temp_r4;
    s32 temp_r4_2;

    var_r7 = 0;
    if ((s32) data_020d5420 > 0) {
        do {
            temp_r6 = data_020d5480[var_r7];
            if (temp_r6 != 0) {
                func_020856a8(temp_r6);
                func_02081f64(temp_r6);
            }
            var_r7 += 1;
        } while (var_r7 < (s32) data_020d5420);
    }
    if ((data_020d52e4 == 5) || (data_020d52e4 == 9)) {
        temp_r4 = data_020d5294;
        if (temp_r4 != 0) {
            func_02083714(temp_r4);
            func_02081f64(temp_r4);
        }
        temp_r4_2 = data_020d51a4;
        if (temp_r4_2 != 0) {
            func_020856a8(temp_r4_2);
            func_02081f64(temp_r4_2);
        }
    }
    if (data_020d518c != 0) {
        func_0203f31c();
    }
    switch (data_020d51b0) {
        case 6:
        case 7:
        case 8:
        case 9:
            break;
        default:
            func_0207dfe8(data_020d5274, 0);
            func_0207dfe8(data_020d5278, 0);
            func_0207dfe8(data_020d51e8, 0);
            func_0203d648();
            break;
    }
    func_02085908(1);
}
