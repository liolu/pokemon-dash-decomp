/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 *func_0206f710(void *arg0) {
    u8 *a;
    s32 *temp_r0;
    s32 var_r0;

    a = (u8 *) arg0;
    if (*(void **) (a + 8) != NULL) {
        func_0206f710(*(void **) (a + 8));
        if (!(**(s32 **) (a + 8) & 0x10000000)) {
            *(s32 *) a = *(s32 *) a & ~0x10000000;
        }
    }
    temp_r0 = *(s32 **) (a + 0x10);
    if (temp_r0 == NULL) {
        return temp_r0;
    }
    func_0206f710(*(void **) (a + 0x10));
    var_r0 = **(s32 **) (a + 0x10) & 0x10000000;
    if (var_r0 == 0) {
        var_r0     = *(s32 *) a & ~0x10000000;
        *(s32 *) a = var_r0;
    }
    return (s32 *) var_r0;
}
