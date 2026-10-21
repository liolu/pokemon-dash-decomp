/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0209dacc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0209dc94(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020d4534;

void func_0209b474(s32 arg0, s32 arg1, s32 arg2) {
    if (data_020d4534 != -1) {
        func_0209dacc(data_020d4534, arg0, arg1 + 0x05000000, arg2);
        return;
    }
    func_0209dc94(arg0, arg1 + 0x05000000, arg2);
}
