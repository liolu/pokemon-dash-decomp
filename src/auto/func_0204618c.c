/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02045d5c();                                /* extern */

s32 func_0204618c(s32 arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;

    switch (arg0) {                                 /* irregular */
        case 0:
            if (func_02045d5c() & 0x20) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            return var_r0;
        case 1:
            if (func_02045d5c() & 0x40) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 0;
            }
            return var_r0_2;
        case 2:
            if (func_02045d5c() & 0x80) {
                var_r0_3 = 1;
            } else {
                var_r0_3 = 0;
            }
            return var_r0_3;
        default:
            return 0;
    }
}
