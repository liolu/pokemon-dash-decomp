/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0200d6e0(s32 *, s32, s32 *, s32 *);

void func_02008d40(u8 *arg0, s32 arg1, s32 arg2) {
    s32 v[5];
    s32 t;

    if (*(s32 *) (arg0 + 0x194) == 0) {
        return;
    }
    v[1] = arg2;
    v[0] = arg1;
    t    = *(s32 *) (arg0 + 0x194);
    v[3] = t + 4;
    func_0200d6e0(&v[2], t, &v[3], &v[0]);
}
