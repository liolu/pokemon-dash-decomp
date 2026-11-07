/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02005ac4();                            /* extern */
M2C_UNK func_0207d830(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0207dfe8(s32, M2C_UNK);                /* extern */
M2C_UNK func_02081f64(M2C_UNK **);                  /* extern */
M2C_UNK func_02082b74(M2C_UNK **);                  /* extern */
M2C_UNK func_02082ffc(M2C_UNK);                     /* extern */
M2C_UNK func_02083194(M2C_UNK **);                  /* extern */
M2C_UNK func_020833e4(M2C_UNK **);                  /* extern */
M2C_UNK func_020856a8(M2C_UNK **);                  /* extern */
M2C_UNK func_02085908(M2C_UNK);                     /* extern */
extern M2C_UNK data_020d3e6c;

void func_0205f820(void *arg0) {
    M2C_UNK **temp_r5;
    M2C_UNK **temp_r5_10;
    M2C_UNK **temp_r5_11;
    M2C_UNK **temp_r5_12;
    M2C_UNK **temp_r5_13;
    M2C_UNK **temp_r5_14;
    M2C_UNK **temp_r5_15;
    M2C_UNK **temp_r5_2;
    M2C_UNK **temp_r5_3;
    M2C_UNK **temp_r5_4;
    M2C_UNK **temp_r5_5;
    M2C_UNK **temp_r5_6;
    M2C_UNK **temp_r5_7;
    M2C_UNK **temp_r5_8;
    M2C_UNK **temp_r5_9;
    s32 var_r7;
    M2C_UNK **temp_r6;
    void *temp_r0;

    func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x128), 0);
    func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x124), 0);
    func_0207d830(M2C_FIELD(arg0, s32 *, 0x128), 0, 0);
    func_02082ffc(1);
    temp_r5 = M2C_FIELD(arg0, M2C_UNK ***, 0x264);
    if (temp_r5 != NULL) {
        func_02083194(temp_r5);
        func_02081f64(temp_r5);
    }
    M2C_FIELD(arg0, M2C_UNK ***, 0x264) = NULL;
    temp_r5_2                           = M2C_FIELD(arg0, M2C_UNK ***, 0x25C);
    if (temp_r5_2 != NULL) {
        func_02083194(temp_r5_2);
        func_02081f64(temp_r5_2);
    }
    M2C_FIELD(arg0, M2C_UNK ***, 0x25C) = NULL;
    temp_r5_3                           = M2C_FIELD(arg0, M2C_UNK ***, 0x260);
    if (temp_r5_3 != NULL) {
        func_02083194(temp_r5_3);
        func_02081f64(temp_r5_3);
    }
    M2C_FIELD(arg0, M2C_UNK ***, 0x260) = NULL;
    temp_r5_4                           = M2C_FIELD(arg0, M2C_UNK ***, 0x268);
    if (temp_r5_4 != NULL) {
        func_02083194(temp_r5_4);
        func_02081f64(temp_r5_4);
    }
    M2C_FIELD(arg0, M2C_UNK ***, 0x268) = NULL;
    temp_r5_5                           = M2C_FIELD(arg0, M2C_UNK ***, 0x26C);
    if (temp_r5_5 != NULL) {
        func_02083194(temp_r5_5);
        func_02081f64(temp_r5_5);
    }
    M2C_FIELD(arg0, M2C_UNK ***, 0x26C) = NULL;
    temp_r5_6                           = M2C_FIELD(arg0, M2C_UNK ***, 0x28C);
    if (temp_r5_6 != NULL) {
        func_020833e4(temp_r5_6);
        func_02081f64(temp_r5_6);
    }
    M2C_FIELD(arg0, M2C_UNK ***, 0x28C) = NULL;
    temp_r5_7                           = M2C_FIELD(arg0, M2C_UNK ***, 0x284);
    if (temp_r5_7 != NULL) {
        func_020833e4(temp_r5_7);
        func_02081f64(temp_r5_7);
    }
    M2C_FIELD(arg0, M2C_UNK ***, 0x284) = NULL;
    temp_r5_8                           = M2C_FIELD(arg0, M2C_UNK ***, 0x288);
    if (temp_r5_8 != NULL) {
        func_020833e4(temp_r5_8);
        func_02081f64(temp_r5_8);
    }
    M2C_FIELD(arg0, M2C_UNK ***, 0x288) = NULL;
    temp_r5_9                           = M2C_FIELD(arg0, M2C_UNK ***, 0x290);
    if (temp_r5_9 != NULL) {
        func_020833e4(temp_r5_9);
        func_02081f64(temp_r5_9);
    }
    M2C_FIELD(arg0, M2C_UNK ***, 0x290) = NULL;
    temp_r5_10                          = M2C_FIELD(arg0, M2C_UNK ***, 0x294);
    if (temp_r5_10 != NULL) {
        func_020833e4(temp_r5_10);
        func_02081f64(temp_r5_10);
    }
    M2C_FIELD(arg0, M2C_UNK ***, 0x294) = NULL;
    temp_r5_11                          = M2C_FIELD(arg0, M2C_UNK ***, 0x278);
    if (temp_r5_11 != NULL) {
        *temp_r5_11 = &data_020d3e6c;
        func_02082b74(temp_r5_11);
        func_02081f64(temp_r5_11);
    }
    M2C_FIELD(arg0, M2C_UNK ***, 0x278) = NULL;
    temp_r5_12                          = M2C_FIELD(arg0, M2C_UNK ***, 0x27C);
    if (temp_r5_12 != NULL) {
        *temp_r5_12 = &data_020d3e6c;
        func_02082b74(temp_r5_12);
        func_02081f64(temp_r5_12);
    }
    M2C_FIELD(arg0, M2C_UNK ***, 0x27C) = NULL;
    temp_r5_13                          = M2C_FIELD(arg0, M2C_UNK ***, 0x280);
    if (temp_r5_13 != NULL) {
        *temp_r5_13 = &data_020d3e6c;
        func_02082b74(temp_r5_13);
        func_02081f64(temp_r5_13);
    }
    M2C_FIELD(arg0, M2C_UNK ***, 0x280) = NULL;
    temp_r5_14                          = M2C_FIELD(arg0, M2C_UNK ***, 0x270);
    if (temp_r5_14 != NULL) {
        *temp_r5_14 = &data_020d3e6c;
        func_02082b74(temp_r5_14);
        func_02081f64(temp_r5_14);
    }
    M2C_FIELD(arg0, M2C_UNK ***, 0x270) = NULL;
    temp_r5_15                          = M2C_FIELD(arg0, M2C_UNK ***, 0x274);
    if (temp_r5_15 != NULL) {
        *temp_r5_15 = &data_020d3e6c;
        func_02082b74(temp_r5_15);
        func_02081f64(temp_r5_15);
    }
    var_r7                              = 0;
    M2C_FIELD(arg0, M2C_UNK ***, 0x274) = NULL;
    do {
        temp_r6 = ((M2C_UNK ***) ((u8 *) arg0 + 0x298))[var_r7];
        if (temp_r6 != NULL) {
            func_020856a8(temp_r6);
            func_02081f64(temp_r6);
        }
        ((s32 *) ((u8 *) arg0 + 0x298))[var_r7] = 0;
        var_r7 += 1;
    } while (var_r7 < 6);
    func_02085908(1);
    func_02005ac4();
}
