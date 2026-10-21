/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200243c();                                /* extern */
s32 func_020025ac();                                /* extern */
M2C_UNK func_020025e4();                            /* extern */
M2C_UNK func_02002ae0();                            /* extern */
M2C_UNK func_02002b94(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0200379c();                            /* extern */
M2C_UNK func_02081edc(void *);                      /* extern */
void *func_02081fec(s32);                           /* extern */
s32 func_020a7420(s32, void *, M2C_UNK);            /* extern */
extern void *data_020d4da0;
extern void *data_020d4da4;
extern void *data_020d4da8;
extern void *data_020d4dac;
extern void *data_020d4db0;
extern void *data_020d4dc0;
extern s32 data_020d4dd0;

s32 func_0200383c(void) {
    s32 temp_r0_3;
    s32 temp_r4;
    void *temp_r0;
    void *temp_r0_2;

    temp_r0       = func_02081fec(0xC0);
    data_020d4da8 = temp_r0;
    if (func_020a7420(0x08000000, temp_r0, 0xC0) == 0) {
        func_02081edc(data_020d4da8);
        data_020d4da8 = NULL;
        return 3;
    }
    temp_r0_2     = func_02081fec(0x100);
    data_020d4dac = temp_r0_2;
    func_020a7420(0x08000100, temp_r0_2, 0x100);
    temp_r4 = func_0200243c();
    func_02081edc(data_020d4da8);
    data_020d4da8 = NULL;
    if (temp_r4 == 0) {
        func_02081edc(data_020d4dac);
        data_020d4dac = NULL;
        return 4;
    }
    data_020d4dc0 = func_02081fec(0x1000);
    data_020d4db0 = func_02081fec(M2C_FIELD(data_020d4dac, s32 *, 0x88));
    data_020d4da0 = func_02081fec(M2C_FIELD(data_020d4dac, s32 *, 0x8C));
    data_020d4da4 = func_02081fec(0x83D0);
    func_02002b94(3, 0);
    temp_r0_3     = func_020025ac();
    data_020d4dd0 = temp_r0_3;
    if ((temp_r0_3 != 1) && (temp_r0_3 != 0xFF)) {
        func_0200379c();
        return data_020d4dd0;
    }
    func_02002ae0();
    func_020025e4();
    return data_020d4dd0;
}
