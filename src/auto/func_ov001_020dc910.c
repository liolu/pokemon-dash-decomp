/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov001_020dc9a0(M2C_UNK);               /* extern */
M2C_UNK func_ov001_020dcc08(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern s32 data_020d65a4;
extern s32 data_ov001_020de76c;
extern s32 data_ov001_020de788;
extern void *data_ov001_020de79c;

void func_ov001_020dc910(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_r0;

    if (data_ov001_020de76c == 0) {
        var_r0 = M2C_FIELD(data_ov001_020de79c, s32 *, 0xC) + M2C_FIELD(data_ov001_020de79c, s32 *, 4);
        if (M2C_FIELD(data_ov001_020de79c, s32 *, 0) == 0) {
            var_r0 += data_020d65a4;
        }
    } else {
        var_r0 = data_ov001_020de788;
    }
    func_ov001_020dcc08(var_r0, arg0, arg1, arg2);
    func_ov001_020dc9a0(arg3);
}
