/* compiler: 1.2/b56 */
/* near start: 14 diffs with profile "1.2/sp2p3" */
#include "m2c.h"

typedef struct Vec3 {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

extern u8 *data_020d5164;

s32 func_02081a40(s32, s32);

s32 func_020054c4(u8 *arg0, u8 **arg1) {
    u8 *r3;
    u8 *ip;
    u8 *lr;
    Vec3 e;
    Vec3 d;

    r3 = *arg1;
    if (r3 == *(u8 **) (data_020d5164 + 0x154)) {
        if (*(s32 *) (*(u8 **) (arg0 + 0x10) + 0x14) & 0x80) {
            return 0;
        }
    }
    lr  = r3 + 0x18;
    ip  = arg0 + 0x18;
    d.x = *(s32 *) ip - *(s32 *) lr;
    d.y = *(s32 *) (ip + 4) - *(s32 *) (lr + 4);
    d.z = *(s32 *) (ip + 8) - *(s32 *) (lr + 8);
    e   = d;
    if (func_02081a40(e.x, e.z) <= 0x900) {
        return 1;
    }
    return 0;
}
