/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct S {
    u8 *p;
} S;
void func_0207cf18(void *, void *, void *, void *);
void func_0207cfc8(u8 *obj, S a, S b) {
    u8 *w;
    u8 *cur;
    u8 *end;
    u8 *tmp[2];
    end = b.p;
    cur = a.p;
    if (cur == end) {
        return;
    }
    w = obj + 4;
    if (cur == end) {
        return;
    }
    do {
        tmp[1] = w;
        func_0207cf18(&tmp[0], obj, &tmp[1], cur + 8);
        cur = *(u8 **) (cur + 4);
    } while (cur != end);
}
