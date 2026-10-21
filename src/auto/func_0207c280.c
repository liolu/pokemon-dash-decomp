/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081f64(void *);                      /* extern */
s32 func_0208244c(s32);                             /* extern */
M2C_UNK func_02082590(void *);                      /* extern */

void func_0207c280(s32 arg0, void *arg1) {
    if (func_0208244c(arg0 + 0xA8) != 0) {
        return;
    }
    if (M2C_FIELD(arg1, s32 *, 4) != 0) {
        return;
    }
    if (arg1 == NULL) {
        return;
    }
    func_02082590(arg1);
    func_02081f64(arg1);
}
