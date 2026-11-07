/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02002a64(u8, void *);                  /* extern */
s32 func_02002a8c(void *, u16);                     /* extern */
extern s16 data_020d4db4;
extern void *data_020d4dbc;
extern u32 data_020d4dc4;

s32 func_020027c8(s32 arg0) {
    s32 var_r11;
    u32 var_r9;
    u32 var_r8;
    s32 var_r7_2;
    u16 var_r7;
    u16 var_r6_2;
    s32 var_r6;
    s32 sp0;
    s32 rv;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r11_2;
    s32 var_r1;

    var_r9  = 0;
    var_r8  = 0;
    var_r6  = 0;
    var_r11 = 0;
    var_r7  = 0;
    do {
        func_02002a64((u8) var_r7, data_020d4dbc);
        if (M2C_FIELD(data_020d4dbc, s32 *, 0xFF8) == 0x08012025) {
            var_r11 = 1;
            rv      = func_02002a8c(data_020d4dbc, M2C_FIELD((arg0 + (M2C_FIELD(data_020d4dbc, u16 *, 0xFF4) * 8)), u16 *, 4));
            if (M2C_FIELD(data_020d4dbc, u16 *, 0xFF6) == rv) {
                var_r9 = M2C_FIELD(data_020d4dbc, u32 *, 0xFFC);
                var_r6 |= 1 << M2C_FIELD(data_020d4dbc, u16 *, 0xFF4);
            }
        }
        var_r7 = var_r7 + 1;
    } while (var_r7 < 0xE);
    if (var_r11 != 0) {
        if (var_r6 == 0x3FFF) {
            var_r11_2 = 1;
        } else {
            var_r11_2 = 0xFF;
        }
    } else {
        var_r11_2 = 0;
    }
    var_r7_2 = 0;
    sp0      = 0;
    var_r6_2 = 0;
    do {
        func_02002a64((u8) (var_r6_2 + 0xE), data_020d4dbc);
        if (M2C_FIELD(data_020d4dbc, s32 *, 0xFF8) == 0x08012025) {
            sp0 = 1;
            rv  = func_02002a8c(data_020d4dbc, M2C_FIELD((arg0 + (M2C_FIELD(data_020d4dbc, u16 *, 0xFF4) * 8)), u16 *, 4));
            if (M2C_FIELD(data_020d4dbc, u16 *, 0xFF6) == rv) {
                var_r8 = M2C_FIELD(data_020d4dbc, u32 *, 0xFFC);
                var_r7_2 |= 1 << M2C_FIELD(data_020d4dbc, u16 *, 0xFF4);
            }
        }
        var_r6_2 = var_r6_2 + 1;
    } while (var_r6_2 < 0xE);
    if (sp0 != 0) {
        if (var_r7_2 == 0x3FFF) {
            var_r1 = 1;
        } else {
            var_r1 = 0xFF;
        }
    } else {
        var_r1 = 0;
    }
    if ((var_r11_2 == 1) && (var_r1 == 1)) {
        if (((var_r9 == -1U) && (var_r8 == 0)) || ((var_r9 == 0) && (var_r8 == -1U))) {
            if ((u32) (var_r9 + 1) < (u32) (var_r8 + 1)) {
                data_020d4dc4 = var_r8;
            } else {
                data_020d4dc4 = var_r9;
            }
        } else if (var_r9 < var_r8) {
            data_020d4dc4 = var_r8;
        } else {
            data_020d4dc4 = var_r9;
        }
        return 1;
    }
    if ((var_r11_2 == 1) && (var_r1 != 1)) {
        data_020d4dc4 = var_r9;
        if (var_r1 == 0xFF) {
            var_r0_2 = 0xFF;
        } else {
            var_r0_2 = 1;
        }
        return var_r0_2;
    }
    if ((var_r1 == 1) && (var_r11_2 != 1)) {
        data_020d4dc4 = var_r8;
        if (var_r11_2 == 0xFF) {
            var_r0 = 0xFF;
        } else {
            var_r0 = 1;
        }
        return var_r0;
    }
    if ((var_r11_2 == 0) && (var_r1 == 0)) {
        data_020d4dc4 = 0;
        data_020d4db4 = 0;
        return 0;
    }
    data_020d4dc4 = 0;
    data_020d4db4 = 0;
    return 2;
}
