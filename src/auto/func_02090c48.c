/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02091358(M2C_UNK, s32 *, void **, u8 *, u8 *); /* extern */
void *func_020916b0(M2C_UNK, s32, u8, u8, s32 *);   /* extern */
extern u8 data_020d4450;
extern u8 data_020d4454;

void func_02090c48(void *arg0, M2C_UNK arg1, s32 *arg2) {
    void *sp8;
    u8 sp4;
    u8 sp5;
    s32 temp_r1;

    temp_r1 = func_02091358(arg1, arg2, &sp8, &sp4, &sp5);
    if ((sp8 == NULL) || ((s32) M2C_FIELD(sp8, s32 *, 0xC) < (s32) *arg2)) {
        M2C_FIELD(arg0, void **, 0) = func_020916b0(arg1, temp_r1, sp4, sp5, arg2);
        M2C_FIELD(arg0, u8 *, 4)    = (u8) data_020d4450;
        return;
    }
    M2C_FIELD(arg0, void **, 0) = sp8;
    M2C_FIELD(arg0, u8 *, 4)    = (u8) data_020d4454;
}
