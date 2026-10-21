/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209ce64(M2C_UNK, s32);                /* extern */
M2C_UNK func_0209ce78(M2C_UNK, s32);                /* extern */
s32 func_0209ce8c(M2C_UNK);                         /* extern */
s32 func_0209cf00(M2C_UNK);                         /* extern */
extern s32 data_020d8698;

void func_0209d01c(void) {
    if (data_020d8698 != 0) {
        return;
    }
    data_020d8698 = 1;
    func_0209ce78(0, func_0209cf00(0));
    func_0209ce64(0, func_0209ce8c(0));
    func_0209ce64(2, 0);
    func_0209ce78(2, 0);
    func_0209ce78(3, func_0209cf00(3));
    func_0209ce64(3, func_0209ce8c(3));
    func_0209ce78(4, func_0209cf00(4));
    func_0209ce64(4, func_0209ce8c(4));
    func_0209ce78(5, func_0209cf00(5));
    func_0209ce64(5, func_0209ce8c(5));
    func_0209ce78(6, func_0209cf00(6));
    func_0209ce64(6, func_0209ce8c(6));
}
