/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207da08(void *, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_0207dfe8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0207f174(s32, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0207f28c(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020cfb24;
extern M2C_UNK data_020cfb3c;

void func_020500bc(void *arg0) {
    s32 temp_r0;

    func_0207dfe8(M2C_FIELD(arg0, void **, 0x13C), 0);
    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x13C), s32 *, 0x2C);
    if (temp_r0 != 0) {
        func_0207f174(temp_r0, &data_020cfb24, 0x24, 0, 0xC000);
    }
    func_0207f28c(M2C_FIELD(arg0, void **, 0x144), &data_020cfb3c, 0x20, 0x200);
    func_0207da08(M2C_FIELD(arg0, void **, 0x13C), 0x20, 0x18, M2C_FIELD(M2C_FIELD(arg0, void **, 0x144), s32 *, 8), 0, 0, 0,
                  0, 0, 0);
    func_0207dfe8(M2C_FIELD(arg0, void **, 0x13C), 1);
}
