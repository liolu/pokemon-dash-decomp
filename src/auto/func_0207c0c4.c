/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0207c018(s32, s32);
extern s32 data_020d6560;
extern s32 data_020d6564;

s32 func_0207c0c4(s32 arg0, s32 arg1) {
    s32 saved;
    s32 r;

    saved         = data_020d6560;
    data_020d6560 = arg0;
    data_020d6564 = data_020d6564 + 1;
    r             = func_0207c018(arg0, arg1);
    data_020d6564 = data_020d6564 - 1;
    data_020d6560 = saved;
    return r;
}
