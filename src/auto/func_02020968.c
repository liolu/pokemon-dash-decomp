/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct V {
    volatile s32 a;
    volatile s32 b;
};

s32 *func_02082044(s32);                        /* extern */
extern s32 data_020bf020[4][20];
extern s32 *data_020d4fb4;
extern s32 *data_020d4fb8;
extern struct V *data_020d4fbc;
extern struct V *data_020d4fc0;
extern s32 data_020d4fc4;
extern s32 *data_020d4fd0[4][20];
extern s32 data_020d6740;

void func_02020968(void) {
    volatile s32 sp[4];
    s32 i;
    s32 j;
    s32 *src;
    s32 **dst;
    s32 *t;
    s32 *temp_r0;
    s32 *temp_r0_2;
    struct V *temp_r0_3;
    struct V *temp_r0_4;
    s32 *temp_r0_5;
    s32 *temp_r0_6;
    s32 *temp_r0_7;
    s32 *temp_r0_8;
    s32 *temp_r0_9;
    s32 *temp_r0_10;
    s32 *temp_r0_11;
    s32 *temp_r0_12;
    s32 *temp_r0_13;
    s32 *temp_r0_14;
    s32 *temp_r0_15;

    data_020d4fc4 = 0xC;
    src           = &data_020bf020[0][0];
    dst           = &data_020d4fd0[0][0];
    i             = 0;
    do {
        j     = 0;
        sp[i] = 0;
        do {
            t = func_02082044(4);
            if (t != NULL) {
                *t = src[j];
            }
            dst[j] = t;
            j += 1;
        } while (j <= 0x10);
        i += 1;
        src += 20;
        dst += 20;
    } while (i < 4);
    temp_r0_2 = func_02082044(4);
    if (temp_r0_2 != NULL) {
        *temp_r0_2 = 5;
    }
    data_020d4fb8 = temp_r0_2;
    temp_r0_3     = (struct V *) func_02082044(8);
    temp_r0_3->b  = temp_r0_3->a;
    temp_r0_3->a += 1;
    temp_r0_3->a += 1;
    temp_r0_3->a += 1;
    temp_r0_3->a += 1;
    temp_r0_3->a += 1;
    temp_r0_3->a += 1;
    temp_r0_3->a += 1;
    temp_r0_3->a += 1;
    temp_r0_3->a += 1;
    temp_r0_3->a += 1;
    data_020d4fc0 = temp_r0_3;
    temp_r0_4     = (struct V *) func_02082044(8);
    temp_r0_4->b  = temp_r0_4->a;
    temp_r0_4->a += 1;
    temp_r0_4->a += 1;
    temp_r0_4->a += 1;
    temp_r0_4->a += 1;
    temp_r0_4->a += 1;
    temp_r0_4->a += 1;
    temp_r0_4->a += 1;
    temp_r0_4->a += 1;
    temp_r0_4->a += 1;
    temp_r0_4->a += 1;
    data_020d4fbc = temp_r0_4;
    temp_r0_5     = func_02082044(4);
    if (temp_r0_5 != NULL) {
        *temp_r0_5 = 0x1000;
    }
    temp_r0_6 = func_02082044(4);
    if (temp_r0_6 != NULL) {
        *temp_r0_6 = 0x1000;
    }
    temp_r0_7 = func_02082044(4);
    if (temp_r0_7 != NULL) {
        *temp_r0_7 = 0x1000;
    }
    temp_r0_8 = func_02082044(4);
    if (temp_r0_8 != NULL) {
        *temp_r0_8 = 0x1000;
    }
    temp_r0_9 = func_02082044(4);
    if (temp_r0_9 != NULL) {
        *temp_r0_9 = 0x1000;
    }
    temp_r0_10 = func_02082044(4);
    if (temp_r0_10 != NULL) {
        *temp_r0_10 = 0x1000;
    }
    temp_r0_11 = func_02082044(4);
    if (temp_r0_11 != NULL) {
        *temp_r0_11 = 0x1000;
    }
    temp_r0_12 = func_02082044(4);
    if (temp_r0_12 != NULL) {
        *temp_r0_12 = 0x1000;
    }
    temp_r0_13 = func_02082044(4);
    if (temp_r0_13 != NULL) {
        *temp_r0_13 = 0x1000;
    }
    temp_r0_14 = func_02082044(4);
    if (temp_r0_14 != NULL) {
        *temp_r0_14 = 0x1000;
    }
    temp_r0_15 = func_02082044(4);
    if (temp_r0_15 != NULL) {
        *temp_r0_15 = 0;
    }
    data_020d4fb4 = temp_r0_15;
    data_020d6740 = 0;
}
