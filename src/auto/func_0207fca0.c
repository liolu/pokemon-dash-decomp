/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0209cdd4(s32, s32);
void func_0207f1f8(s32, s32, s32, s32);

void func_0207fca0(u8 *arg0) {
    s32 t;
    s32 s;
    u8 *p;

    if (*(u8 *) (arg0 + 0x10) == 0) {
        return;
    }
    func_0209cdd4(*(s32 *) arg0, 0x600);
    p = *(u8 **) (arg0 + 0x14);
    s = *(s32 *) arg0;
    t = *(s32 *) (p + 0x24);
    if (t == 0) {
        return;
    }
    func_0207f1f8(t, s, 0, 0x600);
}
