/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 func_0209c99c(void);
extern s32 func_02081fec(s32);
extern void func_02095b4c(void);
extern s32 func_020972a4(s32, s32);
extern void func_02096f28(void *, void *, s32, s32);
extern s32 func_02097130(s32);
extern s32 func_020978b0(s32, s32);
extern void func_02063748(s32);
extern void func_02096458(void *);
extern void func_020963c4(void *, s32);
extern u8 data_020d0720[];
extern s8 data_020d5fa4;
extern s32 data_020d5fa8;
extern s32 data_020d5fb0;
extern s32 data_020d5fb4;
extern s32 data_020d5fb8;
extern u8 data_020d5fbc[];
extern s32 data_020d5fc0;
extern u8 data_020d5fc4[];
extern s32 data_020d5fc8;
extern u8 data_020d5fcc[];
extern u8 data_020d5fd0[];
extern u8 data_020d5fd4[];
extern s32 data_020d5fd8;
extern u8 data_020d5fdc[];
extern u8 data_020d5ff0[];

void func_02062c9c(void) {
    s32 var_r5;
    u8 *var_r4;
    s32 temp_r0;

    if (func_0209c99c() != 0) {
        return;
    }
    data_020d5fc8 = -1;
    data_020d5fc0 = -1;
    data_020d5fb4 = -1;
    data_020d5fb8 = -1;
    data_020d5fa4 = 0;
    data_020d5fb0 = func_02081fec(0x89C00);
    func_02095b4c();
    temp_r0       = func_020972a4(data_020d5fb0, 0x89C00);
    data_020d5fd8 = temp_r0;
    func_02096f28(data_020d5ff0, data_020d0720, temp_r0, 0);
    data_020d5fa8 = func_02097130(data_020d5fd8);
    func_020978b0(0xB, data_020d5fd8);
    data_020d5fc0 = 0xB;
    data_020d5fa8 = func_02097130(data_020d5fd8);
    func_02063748(8);
    func_02096458(data_020d5fd4);
    func_02096458(data_020d5fd0);
    func_02096458(data_020d5fcc);
    func_02096458(data_020d5fbc);
    func_02096458(data_020d5fc4);
    var_r5 = 0;
    var_r4 = data_020d5fdc;
    do {
        func_02096458(var_r4);
        var_r5 += 1;
        var_r4 += 4;
    } while (var_r5 < 5);
    func_020963c4(data_020d5fd0, 0);
}
