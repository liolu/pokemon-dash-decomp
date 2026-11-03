/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 _s32_div_f(s32, s32);
extern u8 data_020d6760[];
extern u32 data_020d6750[];

void func_0208274c(u8 *arg0, s32 arg1) {
    u8 *p;
    u16 h;
    s32 v;
    s32 lr;

    lr               = *(s32 *) (arg0 + 4);
    p                = data_020d6760 + (lr << 10);
    p                = p + (*(s32 *) (arg0 + 8) << 3);
    v                = _s32_div_f(arg1, (s32) data_020d6750[lr]);
    h                = *(u16 *) (p + 4);
    *(u16 *) (p + 4) = (u16) ((h & ~0x3FF) | v);
}
