/* compiler: 1.2/b56 */
/* near start: 18 diffs with profile "1.2/sp2p3 -proc arm7tdmi" */
#include "m2c.h"

void **func_0200f284(void **arg0) {
    void **r4 = arg0;
    void *r2  = *r4;
    void *r0;

    if (r2 != NULL) {
        *(s32 *) ((u8 *) r2 + 4) = *(s32 *) ((u8 *) r2 + 4) - 1;
        if (*(s32 *) ((u8 *) r2 + 4) == 0) {
            r0 = *r4;
            if (r0 != NULL) {
                (*(void (**)(void *))(*(u8 **) r0 + 4))(r0);
            }
        }
    }
    *r4 = NULL;
    return r4;
}
