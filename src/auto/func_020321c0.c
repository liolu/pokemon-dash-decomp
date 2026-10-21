/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0203231c(M2C_UNK);

extern M2C_UNK data_020beff0;
extern void *data_020d5164;

s32 func_020321c0(s32 arg0, s32 arg1) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x84) & ~0x80000000;
    temp_r1 = M2C_FIELD(arg1, s32 *, 0x84) & ~0x80000000;
    if (temp_r2 != 0) {
        if (temp_r1 != 0) {
            if (temp_r2 < temp_r1) {
                var_r0_4 = 1;
            } else {
                var_r0_4 = 0;
            }
            return var_r0_4;
        }
        return 1;
    }
    if (temp_r1 != 0) {
        return 0;
    }
    temp_r2_2 = M2C_FIELD(arg0, s32 *, 0xDC);
    temp_r1_2 = M2C_FIELD(arg1, s32 *, 0xDC);
    if (temp_r2_2 != temp_r1_2) {
        if (temp_r2_2 > temp_r1_2) {
            var_r0_3 = 1;
        } else {
            var_r0_3 = 0;
        }
        return var_r0_3;
    }
    if (*((M2C_UNK *) ((s8 *) &data_020beff0 + (M2C_FIELD(data_020d5164, s32 *, 0x1B4) * 4))) & 0x80000000) {
        temp_r2_3 = M2C_FIELD(arg0, s32 *, 0x88) & ~0x80000000;
        temp_r1_3 = M2C_FIELD(arg1, s32 *, 0x88) & ~0x80000000;
        if (temp_r2_3 != 0) {
            if (temp_r1_3 != 0) {
                if (temp_r2_3 < temp_r1_3) {
                    var_r0_2 = 1;
                } else {
                    var_r0_2 = 0;
                }
                return var_r0_2;
            }
            return 1;
        }
        if (temp_r1_3 != 0) {
            return 0;
        }
        goto block_24;
    }
block_24:
    if (!(M2C_FIELD(arg0, s32 *, 0xC) & 0x10)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xFC) < (s32) M2C_FIELD(arg1, s32 *, 0xFC)) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    temp_r5 = func_0203231c(arg0);
    if (temp_r5 < func_0203231c(arg1)) {
        return 1;
    }
    return 0;
}
