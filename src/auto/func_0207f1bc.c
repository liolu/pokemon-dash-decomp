/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0209dcc4(s32 a, s32 b, s32 c);

void func_0207f1bc(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 v = arg3;
    s32 t;
    if (v == 0) {
        v = *(s32 *) (arg0 + 8) - arg2;
    }
    t = *(s32 *) (arg0 + 0xC) + *(s32 *) (arg0 + 4);
    func_0209dcc4(arg1, t + arg2, v);
}
