/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 p[0x14];
    s8 on;
    u8 q[3];
    s32 x;
    s32 y;
} E;
M2C_UNK func_020850ac(E *);                         /* extern */
extern u8 data_020d518c;
extern E *data_020d51dc;
extern s32 data_020d52a8;
extern s32 data_020d52e4;
extern E *data_020d535c[];
extern E *data_020d53a4[];
extern u8 data_020d540c;
extern s32 data_020d5410;
extern s32 data_020d5414;
extern s32 data_020d5420;
extern s32 data_020d5424;

void func_0203ce30(void) {
    s32 var_r9;
    s32 temp_r8;
    s32 var_r1;
    s32 var_r0;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r7;
    E *temp_r10_2;
    E *temp_r10_3;
    E *temp_r4;
    E *temp_r4_2;

    if (data_020d540c != 0) {
        if ((s32) data_020d52a8 > (s32) data_020d5410) {
            data_020d5414 = -0x18;
            var_r1        = 0;
            if ((s32) data_020d5420 > 0) {
                var_r0 = 0x20;
                do {
                    temp_r4     = data_020d53a4[var_r1];
                    temp_r4->x  = 0xA0;
                    temp_r4->y  = var_r0;
                    temp_r4->on = 1;
                    if (data_020d518c != 0) {
                        temp_r4_2     = data_020d535c[var_r1];
                        temp_r4_2->x  = 0x60;
                        temp_r4_2->y  = var_r0;
                        temp_r4_2->on = 1;
                    }
                    var_r1 += 1;
                    var_r0 += 0x18;
                } while (var_r1 < (s32) data_020d5420);
            }
            data_020d540c = 0;
            data_020d52a8 = 0;
        } else {
            data_020d5414 = data_020d5424 - ((s32) ((data_020d5424 + 0x18) * data_020d52a8) / (s32) data_020d5410);
            var_r9        = 0;
            if ((s32) data_020d5420 > 0) {
                var_r7 = 8;
                do {
                    temp_r8    = var_r7 - data_020d5414;
                    temp_r10_2 = data_020d53a4[var_r9];
                    if ((temp_r8 > -0x10) && (temp_r8 < 0xC0)) {
                        temp_r10_2->x  = 0xA0;
                        temp_r10_2->y  = temp_r8;
                        temp_r10_2->on = 1;
                    } else {
                        temp_r10_2->on = 0;
                    }
                    if (data_020d518c != 0) {
                        temp_r10_3 = data_020d535c[var_r9];
                        if ((temp_r8 > -0x10) && (temp_r8 < 0xC0)) {
                            temp_r10_3->x  = 0x60;
                            temp_r10_3->y  = temp_r8;
                            temp_r10_3->on = 1;
                        } else {
                            temp_r10_3->on = 0;
                        }
                    }
                    var_r9 += 1;
                    var_r7 += 0x18;
                } while (var_r9 < (s32) data_020d5420);
            }
        }
    }
    if ((data_020d52e4 == 5) || (data_020d52e4 == 9)) {
        func_020850ac(data_020d51dc);
    }
    var_r6 = 0;
    if ((s32) data_020d5420 > 0) {
        do {
            func_020850ac(data_020d53a4[var_r6]);
            var_r6 += 1;
        } while (var_r6 < (s32) data_020d5420);
    }
    if (data_020d518c != 0) {
        var_r6_2 = 0;
        if ((s32) data_020d5420 > 0) {
            do {
                func_020850ac(data_020d535c[var_r6_2]);
                var_r6_2 += 1;
            } while (var_r6_2 < (s32) data_020d5420);
        }
    }
    data_020d52a8 += 1;
}
