/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_0202c934(void *, void *, void *);
void func_0202b7f0(u8 *p) {
    u8 *end;
    u8 *cur;
    u8 *n;
    u8 *tmp[2];
    if (*(s32 *) p == 0) {
        return;
    }
    cur = *(u8 **) (p + 8);
    end = p + 4;
    if (cur == end) {
        return;
    }
    do {
        n = *(u8 **) (cur + 4);
        if (*(s32 *) (*(u8 **) (cur + 8) + 0xC) & 1) {
            tmp[1] = cur;
            func_0202c934(&tmp[0], p, &tmp[1]);
        }
        cur = n;
    } while (n != end);
}
