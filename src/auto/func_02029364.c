/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0202c540(s32 *a, u8 *b, s32 *c, s32 *d);

u8 *func_02029364(u8 *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;

    sp8 = (s32) (arg0 + 4);
    sp4 = *(s32 *) (arg0 + 8);
    func_0202c540(&sp0, arg0, &sp4, &sp8);
    return arg0;
}
