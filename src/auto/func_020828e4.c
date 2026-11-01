/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020828e4(void *arg0) {
    u8 *end;
    u8 *p;
    void *obj;
    void (*fn)(void *, void *);

    end = (u8 *) arg0 + 0x1C;
    p   = *(u8 **) ((u8 *) arg0 + 0x20);
    if (p == end) {
        return;
    }
    do {
        obj = *(void **) (p + 8);
        fn  = **(void (***)(void *, void *)) obj;
        fn(obj, arg0);
        p = *(u8 **) (p + 4);
    } while (p != end);
}
