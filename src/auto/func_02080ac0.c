/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_0200d5c0(s32);
void func_02080ac0(s32 *dst, s32 *a, s32 *b, s32 t) {
    s32 u  = 0x1000 - t;
    dst[0] = func_0200d5c0((s32) (((s64) a[0] * u + (s64) b[0] * t) >> 12));
    dst[1] = func_0200d5c0((s32) (((s64) a[1] * u + (s64) b[1] * t) >> 12));
    dst[2] = func_0200d5c0((s32) (((s64) a[2] * u + (s64) b[2] * t) >> 12));
}
