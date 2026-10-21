/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209c99c();                                /* extern */
M2C_UNK func_0209d6c0(M2C_UNK);                     /* extern */
s32 func_0209f0dc(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0209f104(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK func_0209e56c;

void func_0209e500(void) {
    func_0209f104(7, &func_0209e56c);
    if (func_0209c99c() != 0) {
        return;
    }
    if (func_0209f0dc(7, 1) != 0) {
        return;
    }
    do {
        func_0209d6c0(0x64);
    } while (func_0209f0dc(7, 1) == 0);
}
