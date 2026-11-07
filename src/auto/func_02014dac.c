/* compiler: 1.2/b56 */
/* near start: 15 diffs with profile "1.2/sp2p3 -proc arm7tdmi" */
#include "m2c.h"

void func_02014dac(void **arg0) {
    void *r2 = *arg0;
    s32 *r1;
    void *r0;

    if (r2 != NULL) {
        r1  = (s32 *) ((u8 *) r2 + 4);
        *r1 = *r1 - 1;
        if (*(s32 *) ((u8 *) r2 + 4) == 0) {
            r0 = *arg0;
            if (r0 != NULL) {
                (*(void (**)(void *))(*(u8 **) r0 + 4))(r0);
            }
        }
    }
    *arg0 = NULL;
}
