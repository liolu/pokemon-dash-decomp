/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020059fc(s32 *out, s32 x, s32 y, s32 z);
void func_0206ec9c(void *p);

void func_0208c788(u8 *obj, s32 *arg1) {
    s32 out[3];
    s64 p0;
    s64 p1;
    s64 p2;
    u8 *d;

    p0 = (s64) * (s32 *) (obj + 0xa0) * arg1[2];
    p1 = (s64) * (s32 *) (obj + 0xa4) * arg1[3];
    p2 = (s64) * (s32 *) (obj + 0xa8) * arg1[4];
    func_020059fc(out, (s32) ((p0 + 0x800) >> 12), (s32) ((p1 + 0x800) >> 12), (s32) ((p2 + 0x800) >> 12));
    d                   = *(u8 **) (obj + 0x68);
    *(s32 *) (d + 0x20) = out[0];
    *(s32 *) (d + 0x24) = out[1];
    *(s32 *) (d + 0x28) = out[2];
    *(u32 *) d          = *(u32 *) d | 8;
    if ((*(u32 *) d & 0x10) == 0) {
        func_0206ec9c(d);
    }
}
