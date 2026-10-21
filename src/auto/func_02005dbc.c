/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200735c(u16);                             /* extern */
u8 *func_020087e0(u16);                             /* extern */

s32 func_02005dbc(void) {
    u16 var_r4;
    u8 *temp_r0;

    var_r4 = 0;
loop_1:
    if (func_0200735c(var_r4) != 0) {
        temp_r0 = func_020087e0(var_r4);
        if ((temp_r0 != NULL) && (*temp_r0 == 4)) {
            return 1;
        }
    }
    var_r4 += 1;
    if ((u32) var_r4 >= 6U) {
        return 0;
    }
    goto loop_1;
}
