/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206cf48(M2C_UNK, M2C_UNK);
M2C_UNK func_0206cfe8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0209cd9c(M2C_UNK, M2C_UNK);
void func_0209d6cc(void);

void func_0206cee0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;

    if (arg2 & 0x1F) {
        func_0209d6cc();
    }
    func_0209cd9c(arg2, arg3);
    temp_r0 = func_0206cfe8(arg0, arg1, arg2, arg3);
    if (temp_r0 < 0) {
        func_0209d6cc();
    }
    func_0206cf48(arg0, temp_r0);
}
