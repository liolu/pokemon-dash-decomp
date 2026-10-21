/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02082044(M2C_UNK);                       /* extern */
extern M2C_UNK data_020beff0;
extern void *data_020d5164;
extern M2C_UNK data_020d516c;
extern M2C_UNK data_020d5174;

void func_0201f714(void *arg0) {
    s32 var_r0;
    s32 var_r1;
    s32 var_r2;
    s32 var_r2_2;
    u8 var_r4;
    void *temp_r0;
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r1 == NULL) {
        var_r4 = 0;
        if ((data_020d5164 != NULL) &&
            (*((M2C_UNK *) ((s8 *) &data_020beff0 + (M2C_FIELD(data_020d5164, s32 *, 0x1B4) * 4))) & 0x02000000)) {
            var_r4 = 1;
        }
        temp_r0 = func_02082044(0xC);
        if (temp_r0 != NULL) {
            M2C_FIELD(temp_r0, u8 *, 8) = var_r4;
            if (M2C_FIELD(temp_r0, u8 *, 8) != 0) {
                var_r2 = M2C_FIELD(&data_020d516c, s32 *, 0);
                var_r1 = M2C_FIELD(&data_020d516c, s32 *, 4);
            } else {
                var_r2 = M2C_FIELD(&data_020d5174, s32 *, 0);
                var_r1 = M2C_FIELD(&data_020d5174, s32 *, 4);
            }
            M2C_FIELD(temp_r0, s32 *, 0) = var_r2;
            M2C_FIELD(temp_r0, s32 *, 4) = var_r1;
        }
        M2C_FIELD(arg0, void **, 0x2C) = temp_r0;
        return;
    }
    if (M2C_FIELD(temp_r1, u8 *, 8) != 0) {
        var_r2_2 = M2C_FIELD(&data_020d516c, s32 *, 0);
        var_r0   = M2C_FIELD(&data_020d516c, s32 *, 4);
    } else {
        var_r2_2 = M2C_FIELD(&data_020d5174, s32 *, 0);
        var_r0   = M2C_FIELD(&data_020d5174, s32 *, 4);
    }
    M2C_FIELD(temp_r1, s32 *, 0) = var_r2_2;
    M2C_FIELD(temp_r1, s32 *, 4) = var_r0;
}
