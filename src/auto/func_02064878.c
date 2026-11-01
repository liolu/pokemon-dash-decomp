#include "m2c.h"

s32 func_02064878(u8 *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    u16 *tbl;
    u16 v;

    if (arg1 != -1 && arg1 < *(s32 *) (arg0 + 0xC)) {
        tbl = *(u16 **) arg0;
        v   = tbl[arg1];
        if (v != 0xFF00) {
            *arg2 = v & 0xFF;
            *arg3 = (s32) v >> 8 & 0xFF;
            return 1;
        }
    }
    return 0;
}
