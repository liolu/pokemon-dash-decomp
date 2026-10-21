/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02046f90();                                /* extern */
M2C_UNK func_02046ff0(M2C_UNK);                     /* extern */
extern s32 data_020d54d0;

void func_02045c18(void) {
    switch (data_020d54d0) {                        /* irregular */
        case 1:
            func_02046ff0(0);
            data_020d54d0 = 2;
            return;
        case 2:
            if (func_02046f90() == 0) {
                return;
            }
            func_02046ff0(1);
            data_020d54d0 = 3;
            return;
        case 3:
            if (func_02046f90() != 0) {
                data_020d54d0 = 0;
            }
            return;
    }
}
