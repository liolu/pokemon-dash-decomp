/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020039c0();                                /* extern */
M2C_UNK func_02005a94(M2C_UNK);                     /* extern */
M2C_UNK func_02023108(s32);                         /* extern */
M2C_UNK func_02023124(s32, M2C_UNK);                /* extern */
M2C_UNK func_02023454(s32, s32, s32);               /* extern */
M2C_UNK func_0205ffac(void *);                      /* extern */
M2C_UNK func_02061f54(s32, void *);                 /* extern */
s32 func_02082044(M2C_UNK);                         /* extern */
M2C_UNK func_02083114(s32, M2C_UNK *, s32, s32, s32); /* extern */
M2C_UNK func_020832c4(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02085740(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02085984(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK data_020d03f4;
extern M2C_UNK data_020d0434;
extern s8 data_020d5dfc;

void func_0205ef04(void *arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 var_r9;
    s32 var_r8;
    s8 *var_r7;

    if (func_020039c0() == 0) {
        var_r1 = 7;
    } else {
        var_r1 = 0x19;
    }
    func_02085984(0, var_r1);
    temp_r0 = func_02082044(0x48);
    if (temp_r0 != 0) {
        func_02085740(temp_r0, 0, 0x64);
    }
    M2C_FIELD(arg0, s32 *, 0x6FC) = temp_r0;
    temp_r0_2                     = func_02082044(0x40);
    if (temp_r0_2 != 0) {
        func_02023454(temp_r0_2, M2C_FIELD(arg0, s32 *, 0x6FC), M2C_FIELD(arg0, s32 *, 0x140));
    }
    M2C_FIELD(arg0, s32 *, 0x6F8) = temp_r0_2;
    temp_r0_3                     = func_02082044(0x28);
    if (temp_r0_3 != 0) {
        func_02061f54(temp_r0_3, arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x700) = temp_r0_3;
    func_02023124(M2C_FIELD(arg0, s32 *, 0x6F8), 0x61);
    func_02023108(M2C_FIELD(arg0, s32 *, 0x6F8));
    var_r9 = 0;
    var_r7 = &data_020d5dfc;
    var_r8 = 0;
    do {
        func_02083114(M2C_FIELD(arg0, s32 *, 0x16C), &data_020d03f4, 0x6024, var_r8, 0x1000);
        var_r9 += 1;
        *var_r7 = 0;
        var_r8 += 0x1000;
        var_r7 += 1;
    } while (var_r9 < 6);
    func_020832c4(M2C_FIELD(arg0, s32 *, 0x200), &data_020d0434, 0x20, 0x200);
    if (M2C_FIELD(arg0, s32 *, 0xE8) == 0xD) {
        func_0205ffac(arg0);
    }
    func_02005a94(-1);
}
