#include "m2c.h"

extern u8 *data_020d51cc;

s32 func_0203b978(u32 arg0) {
    u8 *s = data_020d51cc;
    s32 *tbl;
    s32 *el;
    s32 r;
    if (arg0 < *(u32 *) (s + 4)) {
        tbl = *(s32 **) s;
        el  = (s32 *) tbl[arg0];
        r   = el[1];
        if (r != 0) {
            r -= 8;
        }
        return r;
    }
    return 0;
}
