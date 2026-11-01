/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02077230(u8 *arg0) {
    u32 *temp_r2;
    u32 *temp_r3;
    u32 *temp_r1;

    temp_r2 = *(u32 **) arg0;
    temp_r3 = *(u32 **) ((u8 *) temp_r2 + 4);
    if (temp_r3 != NULL) {
        temp_r1 = (u32 *) *temp_r3;
        if (temp_r1 != NULL) {
            do {
                temp_r3 = temp_r1;
                temp_r1 = (u32 *) *temp_r1;
            } while (temp_r1 != NULL);
        }
        *(u32 **) arg0 = temp_r3;
        return;
    }
    temp_r3 = (u32 *) (*(u32 *) ((u8 *) temp_r2 + 8) & ~1);
    if (temp_r2 != (u32 *) *temp_r3) {
        do {
            *(u32 **) arg0 = temp_r3;
            temp_r2        = *(u32 **) arg0;
            temp_r3        = (u32 *) (*(u32 *) ((u8 *) temp_r2 + 8) & ~1);
        } while (temp_r2 != (u32 *) *temp_r3);
    }
    *(u32 **) arg0 = temp_r3;
}
