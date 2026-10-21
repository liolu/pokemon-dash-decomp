/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02099f58(M2C_UNK);
void func_0209da10(M2C_UNK);

extern s32 data_020d4534;
extern s32 data_020d6078;

void func_0206c70c(void) {
    if (data_020d4534 != -1) {
        func_0209da10(data_020d4534);
    }
    func_02099f58(data_020d6078);
    data_020d6078 = 0;
}
