/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0209d650(void);
void func_0209d664(M2C_UNK);

extern s32 data_020da3fc;

s32 func_020a3394(void) {
    s32 temp_r0;

    temp_r0 = func_0209d650();
    if (data_020da3fc != 0) {
        func_0209d664(temp_r0);
        return 0;
    }
    data_020da3fc = 1;
    func_0209d664(temp_r0);
    return 1;
}
