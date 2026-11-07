/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02081f64(s32);
void func_02083194(s32);
void func_02083714(s32);
extern u8 data_020d6ff4[];
extern s32 data_020d6ff8[];
extern s32 data_020d7008[];
void func_02085908(s32 i) {
    s32 a;
    s32 b;
    if (data_020d6ff4[i] == 0) {
        return;
    }
    a = data_020d6ff8[i];
    if (a != 0) {
        func_02083714(a);
        func_02081f64(a);
    }
    b = data_020d7008[i];
    if (b != 0) {
        func_02083194(b);
        func_02081f64(b);
    }
    data_020d6ff4[i] = 0;
}
