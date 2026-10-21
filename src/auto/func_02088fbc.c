/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020888ac(M2C_UNK, M2C_UNK);
void func_02088ab4(M2C_UNK);

void func_02088fbc(s32 arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x84) == 0) {
        return;
    }
    func_02088ab4(arg0);
    func_020888ac(arg0, arg1);
}
