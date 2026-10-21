/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201c884(M2C_UNK);
M2C_UNK func_0201c8c8(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0207c7f4(M2C_UNK);

void func_02047efc(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_0201c8c8(0x199, 0, arg1);
    if (func_0201c884(temp_r0) != 0) {
        return;
    }
    do {
        func_0207c7f4(0);
    } while (func_0201c884(temp_r0) == 0);
}
