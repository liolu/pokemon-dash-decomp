/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02085f78();                            /* extern */
extern u8 data_020d73dc;
extern M2C_UNK data_020d7408;

M2C_UNK *func_02085f44(void) {
    if (data_020d73dc == 0) {
        func_02085f78();
    }
    return &data_020d7408;
}
