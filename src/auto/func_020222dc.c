/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void **data_020d5164;

void func_020222dc(void) {
    if (data_020d5164 != NULL) {
        M2C_FIELD(*data_020d5164, M2C_UNK(**)(), 4)(data_020d5164);
    }
    data_020d5164 = NULL;
}
