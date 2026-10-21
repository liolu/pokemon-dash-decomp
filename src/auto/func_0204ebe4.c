/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02061f54(s32, void *);                 /* extern */
s32 func_02082044(M2C_UNK);                         /* extern */
M2C_UNK func_02083114(s32, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_020832c4(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020cf9d4;
extern M2C_UNK data_020cf9e4;

void func_0204ebe4(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_02082044(0x28);
    if (temp_r0 != 0) {
        func_02061f54(temp_r0, arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x700) = temp_r0;
    func_02083114(M2C_FIELD(arg0, s32 *, 0x16C), &data_020cf9d4, 0x1C024, 0, 0x2000);
    func_020832c4(M2C_FIELD(arg0, s32 *, 0x200), &data_020cf9e4, 0x20, 0x200);
}
