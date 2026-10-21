/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02007a88();                            /* extern */
s32 func_020a718c(M2C_UNK *, M2C_UNK, M2C_UNK, u16, s32); /* extern */
extern s16 data_020d4e0c;
extern u16 data_020d4e18;
extern s16 data_020d4e20;
extern s32 data_020d4e50;
extern M2C_UNK func_02007290;

void func_020071d4(void) {
    u16 var_r10;

    data_020d4e20 = 0;
    data_020d4e0c = 0x65;
    var_r10       = 1;
loop_1:
    if ((data_020d4e18 & (1 << var_r10)) && (func_020a718c(&func_02007290, 3, 0x11, var_r10, 0x1E) != 2)) {
        data_020d4e50 = 0;
        func_02007a88();
        return;
    }
    var_r10 += 1;
    if ((u32) var_r10 > 0xEU) {
        return;
    }
    goto loop_1;
}
