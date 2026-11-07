/* compiler: 1.2/b56 */
#include "m2c.h"

extern u8 *data_020d73d4;

void func_020648dc(u8 *arg0) {
    s32 idx;
    u16 val;
    u8 *p;
    s32 *cnt;

    idx = *(s32 *) (arg0 + 4);
    if (idx != -1) {
        p = data_020d73d4;
        if (p[1] != 0) {
            val = (u16) ((*(s32 *) (p + 8) & 0xFF) | ((*(s32 *) (p + 12) & 0xFF) << 8));
        } else {
            val = 0xFF00;
        }
        cnt                          = (s32 *) (arg0 + 4);
        *cnt                         = *cnt + 1;
        ((u16 *) *(u8 **) arg0)[idx] = val;
        *(s32 *) (arg0 + 12)         = *(s32 *) (arg0 + 4);
        if (*(s32 *) (arg0 + 4) == 1) {
            *(s32 *) (arg0 + 4) = -1;
        }
    }
    if (*(s32 *) (arg0 + 8) != -1) {
        cnt  = (s32 *) (arg0 + 8);
        *cnt = *cnt + 1;
    }
}
