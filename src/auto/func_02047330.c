/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 func_0209bbd0(void);
extern void func_020a3bd8(u16);
extern u8 data_020d54c0;
extern u16 data_020d54c8;

void func_02047330(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_0209bbd0();
    func_020a3bd8((u16) temp_r4);
    data_020d54c8 = (u16) temp_r4;
    if (arg0 != 0) {
        data_020d54c0 = 1;
    }
}
