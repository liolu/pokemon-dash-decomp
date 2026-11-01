/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0206d75c(void *);

void *func_0208f290(void *arg0, s32 arg1) {
    u8 *p;

    p = (u8 *) func_0206d75c(*(void **) ((u8 *) arg0 + 8));
    if (*(s32 *) p != 0) {
        do {
            if (*(s32 *) p == arg1) {
                return *(void **) (p + 4);
            }
            p += 0xC;
        } while (*(s32 *) p != 0);
    }
    return NULL;
}
