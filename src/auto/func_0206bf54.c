/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020699e0(M2C_UNK);
void func_0206b910(M2C_UNK);
void func_020872a8(M2C_UNK);

void func_0206bf54(s32 arg0) {
    M2C_FIELD(arg0, s8 *, 0x1E0) = 0;
    func_020872a8(arg0);
    func_0206b910(arg0);
    if ((M2C_FIELD(arg0, s32 *, 0x1D4) == 0) && (M2C_FIELD(arg0, s32 *, 0x1C4) == 0)) {
        return;
    }
    func_020699e0(arg0);
}
