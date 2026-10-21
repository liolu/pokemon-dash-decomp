/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020039c0();                                /* extern */
M2C_UNK func_02023404(s32, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_02061f54(s32, void *);                 /* extern */
M2C_UNK func_0207da08(void *, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_0207dfe8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0207f174(s32, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0207f28c(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_02082044(M2C_UNK);                         /* extern */
M2C_UNK func_02083114(s32, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_020832c4(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02085740(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02085984(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK data_020cffc0;
extern M2C_UNK data_020cffcc;
extern M2C_UNK data_020cffd8;
extern M2C_UNK data_020cffe8;
extern M2C_UNK data_020cfff8;
extern M2C_UNK data_020d0008;

void func_020571f4(void *arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    func_0207dfe8(M2C_FIELD(arg0, void **, 0x128), 0);
    func_0207dfe8(M2C_FIELD(arg0, void **, 0x124), 0);
    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x128), s32 *, 0x2C);
    if (temp_r0 != 0) {
        func_0207f174(temp_r0, &data_020cffc0, 0x24, 0, 0xC000);
    }
    func_0207f28c(M2C_FIELD(arg0, s32 *, 0x130), &data_020cffcc, 0x20, 0x200);
    func_0207da08(M2C_FIELD(arg0, void **, 0x128), 0x20, 0x18, M2C_FIELD(M2C_FIELD(arg0, void **, 0x134), s32 *, 8), 0, 0, 0,
                  0, 0, 0);
    func_0207dfe8(M2C_FIELD(arg0, void **, 0x128), 1);
    temp_r0_2 = func_02082044(0x28);
    if (temp_r0_2 != 0) {
        func_02061f54(temp_r0_2, arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x700) = temp_r0_2;
    func_02083114(M2C_FIELD(arg0, s32 *, 0x16C), &data_020cffd8, 0xA024, 0, 0x1000);
    func_020832c4(M2C_FIELD(arg0, s32 *, 0x200), &data_020cffe8, 0x20, 0x200);
    func_02083114(M2C_FIELD(arg0, s32 *, 0x170), &data_020cfff8, 0x7024, 0, 0x1000);
    func_020832c4(M2C_FIELD(arg0, s32 *, 0x204), &data_020d0008, 0x20, 0x200);
    if (func_020039c0() == 0) {
        var_r1 = 7;
    } else {
        var_r1 = 0x19;
    }
    func_02085984(0, var_r1);
    temp_r0_3 = func_02082044(0x48);
    if (temp_r0_3 != 0) {
        func_02085740(temp_r0_3, 0, 0x64);
    }
    M2C_FIELD(arg0, s32 *, 0x6FC) = temp_r0_3;
    temp_r0_4                     = func_02082044(0x40);
    if (temp_r0_4 != 0) {
        func_02023404(temp_r0_4, M2C_FIELD(arg0, s32 *, 0x6FC), M2C_FIELD(arg0, s32 *, 0x140), 0x61);
    }
    M2C_FIELD(arg0, s32 *, 0x6F8) = temp_r0_4;
}
