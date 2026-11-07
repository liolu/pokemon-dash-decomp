/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207eda8(s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_0207f0a0(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_0207f174(s32, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020d04bc;
extern s32 data_020d4534;

void func_0205f480(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 *pd;
    s32 *pa;
    s32 arg3;
    s32 dv;

    pd      = &data_020d4534;
    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x124), s32 *, 0x24);
    dv      = *pd;
    if (temp_r0 != 0) {
        func_0207f0a0(temp_r0, dv, 0, 0);
    }
    temp_r0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x124), s32 *, 0x2C);
    if (temp_r0_2 != 0) {
        func_0207f174(temp_r0_2, &data_020d04bc, (arg1 << 0xE) + 0x24, 0x40, 0x3000);
    }
    pa        = M2C_FIELD(arg0, s32 **, 0x134);
    arg3      = pa[2];
    temp_r0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x124), s32 *, 0x24);
    if (temp_r0_3 != 0) {
        func_0207eda8(temp_r0_3, 0x20, 6, arg3, 0, 0xE, 1, 0, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x250) = (s32) (arg1 << 0xC);
}
