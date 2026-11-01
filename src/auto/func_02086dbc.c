/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02086c14(void *, M2C_UNK);
M2C_UNK func_02086d30(void *, M2C_UNK, M2C_UNK);
M2C_UNK func_020880dc(M2C_UNK *, void *, s32 *, void **);

void func_02086dbc(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK sp0;
    s32 sp4;
    void *sp8;

    if (M2C_FIELD(arg0, u8 *, 0x1BC) != 0) {
        func_02086c14(arg0, 0);
    }
    sp8 = (u8 *) arg0 + 0x16C;
    sp4 = M2C_FIELD(arg0, s32 *, 0x170);
    func_020880dc(&sp0, (u8 *) arg0 + 0x168, &sp4, &sp8);
    func_02086d30(arg0, arg1, arg2);
}
