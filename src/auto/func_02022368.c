/* compiler: 1.2/sp2p3 -O2 */
#include "m2c.h"

M2C_UNK func_0208444c(s32, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_0209c110();                            /* extern */
extern s32 data_020d6f6c;
extern s32 data_020d6f70;
extern s32 data_020d6f74;
extern s32 data_020d6f7c;
extern s32 data_020d6f80;
extern s32 data_020d6f84;
extern s32 data_020d6f88;
extern s32 data_020d6f8c;
extern s32 data_020d6f90;
extern s32 data_020d6f94;
extern s32 data_020d6f98;
extern s32 data_020d6f9c;
extern s32 data_020d6fa0;
extern s32 data_020d6fa4;
extern s32 data_020d6fa8;
extern M2C_UNK data_020d6fac;
extern M2C_UNK data_020d6fbc;

void func_02022368(s32 arg0, s32 arg1) {
    s32 var_r7;
    s32 var_r7_2;

    if (arg1 != 2) {
        return;
    }
    func_0208444c(data_020d6f6c, 1, 0, 0, 0);
    func_0208444c(data_020d6fa8, 1, 0, 0, 0);
    var_r7 = 0;
    do {
        func_0208444c(*((M2C_UNK *) ((s8 *) &data_020d6fac + (var_r7 * 4))), 1, 0, 0, 0);
        var_r7 += 1;
    } while (var_r7 < 4);
    func_0208444c(data_020d6fa0, 1, 0, 0, 0);
    func_0208444c(data_020d6f9c, 1, 0, 0, 0);
    func_0208444c(data_020d6f98, 1, 0, 0, 0);
    func_0208444c(data_020d6f94, 1, 0, 0, 0);
    func_0208444c(data_020d6f90, 1, 0, 0, 0);
    func_0208444c(data_020d6f74, 1, 0, 0, 0);
    func_0208444c(data_020d6fa8, 1, 0, 0, 0);
    var_r7_2 = 0;
    do {
        func_0208444c(*((M2C_UNK *) ((s8 *) &data_020d6fbc + (var_r7_2 * 4))), 1, 0, 0, 0);
        var_r7_2 += 1;
    } while (var_r7_2 < 4);
    func_0208444c(data_020d6f80, 1, 0, 0, 0);
    func_0208444c(data_020d6f7c, 1, 0, 0, 0);
    func_0208444c(data_020d6f8c, 1, 0, 0, 0);
    func_0208444c(data_020d6fa4, 1, 0, 0, 0);
    func_0208444c(data_020d6f70, 1, 0, 0, 0);
    func_0208444c(data_020d6f84, 1, 0, 0, 0);
    func_0208444c(data_020d6f88, 1, 0, 0, 0);
    func_0209c110();
}
