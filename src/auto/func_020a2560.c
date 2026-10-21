/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209eef8();                            /* extern */
s32 func_0209f0dc(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0209f104(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_020da3a8;
extern M2C_UNK data_020da3ac;
extern M2C_UNK func_020a25f0;

void func_020a2560(void) {
    if (data_020da3a8 != 0) {
        return;
    }
    data_020da3a8 = 1;
    func_0209eef8();
    M2C_FIELD(&data_020da3ac, s16 *, 0x32) = 0;
    M2C_FIELD(&data_020da3ac, s16 *, 0x36) = 0;
    M2C_FIELD(&data_020da3ac, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_020da3ac, s32 *, 0)    = 0;
    M2C_FIELD(&data_020da3ac, s32 *, 0x10) = 0;
    M2C_FIELD(&data_020da3ac, s16 *, 0x30) = 0;
    M2C_FIELD(&data_020da3ac, s16 *, 0x34) = 0;
    do {

    } while (func_0209f0dc(6, 1) == 0);
    func_0209f104(6, &func_020a25f0);
}
