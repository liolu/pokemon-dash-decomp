/* compiler: 1.2/b56 */
#include "m2c.h"

void func_0202e844(void *);

void func_0204583c(void *arg0) {
    void *p;
    s32 *q;

    func_0202e844(arg0);
    p = *(void **) ((u8 *) arg0 + 0x108);
    if (p != NULL) {
        q  = (s32 *) ((u8 *) p + 0x14);
        *q = *q | 0x80;
    }
    p = *(void **) ((u8 *) arg0 + 0x10C);
    if (p != NULL) {
        q  = (s32 *) ((u8 *) p + 0x14);
        *q = *q | 0x80;
    }
    p = *(void **) ((u8 *) arg0 + 0x110);
    if (p != NULL) {
        q  = (s32 *) ((u8 *) p + 0x14);
        *q = *q | 0x80;
    }
}
