/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205ffac(void *);                      /* extern */
M2C_UNK func_02061f54(s32, void *);                 /* extern */
s32 func_02082044(M2C_UNK);                         /* extern */
M2C_UNK func_02083114(s32, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_020832c4(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020d0494;
extern M2C_UNK data_020d04a8;

void func_0205f380(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = func_02082044(0x28);
    if (temp_r0 != 0) {
        func_02061f54(temp_r0, arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x700) = temp_r0;
    func_02083114(M2C_FIELD(arg0, s32 *, 0x16C), &data_020d0494, 0xB024, 0, 0x1000);
    func_02083114(M2C_FIELD(arg0, s32 *, 0x16C), &data_020d0494, 0x24, 0x1000, 0x5000);
    func_02083114(M2C_FIELD(arg0, s32 *, 0x16C), &data_020d0494, 0xC024, 0x6000, 0x1000);
    func_02083114(M2C_FIELD(arg0, s32 *, 0x16C), &data_020d0494, 0x5024, 0x7000, 0x5000);
    func_020832c4(M2C_FIELD(arg0, s32 *, 0x200), &data_020d04a8, 0x20, 0x200);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xE8);
    if ((temp_r0_2 != 0xD) && (temp_r0_2 != 0x17) && (temp_r0_2 != 0x18) && (temp_r0_2 != 0x20)) {
        return;
    }
    func_0205ffac(arg0);
}
