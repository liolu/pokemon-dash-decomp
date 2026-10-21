/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020088e4();                            /* extern */
M2C_UNK func_02008974();                            /* extern */
extern s32 data_020d4e48;
extern s32 data_020d4e50;

void func_02008548(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        switch (data_020d4e50) {                    /* irregular */
            case 0:
                data_020d4e48 = 0;
                return;
            case 3:
                data_020d4e48 = 0;
                func_02008974();
                return;
            case 4:
                data_020d4e48 = 0;
                func_020088e4();
                return;
        }
    } else {
        data_020d4e48 = 1;
    }
}
