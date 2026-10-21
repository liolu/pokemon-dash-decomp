/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a75dc();                                /* extern */
s32 func_020a76fc();                                /* extern */

s32 func_020a7724(void) {
    s32 var_r4;

    var_r4 = 0;
    if (func_020a75dc() != 0) {
        var_r4 = func_020a76fc();
    }
    return var_r4;
}
