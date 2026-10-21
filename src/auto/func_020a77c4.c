/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209d6cc();                            /* extern */
M2C_UNK func_020a77a4();                            /* extern */
extern s32 (*data_020db94c)();

void func_020a77c4(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0 = 0;
        if (data_020db94c != NULL) {
            var_r0 = data_020db94c();
        }
        if (var_r0 == 0) {
            return;
        }
        func_020a77a4();
        return;
    }
    func_0209d6cc();
}
