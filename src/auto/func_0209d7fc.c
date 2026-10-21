/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209eef8();                            /* extern */
s32 func_0209f0dc(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0209f104(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_020d875c;
extern M2C_UNK func_0209d7b8;

void func_0209d7fc(void) {
    if (data_020d875c != 0) {
        return;
    }
    data_020d875c = 1;
    func_0209eef8();
    do {

    } while (func_0209f0dc(0xC, 1) == 0);
    func_0209f104(0xC, &func_0209d7b8);
}
