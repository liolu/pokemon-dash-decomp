/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020706e0(void *, void *, s32);

void func_02070698(void *arg0, void **arg1, s32 arg2) {
    void *var_r6;
    void **var_r5;

    var_r6 = arg0;
    var_r5 = arg1;
    while (var_r6 != NULL && var_r5 != NULL) {
        func_020706e0(var_r6, var_r5, arg2);
        var_r6 = *(void **) ((u8 *) var_r6 + 4);
        var_r5 = (void **) *var_r5;
    }
}
