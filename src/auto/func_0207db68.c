/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0207dd18(M2C_UNK);
void func_0207de80(M2C_UNK);
void func_0207e4c8(M2C_UNK);

void func_0207db68(s32 arg0, s32 arg1) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2;

    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    } else {
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x28);
        if (temp_r1 != 0) {
            M2C_FIELD(arg0, s32 *, 0x24) = temp_r1;
        }
    }
    temp_r2                      = M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x24), s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) ((s32) (temp_r2 + ((u32) (temp_r2 >> 0xA) >> 0x15)) >> 0xB);
    temp_r1_2                    = M2C_FIELD(arg0, s32 *, 8);
    switch (temp_r1_2) {                            /* irregular */
        case 1:
            func_0207e4c8(arg0);
            return;
        case 2:
            func_0207de80(arg0);
            return;
        case 3:
            func_0207dd18(arg0);
            return;
    }
}
