/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02081f64(s32);
M2C_UNK func_02083194(s32);
M2C_UNK func_020833e4(s32);
extern u8 data_020d518c;
extern s32 data_020d51f0;
extern s32 data_020d5214;
extern s32 data_020d5218;
extern s32 data_020d5254;
extern s32 data_020d5258;
extern s32 data_020d5264;
extern s32 data_020d526c;
extern s32 data_020d527c;
extern s32 data_020d52a0;
extern s32 data_020d52b4;
extern s32 data_020d52b8;
extern s32 data_020d5344;

void func_0203adf0(void) {
    s32 i;
    s32 temp;

    temp = data_020d5254;
    if (temp != 0) {
        func_02083194(temp);
        func_02081f64(temp);
    }
    temp = data_020d5264;
    if (temp != 0) {
        func_02083194(temp);
        func_02081f64(temp);
    }
    temp = data_020d5258;
    if (temp != 0) {
        func_02083194(temp);
        func_02081f64(temp);
    }
    temp = data_020d51f0;
    if (temp != 0) {
        func_02083194(temp);
        func_02081f64(temp);
    }
    temp = data_020d52a0;
    if (temp != 0) {
        func_02083194(temp);
        func_02081f64(temp);
    }
    temp = data_020d52b4;
    if (temp != 0) {
        func_02083194(temp);
        func_02081f64(temp);
    }
    temp = data_020d5218;
    if (temp != 0) {
        func_02083194(temp);
        func_02081f64(temp);
    }
    temp = data_020d5214;
    if (temp != 0) {
        func_02083194(temp);
        func_02081f64(temp);
    }
    temp = data_020d527c;
    if (temp != 0) {
        func_02083194(temp);
        func_02081f64(temp);
    }
    temp = data_020d526c;
    if (temp != 0) {
        func_02083194(temp);
        func_02081f64(temp);
    }
    if (data_020d518c != 0) {
        temp = data_020d52b8;
        if (temp != 0) {
            func_02083194(temp);
            func_02081f64(temp);
        }
    }
    for (i = 0; i < (data_020d518c != 0 ? 6 : 5); i++) {
        temp = *((s32 *) &data_020d5344 + i);
        if (temp != 0) {
            func_020833e4(temp);
            func_02081f64(temp);
        }
    }
}
