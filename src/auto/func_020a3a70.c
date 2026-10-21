/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0209d650(void);
void func_0209d664(M2C_UNK);
M2C_UNK func_020a3bb8(void);

extern M2C_UNK data_020da444;

s32 func_020a3a70(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = func_0209d650();
    if (M2C_FIELD(&data_020da444, s32 *, 0) != 0) {
        func_0209d664(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_020da444, s32 *, 0) = 1;
    func_0209d664(temp_r0);
    M2C_FIELD(&data_020da444, s32 *, 0x14) = 1;
    M2C_FIELD(&data_020da444, s32 *, 0x18) = 0;
    M2C_FIELD(&data_020da444, s32 *, 8)    = arg0;
    M2C_FIELD(&data_020da444, s32 *, 4)    = arg1;
    M2C_FIELD(&data_020da444, s32 *, 0x10) = arg2;
    if (func_020a3bb8() != 0) {
        return 0;
    }
    return 3;
}
