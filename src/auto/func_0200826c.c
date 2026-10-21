/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02007a24();                                /* extern */
M2C_UNK func_02007a88();                            /* extern */
extern s32 data_020d4e50;

void func_0200826c(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        switch (data_020d4e50) {                    /* irregular */
            case 0:
                func_02007a88();
                return;
            case 3:
                if (func_02007a24() != 0) {
                    return;
                }
                data_020d4e50 = 0;
                func_02007a88();
                return;
            case 4:
                data_020d4e50 = 4;
                func_02007a88();
                return;
        }
    } else {
        data_020d4e50 = 0;
        func_02007a88();
    }
}
