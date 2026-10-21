/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02007a50();                                /* extern */
M2C_UNK func_02007a88();                            /* extern */
M2C_UNK func_02008750();                            /* extern */
extern u16 data_020d4e08;
extern u16 data_020d4e0c;
extern u16 data_020d4e18;
extern u16 data_020d4e20;
extern s32 data_020d4e50;

void func_02007290(void *arg0) {
    u16 temp_r3;

    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        data_020d4e50 = 0;
        func_02007a88();
        return;
    }
    temp_r3 = M2C_FIELD(arg0, u16 *, 0xA);
    if ((u32) temp_r3 < (u32) data_020d4e0c) {
        data_020d4e0c = temp_r3;
        data_020d4e08 = M2C_FIELD(arg0, u16 *, 8);
    }
    data_020d4e20 |= 1 << M2C_FIELD(arg0, u16 *, 8);
    if (data_020d4e20 != data_020d4e18) {
        return;
    }
    func_02008750();
    if (func_02007a50() != 0) {
        return;
    }
    data_020d4e50 = 0;
    func_02007a88();
}
