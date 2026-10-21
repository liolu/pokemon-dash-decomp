/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209b278(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209b2e0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209cdd4(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0209dbf8(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 data_020d4534;
extern M2C_UNK data_020d6760;
extern M2C_UNK data_020d6b60;

void func_02083074(void) {
    func_0209cdd4(&data_020d6760, 0x800);
    func_0209b278(&data_020d6b60, 0, 0x400);
    func_0209b2e0(&data_020d6760, 0, 0x400);
    func_0209dbf8(data_020d4534, &data_020d6760, 0xC0, 0x800);
}
