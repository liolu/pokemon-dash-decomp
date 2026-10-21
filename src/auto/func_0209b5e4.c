/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0209a200(M2C_UNK);
void func_0209da10(M2C_UNK);

extern s32 data_020d4534;
extern s32 data_020d83cc;
extern s32 data_020d83d8;
extern s32 data_020d83dc;
extern s32 data_020d83e0;

void func_0209b5e4(void) {
    if (data_020d4534 != -1) {
        func_0209da10(data_020d4534);
    }
    func_0209a200(data_020d83d8);
    data_020d83e0 = 0;
    data_020d83dc = 0;
    data_020d83cc = 0;
    data_020d83d8 = 0;
}
