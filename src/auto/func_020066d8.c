/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020070d4(void *, s32);                 /* extern */
extern s8 data_020d4df4;
extern M2C_UNK data_020d4f00;
extern M2C_UNK data_020d4f16;

void func_020066d8(void *arg0) {
    func_020070d4(arg0 + 0x14, ((M2C_FIELD(arg0, u16 *, 0x10) - 1) * 0xD) + (s32) &data_020d4f16);
    M2C_FIELD(&data_020d4f00, u16 *, 0x60) =
        (u16) (M2C_FIELD(&data_020d4f00, u16 *, 0x60) | (1 << M2C_FIELD(arg0, u16 *, 0x10)));
    data_020d4df4 = 1;
}
