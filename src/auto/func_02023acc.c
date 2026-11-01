/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_020d73d0;
extern u8 func_02064828(void *, void *, void *);

u8 func_02023acc(u8 *arg0) {
    s32 sp0;
    s32 sp4;

    if (*(s32 *) (arg0 + 0x1FC) != 2) {
        return data_020d73d0[1];
    }
    return func_02064828(*(void **) (arg0 + 0x1F8), &sp0, &sp4);
}
