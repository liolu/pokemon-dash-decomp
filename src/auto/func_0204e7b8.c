/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207da08(void *, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_0207dbf8(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_0207dfe8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0207e89c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0207f0a0(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_0207f28c(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0207f500(void *, M2C_UNK, s32, M2C_UNK); /* extern */
void *func_02082044(M2C_UNK);                       /* extern */
M2C_UNK func_02082874(void *, M2C_UNK);             /* extern */
M2C_UNK func_0208300c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02083114(void *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020831f0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020832c4(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0208343c(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_020cf954;
extern M2C_UNK data_020cf964;
extern M2C_UNK data_020cf974;
extern s32 data_020d4534;

void func_0204e7b8(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_10;
    s32 temp_r0_2;
    s32 gv;
    s32 var_r9;
    s32 var_r8;
    void *temp_r0_11;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;

    func_0207da08(M2C_FIELD(arg0, void **, 0x128), 0x20, 0x18, M2C_FIELD(M2C_FIELD(arg0, void **, 0x130), s32 *, 8), 0, 0, 0,
                  0, 0, 0);
    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x124), s32 *, 0x2C);
    gv      = data_020d4534;
    if (temp_r0 != 0) {
        func_0207f0a0(temp_r0, gv, 0, 0x40);
    }
    temp_r0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x124), s32 *, 0x24);
    gv        = data_020d4534;
    if (temp_r0_2 != 0) {
        func_0207f0a0(temp_r0_2, gv, 0, 0);
    }
    temp_r0_3 = func_02082044(0x10);
    if (temp_r0_3 != NULL) {
        func_020831f0(temp_r0_3, 1, 0x6000);
    }
    M2C_FIELD(arg0, void **, 0x238) = temp_r0_3;
    temp_r0_4                       = func_02082044(0x10);
    if (temp_r0_4 != NULL) {
        func_020831f0(temp_r0_4, 1, 0x7000);
    }
    M2C_FIELD(arg0, void **, 0x23C) = temp_r0_4;
    func_02083114(M2C_FIELD(arg0, void **, 0x23C), &data_020cf954, 0x24, 0, 0x7000);
    temp_r0_5 = func_02082044(8);
    if (temp_r0_5 != NULL) {
        func_0208343c(temp_r0_5, 1, -1);
    }
    M2C_FIELD(arg0, void **, 0x248) = temp_r0_5;
    temp_r0_6                       = func_02082044(8);
    if (temp_r0_6 != NULL) {
        func_0208343c(temp_r0_6, 1, -1);
    }
    M2C_FIELD(arg0, void **, 0x24C) = temp_r0_6;
    func_020832c4(M2C_FIELD(arg0, void **, 0x24C), &data_020cf964, 0x20, 0x200);
    temp_r0_7 = func_02082044(0x30);
    if (temp_r0_7 != NULL) {
        func_02082874(temp_r0_7, 1);
    }
    M2C_FIELD(arg0, void **, 0x240) = temp_r0_7;
    temp_r0_8                       = func_02082044(0x30);
    if (temp_r0_8 != NULL) {
        func_02082874(temp_r0_8, 1);
    }
    M2C_FIELD(arg0, void **, 0x244) = temp_r0_8;
    temp_r0_9                       = func_02082044(0x54);
    if (temp_r0_9 != NULL) {
        func_0207e89c(temp_r0_9, 1, 3);
        M2C_FIELD(temp_r0_9, s32 *, 0x48) = 0;
        M2C_FIELD(temp_r0_9, s32 *, 0x4C) = 0;
        M2C_FIELD(temp_r0_9, s32 *, 0x50) = 0;
    }
    M2C_FIELD(arg0, void **, 0x12C) = temp_r0_9;
    func_0207dbf8(M2C_FIELD(arg0, void **, 0x12C), 1, 1, 0x800, 0x440, 0);
    temp_r0_10 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x12C), s32 *, 0x2C);
    gv         = data_020d4534;
    if (temp_r0_10 != 0) {
        func_0207f0a0(temp_r0_10, gv, 0, 0x40);
    }
    temp_r0_11 = func_02082044(0xC);
    if (temp_r0_11 != NULL) {
        func_0207f500(temp_r0_11, 1, M2C_FIELD(M2C_FIELD(arg0, void **, 0x12C), s32 *, 0xC), -1);
    }
    M2C_FIELD(arg0, void **, 0x138) = temp_r0_11;
    func_0207f28c(M2C_FIELD(arg0, void **, 0x138), &data_020cf974, 0x20, 0x200);
    var_r9 = 0;
    do {
        var_r8 = 0;
    loop_24:
        func_0207da08(M2C_FIELD(arg0, void **, 0x12C), 4, 4, M2C_FIELD(M2C_FIELD(arg0, void **, 0x138), s32 *, 8), var_r8,
                      var_r9, 0, 0, 0, 0);
        var_r8 += 4;
        if (var_r8 < 0x20) {
            goto loop_24;
        }
        var_r9 += 4;
    } while (var_r9 < 0x20);
    func_0207dfe8(M2C_FIELD(arg0, void **, 0x128), 1);
    func_0207dfe8(M2C_FIELD(arg0, void **, 0x124), 1);
    func_0207dfe8(M2C_FIELD(arg0, void **, 0x12C), 1);
    func_0208300c(1, 1);
}
