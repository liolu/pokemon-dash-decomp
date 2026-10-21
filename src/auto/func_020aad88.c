/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020aac54(M2C_UNK);                     /* extern */
M2C_UNK func_020b4ebc();                            /* extern */
extern M2C_UNK (*data_020dba2c)();
extern s32 data_020dba34;

void func_020aad88(M2C_UNK arg0) {
    if (data_020dba34 == 0) {
        func_020b4ebc();
        if (data_020dba2c != NULL) {
            data_020dba2c();
            data_020dba2c = NULL;
        }
    }
    func_020aac54(arg0);
}
