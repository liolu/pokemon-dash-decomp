/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0209a404(M2C_UNK);
void func_0209da10(M2C_UNK);

extern s32 data_020d4534;
extern s32 data_020d607c;
extern s32 data_020d6080;

void func_0206c794(void) {
    if (data_020d4534 != -1) {
        func_0209da10(data_020d4534);
    }
    func_0209a404(data_020d6080);
    data_020d6080 = 0;
    data_020d607c = 0;
}
