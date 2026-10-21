/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020039c0();                                /* extern */
M2C_UNK func_02005a94(M2C_UNK);                     /* extern */
M2C_UNK func_02023108(s32);                         /* extern */
M2C_UNK func_02023124(s32, M2C_UNK);                /* extern */
M2C_UNK func_02023454(s32, s32, s32);               /* extern */
M2C_UNK func_02061f54(s32, void *);                 /* extern */
s32 func_02082044(M2C_UNK);                         /* extern */
M2C_UNK func_02085740(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02085984(M2C_UNK, M2C_UNK);            /* extern */

void func_0205ec58(void *arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

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
    func_02005a94(-1);
}
