/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209c2b0(void *);                      /* extern */
s32 func_0209d650();                                /* extern */
M2C_UNK func_0209d664(s32);                         /* extern */

void func_0209c32c(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_0209d650();
    if (M2C_FIELD(arg0, s32 *, 0x64) != 2) {
        func_0209c2b0(arg0 + 0x90);
    }
    func_0209d664(temp_r4);
}
