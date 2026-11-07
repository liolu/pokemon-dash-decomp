/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207da08(void *, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_0207dbf8(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_0207e398(void *, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_0207e838(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0207e89c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0207f500(void *, M2C_UNK, s32, M2C_UNK); /* extern */
void *func_02082044(M2C_UNK);                       /* extern */
extern void *data_020d51c0;
extern s32 data_020d51d8;
extern void *data_020d51e4;
extern void *data_020d51e8;
extern s32 data_020d5228;
extern void *data_020d522c;
extern void *data_020d5230;
extern void *data_020d5244;
extern void *data_020d5274;
extern void *data_020d5278;

void func_0203b6c8(void) {
    s32 arg8;
    s32 var_r0;
    s32 var_r1;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;

    temp_r0 = func_02082044(0x34);
    if (temp_r0 != NULL) {
        func_0207e838(temp_r0, 1, 1);
    }
    data_020d5274 = temp_r0;
    func_0207e398(temp_r0, 2, 1, 0, 0x1000, 0, 0);
    temp_r0_2 = func_02082044(0xC);
    if (temp_r0_2 != NULL) {
        func_0207f500(temp_r0_2, 1, M2C_FIELD(data_020d5274, s32 *, 0xC), -1);
    }
    data_020d522c = temp_r0_2;
    temp_r0_3     = func_02082044(0xC);
    if (temp_r0_3 != NULL) {
        func_0207f500(temp_r0_3, 1, M2C_FIELD(data_020d5274, s32 *, 0xC), -1);
    }
    data_020d51c0 = temp_r0_3;
    data_020d5228 = 0;
    temp_r0_4     = func_02082044(0x54);
    if (temp_r0_4 != NULL) {
        func_0207e89c(temp_r0_4, 1, 2);
        M2C_FIELD(temp_r0_4, s32 *, 0x48) = 0;
        M2C_FIELD(temp_r0_4, s32 *, 0x4C) = 0;
        M2C_FIELD(temp_r0_4, s32 *, 0x50) = 0;
    }
    data_020d5278 = temp_r0_4;
    func_0207dbf8(temp_r0_4, 1, 0, 0x800, 0xC000, 1);
    temp_r0_5 = func_02082044(0xC);
    if (temp_r0_5 != NULL) {
        func_0207f500(temp_r0_5, 1, M2C_FIELD(data_020d5278, s32 *, 0xC), -1);
    }
    data_020d51e4 = temp_r0_5;
    temp_r0_6     = func_02082044(0xC);
    if (temp_r0_6 != NULL) {
        func_0207f500(temp_r0_6, 1, M2C_FIELD(data_020d5278, s32 *, 0xC), -1);
    }
    data_020d5244 = temp_r0_6;
    arg8          = M2C_FIELD(data_020d51e4, s32 *, 8);
    if (M2C_FIELD(data_020d5278, s32 *, 0x2C) != 0) {
        if (M2C_FIELD(data_020d5278, s32 *, 0x14) == 1) {
            var_r1 = 0x40;
        } else {
            var_r1 = 0x20;
        }
        var_r0 = (s32) M2C_FIELD(M2C_FIELD(data_020d5278, void **, 0x2C), s32 *, 0x10) / var_r1;
    } else {
        var_r0 = -1;
    }
    func_0207da08(data_020d5278, 0x20, 0x18, arg8, 0, 0, var_r0, 0, 0, 0);
    temp_r0_7 = func_02082044(0x54);
    if (temp_r0_7 != NULL) {
        func_0207e89c(temp_r0_7, 1, 3);
        M2C_FIELD(temp_r0_7, s32 *, 0x48) = 0;
        M2C_FIELD(temp_r0_7, s32 *, 0x4C) = 0;
        M2C_FIELD(temp_r0_7, s32 *, 0x50) = 0;
    }
    data_020d51e8 = temp_r0_7;
    func_0207dbf8(temp_r0_7, 1, 0, 0x800, 0, 0);
    temp_r0_8 = func_02082044(0xC);
    if (temp_r0_8 != NULL) {
        func_0207f500(temp_r0_8, 1, M2C_FIELD(data_020d51e8, s32 *, 0xC), -1);
    }
    data_020d5230       = temp_r0_8;
    data_020d51d8       = 0;
    *(s16 *) 0x05000400 = 0;
}
