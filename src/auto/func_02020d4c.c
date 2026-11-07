/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Vec3;

void func_0200ca84(u8 *, void *);
s32 func_ov001_020dc6f8(s32, s32);

void func_02020d4c(u8 *arg0, void *arg1) {
    s32 loc[4];
    u8 *obj;
    s32 r;
    s32 t;
    u32 *flags;

    *(Vec3 *) loc = *(Vec3 *) arg1;
    loc[1]        = ~0x1f;
    func_0200ca84(arg0, arg1);
    obj = *(u8 **) (arg0 + 0x7c);
    if (obj == NULL) {
        return;
    }
    t      = loc[2];
    loc[1] = ~0x5f;
    loc[2] = t + 0x600;
    obj    = *(u8 **) (arg0 + 0x7c);
    (*(void (**)(void *, void *))(*(u8 **) obj + 0x2c))(obj, loc);
    r = func_ov001_020dc6f8(loc[0] << 7, loc[2] << 7);
    if (r != 0 && r != 4) {
        return;
    }
    obj   = *(u8 **) (arg0 + 0x7c);
    flags = (u32 *) (obj + 0x14);
    *flags |= 0x80;
    obj   = *(u8 **) (arg0 + 0x7c);
    flags = (u32 *) (obj + 0x14);
    *flags |= 0x100;
}
