/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020039c0();                                /* extern */
M2C_UNK func_0204feb4(void *);                      /* extern */
M2C_UNK func_02061f54(s32, void *);                 /* extern */
s32 func_02082044(M2C_UNK);                         /* extern */
M2C_UNK func_02083114(s32, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020832c4(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02085984(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK data_020cf9ac;
extern M2C_UNK data_020cf9c0;

void func_0204ee70(void *arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;

    if (func_020039c0() == 0) {
        var_r1 = 7;
    } else {
        var_r1 = 0x19;
    }
    func_02085984(0, var_r1);
    func_02085984(1, 1);
    temp_r0 = func_02082044(0x28);
    if (temp_r0 != 0) {
        func_02061f54(temp_r0, arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x700) = temp_r0;
    func_02083114(M2C_FIELD(arg0, s32 *, 0x16C), &data_020cf9ac, 0x24, 0, 0xA000);
    func_020832c4(M2C_FIELD(arg0, s32 *, 0x200), &data_020cf9c0, 0x20, 0x200);
    func_0204feb4(arg0);
}
