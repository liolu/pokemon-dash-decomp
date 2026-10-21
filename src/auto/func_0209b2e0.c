/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0209dba4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0209dcc4(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020d4534;

void func_0209b2e0(s32 arg0, s32 arg1, s32 arg2) {
    if (data_020d4534 != -1) {
        func_0209dba4(data_020d4534, arg0, arg1 + 0x07000000, arg2);
        return;
    }
    func_0209dcc4(arg0, arg1 + 0x07000000, arg2);
}
