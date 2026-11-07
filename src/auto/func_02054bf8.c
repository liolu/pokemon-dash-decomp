/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020039c0();                                /* extern */
M2C_UNK func_02023404(s32, s32, void *, M2C_UNK);   /* extern */
M2C_UNK func_0207d7d8(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0207d830(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0207da08(void *, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_0207dad8(void *, s32);                 /* extern */
M2C_UNK func_0207dfe8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0207e35c(void *, s32);                 /* extern */
M2C_UNK func_0207e398(void *, s32, s32, s32, s32, s32, s32);
M2C_UNK func_0207e900(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0207efcc(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0207f174(s32, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0207f28c(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_02082044(M2C_UNK);                         /* extern */
M2C_UNK func_02085740(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02085984(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK data_020cfe10;
extern M2C_UNK data_020cfe20;
extern M2C_UNK data_020cfe30;
extern M2C_UNK data_020cfe48;
extern M2C_UNK data_020cfe58;

void func_02054bf8(void *arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 var_r9;
    s32 var_r8;

    M2C_FIELD(arg0, s32 *, 0x5F0) = 0;
    func_0207f28c(M2C_FIELD(arg0, void **, 0x130), &data_020cfe10, 0x20, 0x200);
    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x128), s32 *, 0x2C);
    if (temp_r0 != 0) {
        func_0207f174(temp_r0, &data_020cfe20, 0x24, 0, 0xC000);
    }
    func_0207da08(M2C_FIELD(arg0, void **, 0x128), 0x20, 0x18, M2C_FIELD(M2C_FIELD(arg0, void **, 0x130), s32 *, 8), 0, 0, 0,
                  0, 0, 0);
    func_0207f28c(M2C_FIELD(arg0, void **, 0x134), &data_020cfe30, 0x20, 0x200);
    temp_r0_2 = func_02082044(0x10);
    if (temp_r0_2 != 0) {
        func_0207efcc(temp_r0_2, 1, 0x2000);
    }
    M2C_FIELD(arg0, s32 *, 0x618) = temp_r0_2;
    func_0207e398(M2C_FIELD(arg0, void **, 0x124), 3, 1, 0, 0, 0, 0);
    func_0207e35c(M2C_FIELD(arg0, void **, 0x124), M2C_FIELD(arg0, s32 *, 0x618));
    func_0207d830(M2C_FIELD(arg0, void **, 0x128), 0, 0);
    func_0207dfe8(M2C_FIELD(arg0, void **, 0x128), 1);
    func_0207dfe8(M2C_FIELD(arg0, void **, 0x124), 0);
    temp_r0_3 = func_02082044(0x14);
    if (temp_r0_3 != 0) {
        func_0207e900(temp_r0_3, 0, 0x400, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x14C) = temp_r0_3;
    func_0207dad8(M2C_FIELD(arg0, void **, 0x13C), M2C_FIELD(arg0, s32 *, 0x14C));
    temp_r0_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x13C), s32 *, 0x2C);
    if (temp_r0_4 != 0) {
        func_0207f174(temp_r0_4, &data_020cfe48, 0x24, 0, 0x400);
    }
    var_r9 = 0;
    do {
        var_r8 = 0;
    loop_10:
        func_0207da08(M2C_FIELD(arg0, void **, 0x13C), 4, 4, M2C_FIELD(M2C_FIELD(arg0, void **, 0x144), s32 *, 8), var_r8,
                      var_r9, 0, 0, 0, 0);
        var_r8 += 4;
        if (var_r8 < 0x20) {
            goto loop_10;
        }
        var_r9 += 4;
    } while (var_r9 < 0x20);
    func_0207d7d8(M2C_FIELD(arg0, void **, 0x13C), 0x1000, 0, 0);
    func_0207f28c(M2C_FIELD(arg0, void **, 0x144), &data_020cfe58, 0x20, 0x200);
    temp_r0_5 = func_02082044(0x14);
    if (temp_r0_5 != 0) {
        func_0207e900(temp_r0_5, 0, 0x5000, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x150) = temp_r0_5;
    func_0207dad8(M2C_FIELD(arg0, void **, 0x140), M2C_FIELD(arg0, s32 *, 0x150));
    func_0207d830(M2C_FIELD(arg0, void **, 0x13C), 0, 0);
    func_0207d830(M2C_FIELD(arg0, void **, 0x140), 0, 0);
    func_0207dfe8(M2C_FIELD(arg0, void **, 0x13C), 1);
    func_0207dfe8(M2C_FIELD(arg0, void **, 0x140), 1);
    if (func_020039c0() == 0) {
        var_r1 = 7;
    } else {
        var_r1 = 0x19;
    }
    func_02085984(0, var_r1);
    temp_r0_6 = func_02082044(0x48);
    if (temp_r0_6 != 0) {
        func_02085740(temp_r0_6, 0, 0x64);
    }
    M2C_FIELD(arg0, s32 *, 0x6FC) = temp_r0_6;
    temp_r0_7                     = func_02082044(0x40);
    if (temp_r0_7 != 0) {
        func_02023404(temp_r0_7, M2C_FIELD(arg0, s32 *, 0x6FC), M2C_FIELD(arg0, void **, 0x140), 0);
    }
    M2C_FIELD(arg0, s32 *, 0x6F8) = temp_r0_7;
}
