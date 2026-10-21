/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209ba10(M2C_UNK);                     /* extern */
M2C_UNK func_0209bb14(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0209d384(M2C_UNK);                     /* extern */
extern u16 data_020d872c;
extern s32 data_020d8730;
extern M2C_UNK data_020d8734;
extern M2C_UNK func_0209d450;

void func_0209d4d8(void) {
    if (data_020d872c != 0) {
        return;
    }
    data_020d872c = 1;
    func_0209d384(0);
    M2C_FIELD(&data_020d8734, s32 *, 0) = 0;
    M2C_FIELD(&data_020d8734, s32 *, 4) = 0;
    *(s16 *) 0x04000102                 = 0;
    *(s16 *) 0x04000100                 = 0;
    *(s16 *) 0x04000102                 = 0xC1;
    func_0209bb14(8, &func_0209d450);
    func_0209ba10(8);
    data_020d8730 = 0;
}
