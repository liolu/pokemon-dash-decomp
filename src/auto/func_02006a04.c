/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020087e0(M2C_UNK);

extern s8 data_020d4e04;
extern s8 *data_020d4e38;
extern M2C_UNK data_020d4e8c;
extern M2C_UNK data_020d4f00;

s32 func_02006a04(void) {
    s32 temp_r0;

    *data_020d4e38 = 0;
    data_020d4e04  = 1;
    temp_r0        = func_020087e0(0);
    if ((temp_r0 != 0) && (M2C_FIELD(temp_r0, u8 *, 0) == 1)) {
        M2C_FIELD(&data_020d4f00, u16 *, 0x60) = (u16) M2C_FIELD(temp_r0, u16 *, 4);
        M2C_FIELD(&data_020d4e8c, u16 *, 4)    = (u16) M2C_FIELD(temp_r0, u16 *, 6);
        M2C_FIELD(&data_020d4e8c, s32 *, 0)    = (s32) M2C_FIELD(temp_r0, s32 *, 8);
        M2C_FIELD(&data_020d4e8c, u8 *, 0x19)  = (u8) M2C_FIELD(temp_r0, u8 *, 0xC);
        M2C_FIELD(&data_020d4e8c, u8 *, 6)     = (u8) M2C_FIELD(temp_r0, u8 *, 0xD);
        M2C_FIELD(&data_020d4e8c, u8 *, 7)     = (u8) M2C_FIELD(temp_r0, u8 *, 0xE);
        return 1;
    }
    return 0;
}
