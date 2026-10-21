/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0202332c(M2C_UNK);
void func_0205f820(M2C_UNK);
void func_02060c58(M2C_UNK);
void func_02081f64(M2C_UNK);
void func_020856a8(M2C_UNK);
void func_02085908(M2C_UNK);

void func_0205e410(s32 arg0) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x700);
    if (temp_r4 != 0) {
        func_02060c58(temp_r4);
        func_02081f64(temp_r4);
    }
    M2C_FIELD(arg0, s32 *, 0x700) = 0;
    temp_r4_2                     = M2C_FIELD(arg0, s32 *, 0x6F8);
    if (temp_r4_2 != 0) {
        func_0202332c(temp_r4_2);
        func_02081f64(temp_r4_2);
    }
    M2C_FIELD(arg0, s32 *, 0x6F8) = 0;
    temp_r4_3                     = M2C_FIELD(arg0, s32 *, 0x6FC);
    if (temp_r4_3 != 0) {
        func_020856a8(temp_r4_3);
        func_02081f64(temp_r4_3);
    }
    M2C_FIELD(arg0, s32 *, 0x6FC) = 0;
    func_02085908(0);
    if (M2C_FIELD(arg0, s32 *, 0xEC) != 0xD) {
        return;
    }
    func_0205f820(arg0);
}
