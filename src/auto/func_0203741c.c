/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02037908();                            /* extern */
M2C_UNK func_020393e4();                            /* extern */
M2C_UNK func_0203a888();                            /* extern */
M2C_UNK func_0203abe8();                            /* extern */
M2C_UNK func_0207da08(void *, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_0207dad8(void *, s32);                 /* extern */
M2C_UNK func_0207dfe8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0207e900(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0207f0a0(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_0207f348(void *, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_02082044(M2C_UNK);                         /* extern */
M2C_UNK func_0208300c(M2C_UNK, M2C_UNK);            /* extern */
s32 *func_ov001_020dd9d0(s32);                      /* extern */
extern s32 data_020d4534;
extern void *data_020d5164;
extern s8 data_020d519c;
extern u32 data_020d51d4;
extern s32 data_020d51d8;
extern void *data_020d51e8;
extern s32 data_020d5228;
extern void *data_020d5230;
extern void **data_020d524c;
extern void *data_020d5270;
extern void *data_020d5274;
extern void *data_020d5278;
extern s32 data_020d52a8;

void func_0203741c(void) {
    u8 *temp_r4;
    void **var_r3;
    s32 temp_r0;
    s32 var_r0;
    s32 var_r1;
    void *o;
    s32 q;

    switch (data_020d51d4) {
        case 2:
        case 3:
        case 4:
        case 5:
            break;
        case 1:
            data_020d5228 = 0;
            func_0207dfe8(data_020d5274, 0);
            func_0203a888();
            func_02037908();
            func_0208300c(1, 1);
            break;
        default:
        case 0:
            data_020d5228 = 0;
            func_0207dfe8(data_020d5274, 0);
            func_0203a888();
            func_0203abe8();
            func_020393e4();
            func_02037908();
            break;
    }
    temp_r0 = func_02082044(0x14);
    if (temp_r0 != 0) {
        func_0207e900(temp_r0, 1, 0x5100, 1);
    }
    data_020d51d8 = temp_r0;
    func_0207f0a0(temp_r0, data_020d4534, 0, 0);
    func_0207dad8(data_020d51e8, data_020d51d8);
    func_0207f348(data_020d5230, *func_ov001_020dd9d0(M2C_FIELD(M2C_FIELD(data_020d5164, void **, 0x1B0), s32 *, 8)), 0x20,
                  0x200);
    q = M2C_FIELD(data_020d5230, s32 *, 8);
    o = data_020d51e8;
    if (M2C_FIELD(o, void **, 0x2C) != NULL) {
        if (M2C_FIELD(o, s32 *, 0x14) == 1) {
            var_r1 = 0x40;
        } else {
            var_r1 = 0x20;
        }
        var_r0 = (s32) M2C_FIELD(M2C_FIELD(o, void **, 0x2C), s32 *, 0x10) / var_r1;
    } else {
        var_r0 = -1;
    }
    func_0207da08(o, 0x12, 0x12, q, 4, 2, var_r0, 0, 0, 0);
    temp_r4       = (u8 *) data_020d5164 + 0x168;
    data_020d5270 = (void *) temp_r4;
    var_r3        = M2C_FIELD(data_020d5164, void ***, 0x16C);
    data_020d524c = var_r3;
    if ((u8 *) var_r3 != temp_r4) {
    loop_20:
        if (M2C_FIELD(var_r3[2], s32 *, 0xC) & 0x80) {
            var_r3        = (void **) var_r3[1];
            data_020d524c = var_r3;
            if ((u8 *) var_r3 != temp_r4) {
                goto loop_20;
            }
        }
    }
    if ((u8 *) var_r3 == ((u8 *) data_020d5164 + 0x168)) {
        data_020d524c = (void **) *var_r3;
        data_020d519c = 1;
    }
    data_020d52a8 = 0;
    func_0207dfe8(data_020d5278, 1);
    func_0207dfe8(data_020d51e8, 1);
}
