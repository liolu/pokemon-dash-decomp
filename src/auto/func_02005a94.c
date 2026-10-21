/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02006aa8();                                /* extern */
extern s32 data_020d4e5c;
extern s32 data_020d4e78;

void func_02005a94(s32 arg0) {
    data_020d4e78 = arg0;
    data_020d4e5c = func_02006aa8();
}
