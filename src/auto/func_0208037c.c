/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK *func_02080674();                           /* extern */
s32 func_020a0898();              /* extern */
M2C_UNK func_020ab644(); /* extern */
extern M2C_UNK data_020d3dc0;
extern M2C_UNK data_020d3dc8;
extern M2C_UNK data_020d65b8;

void func_0208037c(M2C_UNK arg0, M2C_UNK *arg1) {
    s32 var_r0;

    func_020ab644(&data_020d65b8, 0x80, &data_020d3dc0, func_02080674(), arg1);
    var_r0 = func_020a0898(arg0, &data_020d65b8);
    if (var_r0 == 0) {
        var_r0 = func_020a0898(arg0, arg1);
    }
    if (var_r0 != 0) {
        return;
    }
    func_020ab644(&data_020d65b8, 0x80, &data_020d3dc8, arg1);
    func_020a0898(arg0, &data_020d65b8);
}
