/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02096560(M2C_UNK);

void func_02096658(s32 arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_02096560(arg0);
}
