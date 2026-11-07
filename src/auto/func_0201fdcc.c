/* compiler: 1.2/b56 */
#include "m2c.h"

void func_0201fdcc(u8 *arg0, s32 arg1) {
    s32 f;
    s32 i;
    s32 *p;
    u8 *o;

    i = 0;
    if (arg1 == 0) {
        f = 1;
    } else {
        f = 0;
    }
    do {
        o = ((u8 **) (arg0 + 0xC))[i];
        if (f != 0) {
            p  = (s32 *) (o + 0x14);
            *p = *p | 0x80;
        } else {
            p  = (s32 *) (o + 0x14);
            *p = *p & ~0x80;
        }
        i++;
    } while (i < 8);
}
