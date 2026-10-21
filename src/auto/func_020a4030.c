/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020a4064();                              /* extern */
extern void *data_020dabe0;
extern s32 data_020dabe4;

void func_020a4030(void) {
    void *temp_r0;

    temp_r0       = func_020a4064();
    data_020dabe0 = temp_r0;
    data_020dabe4 = (s32) M2C_FIELD(temp_r0, u16 *, 0xE);
}
