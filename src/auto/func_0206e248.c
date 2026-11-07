/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 func_020703fc(void *);

s32 func_0206e248(u8 *p) {
    void *q;
    if (*(s32 *) (p + 0xfc) != 0) {
        return *(s32 *) (p + 0xfc);
    }
    q = *(void **) (p + 0x14);
    if (q != 0 && (*(u32 *) p & 0x80000000)) {
        s32 r = func_020703fc(q);
        if (r != 0) {
            return r;
        }
    }
    if (*(u32 *) p & 0x40000000) {
        p = *(u8 **) (p + 0x10);
        if (p != 0) {
            do {
                s32 r = func_0206e248(p);
                if (r != 0) {
                    return r;
                }
                if ((*(u32 *) p & 0x20000000) == 0) {
                    break;
                }
                p = *(u8 **) (p + 8);
            } while (p != 0);
        }
    }
    return 0;
}
