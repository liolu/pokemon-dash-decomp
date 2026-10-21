/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0209bc58(void);
M2C_UNK func_0209bd94(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_0209bec4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_0209bd94(arg0, arg1, arg2, arg3) <= 0) {
        return;
    }
    do {
        func_0209bc58();
    } while (func_0209bd94(arg0, arg1, arg2, arg3) > 0);
}
