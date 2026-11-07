/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207dfe8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0207e750(void *);                      /* extern */
M2C_UNK func_0207e7c4(void *);                      /* extern */
M2C_UNK func_0207f0a0(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_0207f230(void *);                      /* extern */
M2C_UNK func_0207f4a0(void *);                      /* extern */
M2C_UNK func_02081f64(void *);                      /* extern */
extern s32 data_020d4534;

void func_02048c7c(void *arg0) {
    s32 dv;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r0_8;
    void *temp_r0;
    void *temp_r0_4;
    void *temp_r6;
    void *temp_r6_2;
    void *temp_r6_3;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r5_5;
    void *temp_r5_6;
    void *temp_r5_7;
    void *temp_r5_8;

    func_0207dfe8(M2C_FIELD(arg0, void **, 0x13C), 0);
    func_0207dfe8(M2C_FIELD(arg0, void **, 0x140), 0);
    temp_r0 = M2C_FIELD(arg0, void **, 0x128);
    if (temp_r0 != NULL) {
        func_0207dfe8(temp_r0, 0);
        temp_r0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x128), s32 *, 0x2C);
        dv        = data_020d4534;
        if (temp_r0_2 != 0) {
            func_0207f0a0(temp_r0_2, dv, 0, 0);
        }
        temp_r0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x128), s32 *, 0x24);
        dv        = data_020d4534;
        if (temp_r0_3 != 0) {
            func_0207f0a0(temp_r0_3, dv, 0, 0);
        }
        temp_r6 = M2C_FIELD(arg0, void **, 0x128);
        if (temp_r6 != NULL) {
            temp_r5 = M2C_FIELD(temp_r6, void **, 0x50);
            if (temp_r5 != NULL) {
                func_0207f230(temp_r5);
                func_02081f64(temp_r5);
            }
            func_0207e750(temp_r6);
            func_02081f64(temp_r6);
        }
    }
    temp_r0_4 = M2C_FIELD(arg0, void **, 0x124);
    if (temp_r0_4 != NULL) {
        func_0207dfe8(temp_r0_4, 0);
        temp_r0_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x124), s32 *, 0x2C);
        dv        = data_020d4534;
        if (temp_r0_5 != 0) {
            func_0207f0a0(temp_r0_5, dv, 0, 0);
        }
        temp_r0_6 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x124), s32 *, 0x24);
        dv        = data_020d4534;
        if (temp_r0_6 != 0) {
            func_0207f0a0(temp_r0_6, dv, 0, 0);
        }
        temp_r5_2 = M2C_FIELD(arg0, void **, 0x124);
        if (temp_r5_2 != NULL) {
            func_0207e7c4(temp_r5_2);
            func_02081f64(temp_r5_2);
        }
    }
    temp_r0_7 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x13C), s32 *, 0x24);
    dv        = data_020d4534;
    if (temp_r0_7 != 0) {
        func_0207f0a0(temp_r0_7, dv, 0, 0);
    }
    temp_r0_8 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x140), s32 *, 0x24);
    dv        = data_020d4534;
    if (temp_r0_8 != 0) {
        func_0207f0a0(temp_r0_8, dv, 0, 0);
    }
    temp_r5_3 = M2C_FIELD(arg0, void **, 0x130);
    if (temp_r5_3 != NULL) {
        func_0207f4a0(temp_r5_3);
        func_02081f64(temp_r5_3);
    }
    temp_r5_4 = M2C_FIELD(arg0, void **, 0x134);
    if (temp_r5_4 != NULL) {
        func_0207f4a0(temp_r5_4);
        func_02081f64(temp_r5_4);
    }
    temp_r6_2 = M2C_FIELD(arg0, void **, 0x13C);
    if (temp_r6_2 != NULL) {
        temp_r5_5 = M2C_FIELD(temp_r6_2, void **, 0x50);
        if (temp_r5_5 != NULL) {
            func_0207f230(temp_r5_5);
            func_02081f64(temp_r5_5);
        }
        func_0207e750(temp_r6_2);
        func_02081f64(temp_r6_2);
    }
    temp_r5_6 = M2C_FIELD(arg0, void **, 0x144);
    if (temp_r5_6 != NULL) {
        func_0207f4a0(temp_r5_6);
        func_02081f64(temp_r5_6);
    }
    temp_r6_3 = M2C_FIELD(arg0, void **, 0x140);
    if (temp_r6_3 != NULL) {
        temp_r5_7 = M2C_FIELD(temp_r6_3, void **, 0x50);
        if (temp_r5_7 != NULL) {
            func_0207f230(temp_r5_7);
            func_02081f64(temp_r5_7);
        }
        func_0207e750(temp_r6_3);
        func_02081f64(temp_r6_3);
    }
    temp_r5_8 = M2C_FIELD(arg0, void **, 0x148);
    if (temp_r5_8 != NULL) {
        func_0207f4a0(temp_r5_8);
        func_02081f64(temp_r5_8);
    }
    M2C_FIELD(arg0, void **, 0x128) = NULL;
    M2C_FIELD(arg0, void **, 0x130) = NULL;
    M2C_FIELD(arg0, void **, 0x124) = NULL;
    M2C_FIELD(arg0, void **, 0x134) = NULL;
    M2C_FIELD(arg0, void **, 0x13C) = NULL;
    M2C_FIELD(arg0, void **, 0x140) = NULL;
    M2C_FIELD(arg0, void **, 0x144) = NULL;
    M2C_FIELD(arg0, void **, 0x148) = NULL;
    M2C_FIELD(arg0, s8 *, 0x120)    = 0;
}
