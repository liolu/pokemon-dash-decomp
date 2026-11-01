/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02087f48(void *);

s32 func_02086b78(u8 *arg0, s32 arg1) {
    void **head;
    void **p;

    if (func_02087f48(arg0 + 0x15C) == 0 && *(s32 *) (arg0 + 0x168) == 0) {
        return 1;
    }
    if (arg1 == *(s32 *) (arg0 + 0x15C)) {
        return 1;
    }
    head = (void **) (arg0 + 0x16C);
    p    = *(void ***) (arg0 + 0x170);
    if (p != head) {
        do {
            if (arg1 == *(s32 *) ((u8 *) p + 8)) {
                return 0;
            }
            p = (void **) p[1];
        } while (p != head);
    }
    return 1;
}
