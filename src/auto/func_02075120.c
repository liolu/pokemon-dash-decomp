/* compiler: 1.2/b56 */
#include "m2c.h"

extern char data_020d3914[];
extern char data_020d3918[];
s32 *func_02033228(s32 *, void *, void *);

void func_02075120(void *arg0, s32 arg1) {
    s32 sp0;
    s32 *r;
    s32 v;
    u8 *p;
    sp0                         = arg1;
    r                           = func_02033228(&sp0, data_020d3918, data_020d3914);
    v                           = *r;
    p                           = (u8 *) arg0 + 4;
    *(s8 *) ((char *) arg0 + 7) = (s8) ((v + 0x800) >> 12);
    *p                          = *p | 0x20;
}
