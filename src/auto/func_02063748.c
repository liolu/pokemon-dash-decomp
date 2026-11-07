/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02097058(s32, s32);
void func_020979a0(s32, s32);
s32 func_02097130(s32);
extern s32 data_020d5fa8;
extern s32 data_020d5fb4;
extern s32 data_020d5fb8;
extern s32 data_020d5fc8;
extern s32 data_020d5fd8;

void func_02063748(u32 arg0) {
    s32 b = data_020d5fb8;
    s32 a = -1;
    switch (arg0) {
        default:
            break;
        case 5:
        case 8:
            b = 4;
            break;
        case 0:
        case 2:
        case 6:
            b = 0;
            break;
        case 4:
            b = 0;
            a = 2;
            break;
        case 1:
        case 7:
            b = 0;
            a = 1;
            break;
        case 3:
            b = 4;
            a = 3;
            break;
    }
    if (data_020d5fb8 != b) {
        func_02097058(data_020d5fd8, 2);
        func_020979a0(b, data_020d5fd8);
        data_020d5fa8 = func_02097130(data_020d5fd8);
        data_020d5fb8 = b;
        data_020d5fb4 = -1;
        data_020d5fc8 = -1;
    }
    if (a == -1) {
        return;
    }
    if (data_020d5fb4 == a) {
        return;
    }
    func_02097058(data_020d5fd8, 3);
    func_020979a0(a, data_020d5fd8);
    data_020d5fb4 = a;
    data_020d5fc8 = -1;
}
