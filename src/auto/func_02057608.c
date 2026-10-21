/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207e06c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0207f174(s32, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_0207f28c(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02083114(s32, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_020832c4(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020cfe48;
extern M2C_UNK data_020cffd8;
extern M2C_UNK data_020cffe8;
extern M2C_UNK data_020d0018;
extern M2C_UNK data_020d0030;
extern M2C_UNK data_020d0048;

void func_02057608(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x128), s32 *, 0x2C);
    if (temp_r0 != 0) {
        func_0207f174(temp_r0, &data_020d0018, 0x24, 0, 0xC000);
    }
    func_0207f28c(M2C_FIELD(arg0, s32 *, 0x130), &data_020d0030, 0x20, 0x200);
    func_0207f28c(M2C_FIELD(arg0, s32 *, 0x134), &data_020d0048, 0x20, 0x200);
    func_0207e06c(M2C_FIELD(arg0, s32 *, 0x124), 0, 4);
    func_02083114(M2C_FIELD(arg0, s32 *, 0x238), &data_020cffd8, 0x9024, 0, 0x3000);
    func_020832c4(M2C_FIELD(arg0, s32 *, 0x248), &data_020cffe8, 0x20, 0x200);
    temp_r0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x12C), s32 *, 0x2C);
    if (temp_r0_2 != 0) {
        func_0207f174(temp_r0_2, &data_020cfe48, 0x1424, 0, 0x400);
    }
    M2C_FIELD(arg0, s32 *, 0x254) = 0x4000;
    M2C_FIELD(arg0, s32 *, 0x258) = 0x28;
}
