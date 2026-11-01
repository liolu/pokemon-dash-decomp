/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020825b4(void *, s32, void *, s32, s32);
void func_0207c0c4(s32, void *);
void func_02082590(void *);

void func_0207bde8(s32 *arg0, s32 arg1) {
    u32 buf[11];

    if (*arg0 == 0) {
        return;
    }
    func_020825b4(buf, 0, arg0, arg1, 0);
    func_0207c0c4(*arg0, buf);
    func_02082590(buf);
}
