/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020a460c(s32, s32, s32, s32, void *, s32, s32);
extern s32 data_020da340;
extern void func_020a0f80(void);

s32 func_020a0f34(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_020a460c(data_020da340, arg2, arg1, arg3, (void *) func_020a0f80, arg0, 1);
    return 6;
}
