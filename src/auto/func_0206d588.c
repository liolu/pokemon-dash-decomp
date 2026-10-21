/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0209d650(void);
void func_0209d664(M2C_UNK);
void func_0209d6cc(void);

extern M2C_UNK data_020d60c4;

void func_0206d588(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r5;
    s32 var_r4;

    M2C_FIELD(arg0, s32 *, 4)    = arg2;
    M2C_FIELD(arg0, s32 *, 8)    = arg3;
    M2C_FIELD(arg0, s32 *, 0xC)  = arg4;
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s16 *, 0x38) = 0;
    temp_r5                      = func_0209d650();
    var_r4                       = M2C_FIELD(&data_020d60c4, s32 *, 0);
    if (var_r4 == 0) {
        if (M2C_FIELD(&data_020d60c4, s32 *, 4) != 0) {
            func_0209d6cc();
        }
        M2C_FIELD(arg0, s32 *, 0)           = 0;
        M2C_FIELD(&data_020d60c4, s32 *, 0) = arg0;
        M2C_FIELD(&data_020d60c4, s32 *, 4) = arg0;
    } else {
        temp_r2 = M2C_FIELD(arg0, s32 *, 4);
        if ((u32) M2C_FIELD(var_r4, u32 *, 4) > (u32) temp_r2) {
            M2C_FIELD(arg0, s32 *, 0)           = var_r4;
            M2C_FIELD(&data_020d60c4, s32 *, 0) = arg0;
        } else {
        loop_6:
            temp_r1 = *(M2C_UNK *) var_r4;
            if (temp_r1 == 0) {
                if (M2C_FIELD(&data_020d60c4, s32 *, 4) != var_r4) {
                    func_0209d6cc();
                }
                M2C_FIELD(arg0, s32 *, 0)           = 0;
                M2C_FIELD(&data_020d60c4, s32 *, 4) = arg0;
                *(M2C_UNK *) var_r4                 = arg0;
            } else if ((u32) M2C_FIELD(temp_r1, u32 *, 4) > (u32) temp_r2) {
                M2C_FIELD(arg0, s32 *, 0) = temp_r1;
                *(M2C_UNK *) var_r4       = arg0;
            } else {
                var_r4 = temp_r1;
                goto loop_6;
            }
        }
    }
    func_0209d664(temp_r5);
}
