/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02093d18(M2C_UNK *, void *, void **);  /* extern */

void func_02092c68(void *arg0) {
    void *var_r3_2;
    void *var_r3;
    void *temp_r9;
    void *temp_r8;
    void *temp_r4;
    void *temp_r10;
    void *temp_r0_2;
    void *temp_r0;
    s32 var_r1_2;
    s32 var_r1;
    M2C_UNK sp0;
    void *sp4;
    M2C_UNK sp8;
    void *spC;

    var_r3  = M2C_FIELD(arg0, void **, 0x14);
    temp_r9 = arg0 + 0x10;
    if (var_r3 != temp_r9) {
        do {
            temp_r0 = M2C_FIELD(var_r3, void **, 8);
            var_r1  = 1;
            temp_r8 = M2C_FIELD(var_r3, void **, 4);
            if ((temp_r0 != NULL) && (M2C_FIELD(temp_r0, s32 *, 4) != 0)) {
                var_r1 = 0;
            }
            if (var_r1 != 0) {
                sp4 = var_r3;
                func_02093d18(&sp0, arg0 + 0xC, &sp4);
            }
            var_r3 = temp_r8;
        } while (temp_r8 != temp_r9);
    }
    var_r3_2 = M2C_FIELD(arg0, void **, 0x20);
    temp_r4  = arg0 + 0x1C;
    if (var_r3_2 == temp_r4) {
        return;
    }
    do {
        temp_r0_2 = M2C_FIELD(var_r3_2, void **, 8);
        var_r1_2  = 1;
        temp_r10  = M2C_FIELD(var_r3_2, void **, 4);
        if ((temp_r0_2 != NULL) && (M2C_FIELD(temp_r0_2, s32 *, 4) != 0)) {
            var_r1_2 = 0;
        }
        if (var_r1_2 != 0) {
            spC = var_r3_2;
            func_02093d18(&sp8, arg0 + 0x18, &spC);
        }
        var_r3_2 = temp_r10;
    } while (temp_r10 != temp_r4);
}
