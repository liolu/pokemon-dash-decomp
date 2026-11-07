/* compiler: 1.2/b56 */
#include "m2c.h"

extern s32 *func_02082044(s32);
extern void func_02090278(s32 *, s32);
extern u8 data_020d3894;
extern u8 data_020d384c;

void func_0206c0d8(s32 **arg0, s32 arg1) {
    s32 *r4;
    s32 *t;
    s32 *c;

    r4 = func_02082044(0x28);
    if (r4 != 0) {
        func_02090278(r4, arg1);
        *r4 = (s32) &data_020d3894;
        *r4 = (s32) &data_020d384c;
    }
    *arg0 = r4;
    t     = *arg0;
    if (t != 0) {
        c  = (s32 *) ((u8 *) t + 4);
        *c = *c + 1;
    }
}
