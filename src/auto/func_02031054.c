/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Trip;

void func_02031054(u8 *arg0) {
    Trip tmp;
    u8 *obj;
    s32 r;
    if (*(void **) (arg0 + 0x98) == NULL) {
        return;
    }
    tmp   = *(Trip *) (arg0 + 0x18);
    tmp.b = tmp.b + 0x20;
    obj   = *(u8 **) (arg0 + 0x98);
    (*(void (**)(void *, void *))(*(u8 **) obj + 0x2C))(obj, &tmp);
    obj = *(u8 **) (arg0 + 0x98);
    r   = (*(s32(**)(void *))(*(u8 **) obj + 8))(obj);
    if (r == 0x1DA) {
        obj                   = *(u8 **) (arg0 + 0x98);
        *(s32 *) (obj + 0x14) = *(s32 *) (obj + 0x14) & ~0x80;
        return;
    }
    obj = *(u8 **) (arg0 + 0x98);
    if (*(s32 *) (*(u8 **) (arg0 + 0x10) + 0x14) & 0x80) {
        *(s32 *) (obj + 0x14) = *(s32 *) (obj + 0x14) | 0x80;
        return;
    }
    *(s32 *) (obj + 0x14) = *(s32 *) (obj + 0x14) & ~0x80;
}
