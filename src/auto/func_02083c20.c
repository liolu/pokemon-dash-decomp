/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02082d88(s32, s32, s32);
void func_020829dc(s32, s32, s32);

void func_02083c20(u8 *arg0, s32 arg1) {
    u8 *o;

    o = *(u8 **) (arg0 + 0xC);
    if (o != NULL) {
        *(s32 *) (arg0 + 0x14) = (*(s32(**)(void *))(*(u8 **) o))(o);
    }
    o = *(u8 **) (arg0 + 0x10);
    if (o != NULL) {
        *(s32 *) (arg0 + 0x18) = (*(s32(**)(void *))(*(u8 **) o))(o);
    }
    func_02082d88(*(s32 *) (arg0 + 0x1c), *(s32 *) (arg0 + 0x14), *(s32 *) (arg0 + 0x18));
    func_020829dc(arg1, *(s32 *) (arg0 + 8), *(s32 *) (arg0 + 0x1c));
}
