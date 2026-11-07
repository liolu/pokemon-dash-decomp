/* compiler: 1.2/b56 */
#include "m2c.h"
typedef struct V {
    s32 a, b, c;
} V;
void func_020312c4(u8 *p) {
    V v;
    u8 *o;
    s32 *f;
    if (*(u8 **) (p + 0xA4) == 0) {
        return;
    }
    v   = *(V *) (p + 0x18);
    v.b = v.b - 0x640;
    o   = *(u8 **) (p + 0xA4);
    (*(void (**)(void *, V *))(*(u8 **) o + 0x2C))(o, &v);
    o = *(u8 **) (p + 0xA4);
    if (*(s32 *) (*(u8 **) (p + 0x10) + 0x14) & 0x80) {
        f  = (s32 *) (o + 0x14);
        *f = *f | 0x80;
    } else {
        f  = (s32 *) (o + 0x14);
        *f = *f & ~0x80;
    }
}
