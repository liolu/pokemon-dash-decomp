/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020a0a94(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020a0bf4(void *);

s32 func_020a09c4(s32 arg0, s32 arg1) {
    u8 sp0[68];

    func_020a0bf4(sp0);
    if (func_020a0a94((s32) sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
