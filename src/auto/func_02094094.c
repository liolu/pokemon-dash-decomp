/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02094774(M2C_UNK, M2C_UNK);

void func_02094094(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r1 == 0) {
        return;
    }
    func_02094774(arg0, temp_r1);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (arg0 + 4);
}
