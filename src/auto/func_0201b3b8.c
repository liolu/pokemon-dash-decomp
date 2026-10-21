/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02081f64(M2C_UNK);

void func_0201b3b8(s32 arg0, s32 arg1) {
    s32 temp_r1;
    s32 temp_r1_2;

    temp_r1 = M2C_FIELD(arg1, s32 *, 0);
    if (temp_r1 != 0) {
        func_0201b3b8(arg0, temp_r1);
    }
    temp_r1_2 = M2C_FIELD(arg1, s32 *, 4);
    if (temp_r1_2 != 0) {
        func_0201b3b8(arg0, temp_r1_2);
    }
    func_02081f64(arg1);
}
