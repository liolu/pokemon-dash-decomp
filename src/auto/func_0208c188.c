/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02099494(s32, s32);

s32 func_0208c188(void **arg0) {
    s32 buf[3];
    s32 lr;
    s64 v;

    (*(void (**)(void *, s32 *))((u8 *) *arg0 + 0x30))(arg0, buf);
    lr     = buf[2] - 0x94000;
    v      = (s64) lr * 0x54000 + 0x800;
    buf[2] = lr;
    return ((s32) (func_02099494((u32) (v >> 12), 0x21D000) + 0x800) >> 12) + 0x2B;
}
