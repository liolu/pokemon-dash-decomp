/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0209a10c(M2C_UNK);
void func_0209da10(M2C_UNK);

extern s32 data_020d4534;
extern s32 data_020d83d0;
extern s32 data_020d83d4;

void func_0209b4d0(void) {
    if (data_020d4534 != -1) {
        func_0209da10(data_020d4534);
    }
    func_0209a10c(data_020d83d4);
    data_020d83d4 = 0;
    data_020d83d0 = 0;
}
