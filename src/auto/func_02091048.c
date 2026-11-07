/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02091048(void *arg0, s32 arg1) {
    u8 *p    = (u8 *) arg0;
    s32 n    = arg1;
    s32 *cnt = (s32 *) (p + 4);
    u8 *e;
    s32 c = *cnt;
    s32 t;
    e    = *(u8 **) p;
    t    = *(s32 *) (p + 4);
    *cnt = c - n;
    e    = e + t * 8;
    if (n == 0) {
        return;
    }
    do {
        u8 *o;
        e -= 8;
        o = *(u8 **) (e + 4);
        if (o != 0) {
            s32 *q = (s32 *) (o + 4);
            *q     = *q - 1;
            if (*(s32 *) (o + 4) == 0) {
                u8 *r = *(u8 **) (e + 4);
                if (r != 0) {
                    (*(void (**)(void *))(*(u8 **) r + 4))(r);
                }
            }
        }
        *(u8 **) (e + 4) = 0;
        n--;
    } while (n != 0);
}
