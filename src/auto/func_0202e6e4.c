/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b5358(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_020ccfdc;
extern M2C_UNK data_020cd848;
extern M2C_UNK func_02003a44;
extern M2C_UNK func_02005758;
extern M2C_UNK func_02027450;
extern M2C_UNK func_0202e7a4;

void *func_0202e6e4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ccfdc;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020cd848;
    M2C_FIELD(arg0, s32 *, 8)      = arg1;
    M2C_FIELD(arg0, s32 *, 0x10)   = 8;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    func_020b5358(arg0 + 0x1C, 5, 4, &func_02005758, &func_02003a44);
    func_020b5358(arg0 + 0x30, 5, 4, &func_02005758, &func_02003a44);
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    func_020b5358(arg0 + 0x68, 9, 4, &func_0202e7a4, &func_02027450);
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    return arg0;
}
