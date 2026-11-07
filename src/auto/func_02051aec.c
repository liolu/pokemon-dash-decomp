/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02005ac4();                            /* extern */
M2C_UNK func_020525ec(M2C_UNK *, void *, s32 *, s32 *); /* extern */
M2C_UNK func_0207bde8(s32, M2C_UNK);                /* extern */
M2C_UNK func_0207d830(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0207dbf8(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_0207dfe8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0207e06c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0207e398(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_0207e838(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0207e89c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0207f0a0(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_0207f230(void *);                      /* extern */
M2C_UNK func_0207f4a0(void *);                      /* extern */
M2C_UNK func_02081f64(void *);                      /* extern */
void *func_02082044(M2C_UNK);                       /* extern */
M2C_UNK func_02083194(void *);                      /* extern */
M2C_UNK func_020833e4(void *);                      /* extern */
extern s32 data_020d4534;
extern s32 data_020d5d20;

void func_02051aec(void *arg0) {
    M2C_UNK spC;
    s32 sp10;
    s32 sp14;
    s32 gv;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_6;
    s32 temp_r0_7;
    void **temp_r0;
    void *temp_r0_2;
    void *temp_r0_5;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r5_5;

    func_0207bde8(M2C_FIELD(arg0, s32 *, 0x108) + 0x138, 0);
    if (data_020d5d20 == 5) {
        func_0207dfe8(M2C_FIELD(arg0, void **, 0x128), 0);
        func_0207d830(M2C_FIELD(arg0, void **, 0x128), 0, 0);
        func_0207dfe8(M2C_FIELD(arg0, void **, 0x124), 0);
        func_0207e06c(M2C_FIELD(arg0, void **, 0x124), 0, 0);
        temp_r5 = M2C_FIELD(arg0, void **, 0x138);
        if (temp_r5 != NULL) {
            func_0207f4a0(temp_r5);
            func_02081f64(temp_r5);
        }
        temp_r5_2 = M2C_FIELD(arg0, void **, 0x5DC);
        if (temp_r5_2 != NULL) {
            func_02083194(temp_r5_2);
            func_02081f64(temp_r5_2);
        }
        temp_r5_3 = M2C_FIELD(arg0, void **, 0x5E0);
        if (temp_r5_3 != NULL) {
            func_020833e4(temp_r5_3);
            func_02081f64(temp_r5_3);
        }
        temp_r5_4 = M2C_FIELD(arg0, void **, 0x5E4);
        if (temp_r5_4 != NULL) {
            sp14 = (s32) ((u8 *) temp_r5_4 + 4);
            sp10 = M2C_FIELD(temp_r5_4, s32 *, 8);
            func_020525ec(&spC, temp_r5_4, &sp10, &sp14);
            func_02081f64(temp_r5_4);
        }
    }
    func_0207dfe8(M2C_FIELD(arg0, void **, 0x13C), 0);
    temp_r5_5 = M2C_FIELD(arg0, void **, 0x14C);
    if (temp_r5_5 != NULL) {
        func_0207f230(temp_r5_5);
        func_02081f64(temp_r5_5);
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x6F0);
    if (temp_r0 != NULL) {
        (*(void (**)(void *))(*(u8 **) temp_r0 + 4))(temp_r0);
    }
    func_02005ac4();
    if (data_020d5d20 == 5) {
        return;
    }
    temp_r0_2 = func_02082044(0x54);
    if (temp_r0_2 != NULL) {
        func_0207e89c(temp_r0_2, 1, 2);
        M2C_FIELD(temp_r0_2, s32 *, 0x48) = 0;
        M2C_FIELD(temp_r0_2, s32 *, 0x4C) = 0;
        M2C_FIELD(temp_r0_2, s32 *, 0x50) = 0;
    }
    M2C_FIELD(arg0, void **, 0x128) = temp_r0_2;
    func_0207dbf8(M2C_FIELD(arg0, void **, 0x128), 1, 1, 0x800, 0xC000, 0);
    temp_r0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x128), s32 *, 0x24);
    gv        = data_020d4534;
    if (temp_r0_3 != 0) {
        func_0207f0a0(temp_r0_3, gv, 0, 0);
    }
    temp_r0_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x128), s32 *, 0x2C);
    gv        = data_020d4534;
    if (temp_r0_4 != 0) {
        func_0207f0a0(temp_r0_4, gv, 0, 0);
    }
    temp_r0_5 = func_02082044(0x34);
    if (temp_r0_5 != NULL) {
        func_0207e838(temp_r0_5, 1, 1);
    }
    M2C_FIELD(arg0, void **, 0x124) = temp_r0_5;
    func_0207e398(M2C_FIELD(arg0, void **, 0x124), 0, 1, 0, 0x800, 0xC000, 0);
    temp_r0_6 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x124), s32 *, 0x24);
    gv        = data_020d4534;
    if (temp_r0_6 != 0) {
        func_0207f0a0(temp_r0_6, gv, 0, 0);
    }
    temp_r0_7 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x124), s32 *, 0x2C);
    gv        = data_020d4534;
    if (temp_r0_7 == 0) {
        return;
    }
    func_0207f0a0(temp_r0_7, gv, 0, 0);
}
