/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02081f64(M2C_UNK);

void func_02075790(s32 arg0) {
    s32 temp_r4;

    temp_r4 = *(M2C_UNK *) arg0;
    if (temp_r4 == 0) {
        return;
    }
    func_02075790(temp_r4);
    func_02081f64(temp_r4);
}
