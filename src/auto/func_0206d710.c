/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209bc68(s32);                             /* extern */
M2C_UNK func_0209bcd8(u16);                         /* extern */
M2C_UNK func_0209d6cc();                            /* extern */
extern s32 data_020d60c0;

void func_0206d710(void) {
    if (data_020d60c0 == func_0209bc68(0x027FFFE0)) {
        func_0209d6cc();
    }
    func_0209bcd8((u16) data_020d60c0);
}
