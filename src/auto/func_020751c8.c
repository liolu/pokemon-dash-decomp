/* compiler: 1.2/b56 */
#include "m2c.h"

s32 *func_02033228(s32 *, void *, void *);
extern u8 data_020d3914;
extern u8 data_020d3918;

void func_020751c8(u8 *a, s32 b) {
    s32 sp0;
    u8 *p;
    sp0  = b;
    a[5] = (*func_02033228(&sp0, &data_020d3918, &data_020d3914) + 0x800) >> 12;
    p    = a + 4;
    *p |= 0x20;
}
