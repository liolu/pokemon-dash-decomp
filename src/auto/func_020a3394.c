/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK _ZN3IRQ7DisableEv(void);
void _ZN3IRQ7RestoreEj(M2C_UNK);

extern s32 data_020da3fc;

s32 func_020a3394(void) {
    s32 temp_r0;

    temp_r0 = _ZN3IRQ7DisableEv();
    if (data_020da3fc != 0) {
        _ZN3IRQ7RestoreEj(temp_r0);
        return 0;
    }
    data_020da3fc = 1;
    _ZN3IRQ7RestoreEj(temp_r0);
    return 1;
}
