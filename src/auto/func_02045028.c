/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02045028(void *arg0, s32 arg1) {
    s64 v;
    u32 lo;

    v                              = (s64) arg1 * 0x3C000 + 0x800;
    lo                             = (u32) (v >> 12);
    *(s32 *) ((u8 *) arg0 + 0x154) = (s32) (lo + 0x800) >> 12;
    *(s32 *) ((u8 *) arg0 + 0x128) = 3;
}
