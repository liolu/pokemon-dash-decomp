/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0204609c(s32 *);                           /* extern */
void func_02061190(void *, s32);                    /* extern */
void func_0205fb18(void *);                         /* extern */

void func_0205eb08(u8 *arg0) {
    s32 mask;
    s32 i;
    s32 r;
    s32 arr[3];

    mask = 0;
    for (i = 0; i < 5; i++) {
        arr[0] = 0;
        arr[1] = i;
        arr[2] = 4;
        r      = func_0204609c(arr);
        if (r == 0) {
            mask |= 1 << (i + 1);
        }
    }
    func_02061190(*(void **) (arg0 + 0x700), mask);
    func_0205fb18(arg0);
}
