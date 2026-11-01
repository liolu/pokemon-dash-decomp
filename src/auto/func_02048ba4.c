/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02049398(s32 *, void *, s32 *, s32 *);

void *func_02048ba4(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;

    sp8 = (s32) ((u8 *) arg0 + 4);
    sp4 = *(s32 *) ((u8 *) arg0 + 8);
    func_02049398(&sp0, arg0, &sp4, &sp8);
    return arg0;
}
