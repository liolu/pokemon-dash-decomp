/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02087f48(s32);                             /* extern */
s32 func_0208c290(s32);                             /* extern */

s32 func_02086aac(s32 arg0) {
    if (func_02087f48(arg0 + 0x15C) == 0) {
        return 1;
    }
    return func_0208c290(arg0);
}
