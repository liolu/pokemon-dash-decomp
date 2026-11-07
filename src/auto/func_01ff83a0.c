/* compiler: 1.2/sp2p3 */
/* near start: 8 diffs with profile "1.2/sp2p3" */
#include "m2c.h"

M2C_UNK func_01ff8270(u32, s32, s32);               /* extern */
M2C_UNK func_0209cd70();                            /* extern */

void func_01ff83a0(void) {
    s32 temp_r0;
    u32 var_r6;
    s32 var_r5;
    s32 var_r4;

    var_r6 = *(u32 *) 0x027FFE20;
    var_r5 = *(s32 *) 0x027FFE28;
    var_r4 = *(s32 *) 0x027FFE2C;
    func_0209cd70();
    if (var_r6 < 0x8000U) {
        temp_r0 = 0x8000 - var_r6;
        var_r5 += temp_r0;
        var_r4 -= temp_r0;
        var_r6 = 0x8000;
    }
    func_01ff8270(var_r6, var_r5, var_r4);
    func_01ff8270(*(u32 *) 0x027FFE30, *(s32 *) 0x027FFE38, *(s32 *) 0x027FFE3C);
}
