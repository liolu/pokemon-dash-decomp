/* compiler: 1.2/b56 */
#include "m2c.h"

void func_0200cb60(u8 *);
void func_02081f64(u8 *);
void func_020b523c(u8 *, s32, s32, void *);
extern void *data_020cd8d4;
extern void func_02004698(void);

u8 *func_02032558(u8 *a) {
    u8 *r;
    s32 *c;
    u8 *e;

    *(void **) a = &data_020cd8d4;
    e            = *(u8 **) (a + 0xE0);
    if (e != NULL) {
        r = *(u8 **) (e + 4);
        if (r != NULL) {
            *(s32 *) (r + 4) -= 1;
            if (*(s32 *) (r + 4) == 0) {
                if (*(u8 **) (e + 4) != NULL) {
                    (*(void (**)(void *))(**(u8 ***) (e + 4) + 4))(*(u8 **) (e + 4));
                }
            }
        }
        *(u8 **) (e + 4) = NULL;
        r                = *(u8 **) (e + 0);
        if (r != NULL) {
            *(s32 *) (r + 4) -= 1;
            if (*(s32 *) (r + 4) == 0) {
                if (*(u8 **) (e + 0) != NULL) {
                    (*(void (**)(void *))(**(u8 ***) (e + 0) + 4))(*(u8 **) (e + 0));
                }
            }
        }
        *(u8 **) (e + 0) = NULL;
        func_02081f64(e);
    }
    c = *(s32 **) (a + 0xD8);
    if (c != NULL) {
        *c -= 1;
        if (*c == 0 && *(u8 **) (a + 0xD8) != NULL) {
            func_02081f64(*(u8 **) (a + 0xD8));
        }
    }
    *(u8 **) (a + 0xD8) = NULL;
    func_020b523c(a + 0xB8, 2, 4, func_02004698);
    r = *(u8 **) (a + 0xB0);
    if (r != NULL) {
        *(s32 *) (r + 4) -= 1;
        if (*(s32 *) (r + 4) == 0) {
            if (*(u8 **) (a + 0xB0) != NULL) {
                (*(void (**)(void *))(**(u8 ***) (a + 0xB0) + 4))(*(u8 **) (a + 0xB0));
            }
        }
    }
    *(u8 **) (a + 0xB0) = NULL;
    r                   = *(u8 **) (a + 0xAC);
    if (r != NULL) {
        *(s32 *) (r + 4) -= 1;
        if (*(s32 *) (r + 4) == 0) {
            if (*(u8 **) (a + 0xAC) != NULL) {
                (*(void (**)(void *))(**(u8 ***) (a + 0xAC) + 4))(*(u8 **) (a + 0xAC));
            }
        }
    }
    *(u8 **) (a + 0xAC) = NULL;
    r                   = *(u8 **) (a + 0xA4);
    if (r != NULL) {
        *(s32 *) (r + 4) -= 1;
        if (*(s32 *) (r + 4) == 0) {
            if (*(u8 **) (a + 0xA4) != NULL) {
                (*(void (**)(void *))(**(u8 ***) (a + 0xA4) + 4))(*(u8 **) (a + 0xA4));
            }
        }
    }
    *(u8 **) (a + 0xA4) = NULL;
    r                   = *(u8 **) (a + 0xA0);
    if (r != NULL) {
        *(s32 *) (r + 4) -= 1;
        if (*(s32 *) (r + 4) == 0) {
            if (*(u8 **) (a + 0xA0) != NULL) {
                (*(void (**)(void *))(**(u8 ***) (a + 0xA0) + 4))(*(u8 **) (a + 0xA0));
            }
        }
    }
    *(u8 **) (a + 0xA0) = NULL;
    r                   = *(u8 **) (a + 0x9C);
    if (r != NULL) {
        *(s32 *) (r + 4) -= 1;
        if (*(s32 *) (r + 4) == 0) {
            if (*(u8 **) (a + 0x9C) != NULL) {
                (*(void (**)(void *))(**(u8 ***) (a + 0x9C) + 4))(*(u8 **) (a + 0x9C));
            }
        }
    }
    *(u8 **) (a + 0x9C) = NULL;
    r                   = *(u8 **) (a + 0x98);
    if (r != NULL) {
        *(s32 *) (r + 4) -= 1;
        if (*(s32 *) (r + 4) == 0) {
            if (*(u8 **) (a + 0x98) != NULL) {
                (*(void (**)(void *))(**(u8 ***) (a + 0x98) + 4))(*(u8 **) (a + 0x98));
            }
        }
    }
    *(u8 **) (a + 0x98) = NULL;
    c                   = *(s32 **) (a + 0x70);
    if (c != NULL) {
        *c -= 1;
        if (*c == 0 && *(u8 **) (a + 0x70) != NULL) {
            func_02081f64(*(u8 **) (a + 0x70));
        }
    }
    *(u8 **) (a + 0x70) = NULL;
    func_0200cb60(a);
    return a;
}
