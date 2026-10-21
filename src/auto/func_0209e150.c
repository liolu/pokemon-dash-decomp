/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209e9f4();                            /* extern */
M2C_UNK func_0209eb8c();                            /* extern */
extern s32 data_020d8764;

void func_0209e150(void) {
    if (data_020d8764 != 0) {
        return;
    }
    data_020d8764 = 1;
    func_0209e9f4();
    func_0209eb8c();
}
