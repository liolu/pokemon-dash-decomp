/* compiler: 1.2/b56 */
#include "m2c.h"

extern u8 data_020d6540[];

s32 func_02073ee0(u8 *s);
void func_02078038(u8 *a, void **out);

s32 func_02073d30(u8 *s) {
    void *p;

    *(s32 *) (s + 0x14) = *(s32 *) (*(u8 **) data_020d6540 + 0x7c);
    if ((s[8] & 1) == 0) {
        func_02073ee0(s);
        if ((s[8] & 1) == 0) {
            return -1;
        }
    }
    if ((s[8] & 2) == 0) {
        p = s;
        if (s != 0) {
            *(s32 *) (s + 4) = *(s32 *) (s + 4) + 1;
        }
        func_02078038(*(u8 **) data_020d6540 + 0x44, &p);
        if (p != 0) {
            *(s32 *) ((u8 *) p + 4) = *(s32 *) ((u8 *) p + 4) - 1;
            if (*(s32 *) ((u8 *) p + 4) == 0) {
                if (p != 0) {
                    (*(void (**)(void *))(*(u8 **) p + 4))(p);
                }
            }
        }
        p = 0;
    }
    return *(s32 *) (s + 0x10);
}
