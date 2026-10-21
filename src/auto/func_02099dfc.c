#include "m2c.h"

M2C_UNK func_02099e94(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020d83c6;

void func_02099dfc(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_02099e94(&data_020d83c6);
}
