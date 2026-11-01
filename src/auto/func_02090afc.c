/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020913cc(M2C_UNK, s32 *, void **, u8 *, u8 *); /* extern */
void *func_02091518(M2C_UNK, s32, u8, u8, s32 *);   /* extern */
extern u8 data_020d4458;
extern u8 data_020d445c;

void func_02090afc(void *arg0, M2C_UNK arg1, s32 *arg2) {
    void *sp8;
    u8 sp4;
    u8 sp5;
    s32 temp_r1;

    temp_r1 = func_020913cc(arg1, arg2, &sp8, &sp4, &sp5);
    if ((sp8 == NULL) || ((s32) M2C_FIELD(sp8, s32 *, 0xC) < (s32) *arg2)) {
        M2C_FIELD(arg0, void **, 0) = func_02091518(arg1, temp_r1, sp4, sp5, arg2);
        M2C_FIELD(arg0, u8 *, 4)    = (u8) data_020d4458;
        return;
    }
    M2C_FIELD(arg0, void **, 0) = sp8;
    M2C_FIELD(arg0, u8 *, 4)    = (u8) data_020d445c;
}
