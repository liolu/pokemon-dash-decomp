/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209d6cc();                            /* extern */
M2C_UNK func_020a2dcc(s32);                         /* extern */
M2C_UNK func_020a4da0(M2C_UNK, M2C_UNK);            /* extern */

void func_020a4e04(void) {
    s32 temp_r0;

    temp_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0 != 0) {
        func_020a2dcc(temp_r0);
    }
    func_020a4da0(1, 1);
    func_0209d6cc();
}
