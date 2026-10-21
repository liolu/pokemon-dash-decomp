/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207e06c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0207f174(s32, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_0207f28c(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02083114(s32, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_020832c4(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020d03f4;
extern M2C_UNK data_020d0434;
extern M2C_UNK data_020d04d4;
extern M2C_UNK data_020d04f0;
extern M2C_UNK data_020d050c;
extern M2C_UNK data_020d0524;

void func_0205f544(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x128), s32 *, 0x2C);
    if (temp_r0 != 0) {
        func_0207f174(temp_r0, &data_020d04d4, 0x24, 0, 0xC000);
    }
    func_0207f28c(M2C_FIELD(arg0, s32 *, 0x130), &data_020d04f0, 0x20, 0x200);
    func_0207f28c(M2C_FIELD(arg0, s32 *, 0x134), &data_020d050c, 0x20, 0x200);
    func_0207e06c(M2C_FIELD(arg0, s32 *, 0x124), 0, 4);
    func_02083114(M2C_FIELD(arg0, s32 *, 0x238), &data_020d03f4, 0x7024, 0, 0x2000);
    func_020832c4(M2C_FIELD(arg0, s32 *, 0x248), &data_020d0434, 0x20, 0x200);
    temp_r0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x12C), s32 *, 0x2C);
    if (temp_r0_2 != 0) {
        func_0207f174(temp_r0_2, &data_020d0524, 0x1024, 0, 0x400);
    }
    M2C_FIELD(arg0, s32 *, 0x254) = 0x3000;
    M2C_FIELD(arg0, s32 *, 0x258) = 0x28;
}
