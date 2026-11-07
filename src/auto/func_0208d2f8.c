/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0208fd20(void *a);
u32 func_0200d5c0(u32 a);
void *func_0208fd78(void *a, u32 b);
s32 func_020864ec(void *a, void *b, s32 c, s32 d);
void func_0208d220(u8 *a, void *b, s32 c);

void func_0208d2f8(u8 *arg0) {
    u8 *r5;
    u8 *ret;
    u8 *p;
    u32 r4;
    u32 t;
    s32 idx;

    r5 = func_0208fd20(*(void **) (arg0 + 0x60));
    if (r5 == NULL) {
        return;
    }
    switch (*(s32 *) (r5 + 4)) {
        case 0:
        case 1:
        case 2:
            t  = func_0200d5c0(*(u32 *) (r5 + 0xC));
            p  = *(u8 **) (arg0 + 0x60);
            r4 = (0x7FFF000 & (*(u32 *) (*(u8 **) (p + 8) + 4) << 12)) | 0x30000000;
            r4 = r4 | (0xFFF & ((s32) (t + 0x800) >> 12));
            break;
        case 3:
            return;
        default:
            break;
    }
    ret = func_0208fd78(*(void **) (arg0 + 0x60), r4);
    if (ret == NULL) {
        return;
    }
    p   = *(u8 **) ret;
    idx = *(s32 *) (p + 4) & 0xFFF;
    r4  = idx * 0x8C;
    t   = func_020864ec(*(u8 **) (arg0 + 0x130) + r4 + 4, r5, -1, -0x1000);
    func_0208d220(arg0, *(u8 **) (arg0 + 0x130) + r4 + 4, t);
}
