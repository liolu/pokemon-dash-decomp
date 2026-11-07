/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206d588(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0207dad8(void *, s32);                 /* extern */
M2C_UNK func_0207db68(void *, s32);                 /* extern */
M2C_UNK func_0207dbf8(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_0207dfe8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0207e900(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0207efcc(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0207f0a0(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_0207f500(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_02081fec(s32);                             /* extern */
s32 func_02082044(M2C_UNK);                         /* extern */
M2C_UNK func_ov001_020ddda4();                      /* extern */
extern s32 data_020d4534;
extern s32 data_020d65a4;
extern s32 data_ov001_020de764;
extern s32 data_ov001_020de768;
extern s32 data_ov001_020de770;
extern void *data_ov001_020de77c;
extern s32 data_ov001_020de780;
extern s32 data_ov001_020de788;
extern s32 data_ov001_020de79c;
extern s32 data_ov001_020de7b0;
extern s32 data_ov001_020de7b8;

void func_ov001_020ddbb4(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 var_r1;
    void *temp_r1;

    data_ov001_020de77c = arg0;
    func_0207dbf8(arg0, 2, 0, 0, 0, 0);
    temp_r0 = func_02082044(0x10);
    if (temp_r0 != 0) {
        func_0207efcc(temp_r0, 0, 0x2000);
    }
    data_ov001_020de7b0 = temp_r0;
    func_0207db68(data_ov001_020de77c, temp_r0);
    temp_r0_2 = func_02082044(0x14);
    if (temp_r0_2 != 0) {
        func_0207e900(temp_r0_2, 0, 0xD000, 1);
    }
    data_ov001_020de768 = temp_r0_2;
    temp_r0_3           = func_02082044(0x14);
    if (temp_r0_3 != 0) {
        func_0207e900(temp_r0_3, 0, 0xD000, 1);
    }
    data_ov001_020de79c = temp_r0_3;
    func_0207dad8(data_ov001_020de77c, data_ov001_020de768);
    temp_r0_4 = func_02082044(0xC);
    if (temp_r0_4 != 0) {
        func_0207f500(temp_r0_4, 0, M2C_FIELD(data_ov001_020de77c, s32 *, 0xC), -1);
    }
    data_ov001_020de780 = temp_r0_4;
    temp_r1             = M2C_FIELD(data_ov001_020de77c, void **, 0x2C);
    if (temp_r1 != NULL) {
        var_r1 = M2C_FIELD(temp_r1, s32 *, 0xC) + M2C_FIELD(temp_r1, s32 *, 4);
        if (M2C_FIELD(temp_r1, s32 *, 0) == 0) {
            var_r1 += data_020d65a4;
        }
    } else {
        var_r1 = 0;
    }
    data_ov001_020de788 = var_r1;
    func_ov001_020ddda4();
    data_ov001_020de770 = -1;
    data_ov001_020de764 = -1;
    func_0207f0a0(data_ov001_020de768, data_020d4534, 0, 0xD000);
    func_0207dfe8(data_ov001_020de77c, 1);
    if (data_ov001_020de7b8 == 0) {
        data_ov001_020de7b8 = func_02081fec(0x83C);
    }
    func_0206d588(data_ov001_020de7b8, 0x100, 0, 0, 0);
}
