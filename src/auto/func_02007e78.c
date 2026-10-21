/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020071d4();                            /* extern */
s32 func_02007960();                                /* extern */
M2C_UNK func_02007a88();                            /* extern */
M2C_UNK func_02007b00();                            /* extern */
extern s32 data_020d4e50;

void func_02007e78(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        switch (data_020d4e50) {                    /* irregular */
            case 0:
                func_02007b00();
                return;
            case 3:
                func_020071d4();
                return;
            case 4:
                if (func_02007960() != 0) {
                    return;
                }
                data_020d4e50 = 0;
                func_02007a88();
                return;
        }
    } else {
        data_020d4e50 = 0;
        func_02007a88();
    }
}
