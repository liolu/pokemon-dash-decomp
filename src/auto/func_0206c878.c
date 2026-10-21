/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0209a4bc(M2C_UNK);
void func_0209da10(M2C_UNK);

extern s32 data_020d4534;
extern s32 data_020d6084;
extern s32 data_020d6088;
extern s32 data_020d608c;

void func_0206c878(void) {
    if (data_020d4534 != -1) {
        func_0209da10(data_020d4534);
    }
    func_0209a4bc(data_020d608c);
    data_020d608c = 0;
    data_020d6088 = 0;
    data_020d6084 = 0;
}
