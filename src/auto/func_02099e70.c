#include "m2c.h"

M2C_UNK func_02099e94(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020d83be;

void func_02099e70(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_02099e94(&data_020d83be);
}
