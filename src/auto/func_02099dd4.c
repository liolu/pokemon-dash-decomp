#include "m2c.h"

M2C_UNK func_02099e94(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020d83c8;

void func_02099dd4(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_02099e94(&data_020d83c8);
}
