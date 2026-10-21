/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209c81c();                                /* extern */
s32 func_0209c850();                                /* extern */
s32 func_0209c99c();                                /* extern */
extern s32 data_020d45a0;

s32 func_0209c924(void) {
    s32 temp_r4;
    s32 var_r2;

    if (data_020d45a0 == -1) {
        temp_r4 = func_0209c850();
        if (func_0209c99c() != 0) {
            var_r2 = temp_r4 | 0x10000000;
        } else if (func_0209c81c() != 0) {
            var_r2 = temp_r4 | 0x40000000;
        } else if (temp_r4 & 0x01000000) {
            var_r2 = temp_r4 | 0x20000000;
        } else {
            var_r2 = temp_r4 | 0x80000000;
        }
        data_020d45a0 = var_r2 | *(u16 *) 0x027FFFFA;
    }
    return data_020d45a0;
}
