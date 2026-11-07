/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_02097188(M2C_UNK, s32, M2C_UNK *, void *, s32); /* extern */
s32 func_020a0724(void *, s32, M2C_UNK);            /* extern */
s32 func_020a0790(void *, void *, s32);             /* extern */
extern M2C_UNK func_020969e4;
extern M2C_UNK func_020969f0;
extern M2C_UNK func_020969fc;

s32 func_02096d14(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r1;
    s32 temp_t;

    if (func_020a0724(arg0 + 0x30, 0, 0) == 0) {
        return 0;
    }
    func_020a0790(arg0 + 0x30, arg0, 0x30);
    M2C_FIELD(arg0, void **, 0x84) = func_02097188(arg1, M2C_FIELD(arg0, s32 *, 0x1C), &func_020969fc, arg0, 0);
    if (M2C_FIELD(arg0, void **, 0x84) == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, void **, 0x7C) = func_02097188(arg1, M2C_FIELD(arg0, s32 *, 0x24), &func_020969f0, arg0, 0);
    if (M2C_FIELD(arg0, void **, 0x7C) == NULL) {
        return 0;
    }
    if (arg2 != 0) {
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x14);
        if (temp_r1 != 0) {
            M2C_FIELD(arg0, void **, 0x80) = func_02097188(arg1, temp_r1, &func_020969e4, arg0, 0);
            if (M2C_FIELD(arg0, void **, 0x80) == NULL) {
                return 0;
            }
        }
    }
    if (func_020a0724(arg0 + 0x30, M2C_FIELD(arg0, s32 *, 0x18), 0) == 0) {
        return 0;
    }
    temp_t = func_020a0790(arg0 + 0x30, M2C_FIELD(arg0, void **, 0x84), M2C_FIELD(arg0, s32 *, 0x1C));
    if (temp_t != M2C_FIELD(arg0, s32 *, 0x1C)) {
        return 0;
    }
    if (func_020a0724(arg0 + 0x30, M2C_FIELD(arg0, s32 *, 0x20), 0) == 0) {
        return 0;
    }
    temp_t = func_020a0790(arg0 + 0x30, M2C_FIELD(arg0, void **, 0x7C), M2C_FIELD(arg0, s32 *, 0x24));
    if (temp_t != M2C_FIELD(arg0, s32 *, 0x24)) {
        return 0;
    }
    if ((arg2 != 0) && (M2C_FIELD(arg0, s32 *, 0x14) != 0)) {
        if (func_020a0724(arg0 + 0x30, M2C_FIELD(arg0, s32 *, 0x10), 0) == 0) {
            return 0;
        }
        temp_t = func_020a0790(arg0 + 0x30, M2C_FIELD(arg0, void **, 0x80), M2C_FIELD(arg0, s32 *, 0x14));
        if (temp_t != M2C_FIELD(arg0, s32 *, 0x14)) {
            return 0;
        }
    }
    return 1;
}
