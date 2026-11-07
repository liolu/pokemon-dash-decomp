/* compiler: 1.2/b56 */
#include "m2c.h"

void func_0208f4bc(void **arg0, u8 *arg1, u32 arg2) {
    void *temp_r0;
    s32 temp_r1;
    u32 idx;

    if (arg2 == 0x28000000) {
        *arg0 = NULL;
        return;
    }
    idx = arg2 & 0xFFF;
    if (idx >= *(u32 *) (arg1 + 0x10)) {
        *arg0 = NULL;
        return;
    }
    temp_r1 = ((s32 *) *(void **) (arg1 + 0xC))[idx];
    if (temp_r1 == 0) {
        *arg0 = NULL;
        return;
    }
    *arg0   = (void *) temp_r1;
    temp_r0 = *arg0;
    if (temp_r0 != NULL) {
        *(s32 *) ((u8 *) temp_r0 + 4) = *(s32 *) ((u8 *) temp_r0 + 4) + 1;
    }
}
