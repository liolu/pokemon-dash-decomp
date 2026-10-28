/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02095540(M2C_UNK *, M2C_UNK);          /* extern */
s32 _ZN3IRQ7DisableEv();                                /* extern */
M2C_UNK _ZN3IRQ7RestoreEj(s32);                         /* extern */
extern M2C_UNK data_020d7e70;

void func_02098090(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = _ZN3IRQ7DisableEv();
    func_02095540(&data_020d7e70, arg0);
    _ZN3IRQ7RestoreEj(temp_r4);
}
