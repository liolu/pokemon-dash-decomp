/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_02088068(void *arg0, s32 arg1) {
    u8 *p = (u8 *) arg0;
    void *r;

    while (p != NULL && *(s32 *) p != 0) {
        if (*(s32 *) p == arg1) {
            return p;
        }
        if (*(s32 *) p == 0xA) {
            r = func_02088068(*(void **) (p + 8), arg1);
            if (r != NULL) {
                return r;
            }
        }
        p = p + 0xC;
    }
    return NULL;
}
