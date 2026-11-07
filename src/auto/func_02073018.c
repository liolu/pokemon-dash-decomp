/* compiler: 1.2/b56 */
/* near start: 13 diffs with profile "1.2/sp2p3 -proc arm7tdmi" */
#include "m2c.h"

void func_020730c8(u8 *obj, s32 arg1, s32 arg2);
void func_02071348(s32 *out, u8 *obj);

void func_02073018(u8 *obj, s32 arg1, s32 arg2) {
    s32 slot;
    s32 *rc;
    u8 *p;

    if (obj == NULL) {
        return;
    }
    do {
        func_020730c8(obj, arg1, arg2);
        if ((*(u16 *) (obj + 8) & 2) == 0) {
            return;
        }
        func_02071348(&slot, obj);
        obj = (u8 *) slot;
        if (obj != NULL) {
            rc  = (s32 *) (obj + 4);
            *rc = *rc - 1;
            p   = (u8 *) slot;
            if (*(s32 *) (p + 4) == 0 && p != NULL) {
                (*(void (**)(void *))(*(u32 *) p + 4))(p);
            }
        }
        slot = 0;
    } while (obj != NULL);
}
