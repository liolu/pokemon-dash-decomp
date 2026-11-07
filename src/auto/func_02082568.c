/* compiler: 1.2/b56 */
#include "m2c.h"

s32 func_02082568(u8 *arg0, s32 arg1) {
    s32 *p = (s32 *) (arg0 + 4);
    *p     = *p + arg1;
    if (*(s32 volatile *) (arg0 + 4) < 0) {
        *(s32 *) (arg0 + 4) = 0;
    }
    return *(s32 *) (arg0 + 4);
}
