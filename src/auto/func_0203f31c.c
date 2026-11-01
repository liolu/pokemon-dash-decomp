/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02081f64(s32);                         /* extern */
M2C_UNK func_020856a8(s32);                         /* extern */
extern M2C_UNK data_020d535c;
extern s32 data_020d5420;

void func_0203f31c(void) {
    s32 var_r7;
    s32 temp_r6;

    var_r7 = 0;
    if ((s32) data_020d5420 <= 0) {
        return;
    }
    do {
        temp_r6 = ((s32 *) &data_020d535c)[var_r7];
        if (temp_r6 != 0) {
            func_020856a8(temp_r6);
            func_02081f64(temp_r6);
        }
        var_r7 += 1;
    } while (var_r7 < (s32) data_020d5420);
}
