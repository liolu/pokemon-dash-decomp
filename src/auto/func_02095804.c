/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020958e4(M2C_UNK);
void func_02095914(M2C_UNK);

void func_02095804(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_02095914(arg0);
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_020958e4(arg0);
}
