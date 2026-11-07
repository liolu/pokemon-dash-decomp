/* compiler: 1.2/b56 */
#include "m2c.h"

void func_020260dc(void **arg0, u8 *arg1, s32 arg2) {
    u8 *r3 = *(u8 **) (arg1 + 0x144);
    u8 *r1 = arg1 + 0x140;
    s32 r2 = arg2;
    void *r0;

    if (r3 != r1) {
        do {
            if (r2 == 0) {
                *arg0 = *(void **) (r3 + 8);
                r0    = *arg0;
                if (r0 != NULL) {
                    *(s32 *) ((u8 *) r0 + 4) = *(s32 *) ((u8 *) r0 + 4) + 1;
                }
                return;
            }
            r3 = *(u8 **) (r3 + 4);
            r2 = r2 - 1;
        } while (r3 != r1);
    }
    *arg0 = NULL;
}
