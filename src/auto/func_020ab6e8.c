/* compiler: 1.2/b56 */
#include "m2c.h"

void *func_020ab544(void *, const void *, u32);

s32 func_020ab6e8(u8 *arg0, const void *arg1, u32 arg2) {
    u32 temp_r3 = *(u32 *) (arg0 + 8);
    u32 var_r4  = arg2;
    u32 temp_r2 = *(u32 *) (arg0 + 4);

    if (temp_r3 + var_r4 > temp_r2) {
        var_r4 = temp_r2 - temp_r3;
    }
    func_020ab544(*(u8 **) arg0 + temp_r3, arg1, var_r4);
    *(u32 *) (arg0 + 8) = *(u32 *) (arg0 + 8) + var_r4;
    return 1;
}
