/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02007b3c();                            /* extern */
M2C_UNK func_02007b78();                            /* extern */
extern s32 data_020d4e48;
extern s32 data_020d4e50;

void func_020083ec(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        switch (data_020d4e50) {                    /* irregular */
            case 0:
                func_02007b78();
                return;
            case 3:
            case 4:
                func_02007b3c();
                return;
        }
    } else {
        data_020d4e48 = 1;
    }
}
