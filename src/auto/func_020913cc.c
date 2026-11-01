/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_020913cc(u8 *arg0, s32 *arg1, void **arg2, u8 *arg3, u8 *arg4) {
    u8 *r6;
    u8 *ret;

    *arg2 = NULL;
    r6    = *(u8 **) (arg0 + 4);
    *arg3 = 1;
    *arg4 = 1;
    ret   = arg0 + 4;
    while (r6 != NULL) {
        ret = r6;
        if (*arg1 < *(s32 *) (r6 + 0xC)) {
            r6    = *(u8 **) r6;
            *arg3 = 1;
        } else {
            *arg2 = r6;
            r6    = *(u8 **) (r6 + 4);
            *arg3 = 0;
            *arg4 = 0;
        }
    }
    return ret;
}
