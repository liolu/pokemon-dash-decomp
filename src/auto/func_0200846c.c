/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020071d4();                            /* extern */
s32 func_020079ec();                                /* extern */
M2C_UNK func_02007a88();                            /* extern */
s32 func_02007ac4();                                /* extern */
M2C_UNK func_02007b00();                            /* extern */
M2C_UNK func_02008678();                            /* extern */
extern s32 data_020d4e48;
extern s32 data_020d4e50;

void func_0200846c(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        switch (data_020d4e50) {                    /* irregular */
            case 0:
                func_02007b00();
                return;
            case 3:
                if (func_02007ac4() == 0) {
                    return;
                }
                func_020071d4();
                return;
            case 4:
                if (func_02007ac4() != 1) {
                    return;
                }
                func_02008678();
                if (func_020079ec() != 0) {
                    return;
                }
                data_020d4e50 = 0;
                func_02007a88();
                return;
        }
    } else {
        data_020d4e48 = 1;
    }
}
