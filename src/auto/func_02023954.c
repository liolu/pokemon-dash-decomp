/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 func_02064850(void *, void *, void *);
extern u8 *data_020d73d4;

s32 func_02023954(u8 *arg0) {
    s32 sp0;
    s32 sp4;

    if (*(s32 *) (arg0 + 0x1FC) != 2) {
        return ((s32 *) data_020d73d4)[3];
    }
    func_02064850(*(void **) (arg0 + 0x1F8), &sp0, &sp4);
    return sp4;
}
