/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209d6cc();                            /* extern */
M2C_UNK func_020a4e04();                            /* extern */
extern s32 data_020dae20;
extern s32 (*data_020dae24)();

void func_020a4e44(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0        = 1;
        data_020dae20 = 1;
        if (data_020dae24 != NULL) {
            var_r0 = data_020dae24();
        }
        if (var_r0 == 0) {
            return;
        }
        func_020a4e04();
        return;
    }
    func_0209d6cc();
}
