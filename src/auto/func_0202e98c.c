/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02018748(M2C_UNK, M2C_UNK);
M2C_UNK func_02018770(M2C_UNK);
M2C_UNK func_0202e9e4(M2C_UNK, M2C_UNK);

void func_0202e98c(s32 arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0xE0);
    if (temp_r5 == 0) {
        return;
    }
    temp_r4 = func_0202e9e4(temp_r5, arg0);
    func_02018748(func_02018770(temp_r5), temp_r4);
    func_02018748(func_02018770(temp_r5 + 4), temp_r4);
}
