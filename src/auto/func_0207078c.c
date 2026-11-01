/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020707e8(void *, void *, s32, s32);

s32 func_0207078c(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    void *node;
    void *cur;
    s32 ret;
    s32 t;

    node = arg0;
    cur  = arg1;
    ret  = 0;
    while (node != NULL && cur != NULL) {
        t    = func_020707e8(node, cur, arg2, arg3);
        node = *(void **) ((u8 *) node + 4);
        cur  = *(void **) cur;
        if (ret == 0) {
            ret = t;
        }
    }
    return ret;
}
