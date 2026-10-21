/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209eef8();                            /* extern */
s32 func_0209f0dc(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0209f104(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020a7764();                            /* extern */
M2C_UNK func_020a7860();                            /* extern */
extern s32 data_020db948;
extern s32 data_020db94c;
extern M2C_UNK func_020a77c4;
extern M2C_UNK func_020a7824;

void func_020a7a1c(void) {
    if (data_020db948 != 0) {
        return;
    }
    data_020db948 = 1;
    func_020a7764();
    func_0209eef8();
    do {

    } while (func_0209f0dc(0xD, 1) == 0);
    func_0209f104(0xD, &func_020a7824);
    func_020a7860();
    func_0209f104(0xD, NULL);
    func_0209f104(0xD, &func_020a77c4);
    data_020db94c = 0;
}
