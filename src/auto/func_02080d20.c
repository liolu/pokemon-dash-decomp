/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020996b4(s32 *);

void func_02080d20(s32 *arg0, s32 *arg1) {
    s32 d[3];

    d[0] = arg0[0] - arg1[0];
    d[1] = arg0[1] - arg1[1];
    d[2] = arg0[2] - arg1[2];
    func_020996b4(d);
}
