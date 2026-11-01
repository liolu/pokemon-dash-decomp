/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206d9e4(s32, s32, s32);               /* extern */
s32 func_0206d9f0(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_02081fec(s32);                             /* extern */
extern M2C_UNK data_020ccfdc;
extern M2C_UNK data_020d3998;

void *func_020741f8(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r6;
    s32 temp_r3;
    void *temp_r1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ccfdc;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s8 *, 8)       = (s8) (M2C_FIELD(arg1, s32 *, 0x18) & 0x10);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d3998;
    M2C_FIELD(arg0, void **, 0xC)  = arg1;
    temp_r1                        = M2C_FIELD(arg0, void **, 0xC);
    if (M2C_FIELD(temp_r1, s32 *, 0x20) == 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(temp_r1, s32 *, 0);
    } else {
        temp_r6                      = (M2C_FIELD(temp_r1, s32 *, 4) + 3) & ~3;
        temp_r0                      = func_02081fec(temp_r6);
        M2C_FIELD(arg0, s32 *, 0x18) = temp_r0;
        temp_r3                      = func_0206d9f0(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x20), 0, 1);
        func_0206d9e4(temp_r3 + M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0), temp_r0, temp_r6);
    }
    return arg0;
}
