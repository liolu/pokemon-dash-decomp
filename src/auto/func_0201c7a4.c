/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02099a68(s32, s32);                    /* extern */
extern M2C_UNK data_020d4f84;

void func_0201c7a4(void) {
    func_02099a68(0x0400006C, (s32) ((M2C_FIELD(&data_020d4f84, s32 *, 4) * 0x10) + 0x800) >> 0xC);
    func_02099a68(0x0400106C, (s32) ((M2C_FIELD(&data_020d4f84, s32 *, 0x14) * 0x10) + 0x800) >> 0xC);
}
