/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02081edc();                            /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */
M2C_UNK func_02083714(s32);                         /* extern */
M2C_UNK func_020856a8(s32);                         /* extern */
M2C_UNK func_02085908(M2C_UNK);                     /* extern */
extern u8 data_020d518c;
extern s32 data_020d51a8;
extern s32 data_020d51c4;
extern s32 data_020d51dc;
extern s32 data_020d51e0;
extern s32 data_020d5200;
extern s32 data_020d5204;
extern s32 data_020d5238;
extern s32 data_020d5248;
extern u32 data_020d52e4;
extern s32 data_020d535c[];
extern s32 data_020d53a4[];

void func_0203767c(void) {
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r6_3;
    s32 temp_r4;
    s32 temp_r4_10;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;

    switch (data_020d52e4) {
        default:
            break;
        case 5:
            temp_r4 = data_020d5204;
            if (temp_r4 != 0) {
                func_02083714(temp_r4);
                func_02081f64(temp_r4);
            }
            temp_r4_2 = data_020d5238;
            if (temp_r4_2 != 0) {
                func_02083714(temp_r4_2);
                func_02081f64(temp_r4_2);
            }
            temp_r4_3 = data_020d51dc;
            if (temp_r4_3 != 0) {
                func_020856a8(temp_r4_3);
                func_02081f64(temp_r4_3);
            }
            temp_r4_4 = data_020d51c4;
            if (temp_r4_4 != 0) {
                func_020856a8(temp_r4_4);
                func_02081f64(temp_r4_4);
            }
            temp_r4_5 = data_020d51e0;
            if (temp_r4_5 != 0) {
                func_02083714(temp_r4_5);
                func_02081f64(temp_r4_5);
            }
            var_r6 = 0;
            do {
                temp_r5 = data_020d53a4[var_r6];
                if (temp_r5 != 0) {
                    func_020856a8(temp_r5);
                    func_02081f64(temp_r5);
                }
                var_r6 += 1;
            } while (var_r6 < 5);
            break;
        case 3:
        case 4:
            temp_r4_6 = data_020d51e0;
            if (temp_r4_6 != 0) {
                func_02083714(temp_r4_6);
                func_02081f64(temp_r4_6);
            }
            var_r6_2 = 0;
            do {
                temp_r5_2 = data_020d53a4[var_r6_2];
                if (temp_r5_2 != 0) {
                    func_020856a8(temp_r5_2);
                    func_02081f64(temp_r5_2);
                }
                var_r6_2 += 1;
            } while (var_r6_2 < 3);
            break;
        case 9:
            temp_r4_7 = data_020d5204;
            if (temp_r4_7 != 0) {
                func_02083714(temp_r4_7);
                func_02081f64(temp_r4_7);
            }
            temp_r4_8 = data_020d51dc;
            if (temp_r4_8 != 0) {
                func_020856a8(temp_r4_8);
                func_02081f64(temp_r4_8);
            }
            break;
    }
    if (data_020d518c != 0) {
        temp_r4_9 = data_020d5200;
        if (temp_r4_9 != 0) {
            func_02083714(temp_r4_9);
            func_02081f64(temp_r4_9);
        }
        temp_r4_10 = data_020d51a8;
        if (temp_r4_10 != 0) {
            func_02083714(temp_r4_10);
            func_02081f64(temp_r4_10);
        }
        var_r6_3 = 0;
        do {
            temp_r5_3 = data_020d535c[var_r6_3];
            if (temp_r5_3 != 0) {
                func_020856a8(temp_r5_3);
                func_02081f64(temp_r5_3);
            }
            var_r6_3 += 1;
        } while (var_r6_3 < 3);
    }
    func_02085908(1);
    if (data_020d5248 == 0) {
        return;
    }
    func_02081edc();
    data_020d5248 = 0;
}
