/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0201fd30(M2C_UNK);
void func_02081f64(M2C_UNK);

void func_0201f6d8(s32 arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        return;
    }
    func_0201fd30(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_r0 != 0) {
        func_02081f64(temp_r0);
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
}
