/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02051018(void *);
void func_02049584(void *);
void func_0204b0cc(void *);
void func_0205bee4(void *);
void func_020584b8(void *);
void func_02058728(void *);
void func_0205717c(void *);
void func_02054ec4(void *);
void func_02054a70(void *);
void func_0205e6e0(void *);
void func_0204e510(void *);
void func_02051aec(void *);
void func_020502d8(void *);
void func_0205cc04(void *);
void func_0205c99c(void *);
void func_0204ee18(void *);
void func_0204ea84(void *);
void func_0205e688(void *);
void func_0205e600(void *);
void func_0205e578(void *);
void func_0205e4b4(void *);
void func_0205e410(void *);
void func_0205e354(void *);
void func_0205e2a4(void *);
void func_0205e1e0(void *);
void func_02048c7c(void *);
void func_02049318(void *);
void func_02092ef0(void *);
void func_0207c9dc(void *);
void func_02060c58(void *);
void func_02081f64(void *);
void func_0201c8c8(s32, s32, s32);
void func_02049398(void *, void *, s32 *, void **);
void func_02082ffc(s32);
extern u8 data_020cf4bc;
extern u8 data_020cf4e0;

u8 *func_02048324(u8 *p) {
    void *r;
    u8 s0[4];
    s32 s4;
    void *s8;
    u8 sc[4];
    s32 s10;
    void *s14;
    u8 *a;
    u8 *b;
    u8 *o;

    *(u8 **) p          = &data_020cf4bc;
    *(u8 **) (p + 0x24) = &data_020cf4e0;
    switch (*(u32 *) (p + 0xe4)) {
        case 0:
            func_02051018(p);
            break;
        case 1:
            func_02049584(p);
            break;
        case 2:
            func_0204b0cc(p);
            break;
        case 7:
            func_0205bee4(p);
            func_020584b8(p);
            break;
        case 8:
            func_02058728(p);
            func_020584b8(p);
            break;
        case 28:
            r = *(void **) (p + 0x700);
            if (r != 0) {
                func_02060c58(r);
                func_02081f64(r);
            }
            func_0204e510(p);
            break;
        case 29:
            func_0205717c(p);
            break;
        case 30:
            func_02054ec4(p);
            break;
        case 31:
            func_02054a70(p);
            break;
        case 13:
            func_0205e6e0(p);
            func_0204e510(p);
            break;
        case 23:
            func_02051aec(p);
            break;
        case 24:
            func_020502d8(p);
            break;
        case 25:
            func_0205cc04(p);
            break;
        case 26:
            func_0205c99c(p);
            break;
        case 4:
        case 5:
        case 6:
            func_0204ee18(p);
            break;
        case 10:
        case 11:
            func_0204ea84(p);
            break;
        case 3:
        case 9:
        case 12:
            r = *(void **) (p + 0x700);
            if (r != 0) {
                func_02060c58(r);
                func_02081f64(r);
            }
            func_0204e510(p);
            break;
        case 27:
            r = *(void **) (p + 0x700);
            if (r != 0) {
                func_02060c58(r);
                func_02081f64(r);
            }
            func_0204e510(p);
            break;
        case 14:
            func_0205e688(p);
            break;
        case 15:
            func_0205e600(p);
            break;
        case 16:
            func_0205e578(p);
            break;
        case 17:
            func_0205e4b4(p);
            break;
        case 18:
            func_0205e410(p);
            break;
        case 19:
            func_0205e354(p);
            break;
        case 20:
            func_0205e2a4(p);
            break;
        case 21:
            func_0205e1e0(p);
            break;
        case 32:
        default:
            break;
    }
    a = *(u8 **) (p + 0x114);
    if (a != NULL) {
        (*(void (**)(void *))(*(u8 **) a + 4))(a);
    }
    a = *(u8 **) (p + 0x110);
    if (a != NULL) {
        (*(void (**)(void *))(*(u8 **) a + 4))(a);
    }
    func_02082ffc(0);
    if (p[0x120] != 0) {
        func_02048c7c(p);
    }
    if (*(u32 *) (p + 0xe4) != 0x16) {
        func_0201c8c8(0, 0, 0);
    }
    func_02049318(p);
    s8 = p + 0x100;
    s4 = *(s32 *) (p + 0x104);
    func_02049398(s0, p + 0xfc, &s4, &s8);
    a = *(u8 **) (p + 268);
    if (a != NULL) {
        *(s32 *) (a + 4) -= 1;
        if (*(s32 *) (a + 4) == 0) {
            o = *(u8 **) (p + 268);
            if (o != NULL) {
                (*(void (**)(void *))(*(u8 **) o + 4))(o);
            }
        }
    }
    *(u8 **) (p + 268) = NULL;
    b                  = *(u8 **) (p + 264);
    if (b != NULL) {
        *(s32 *) (b + 4) -= 1;
        if (*(s32 *) (b + 4) == 0) {
            o = *(u8 **) (p + 264);
            if (o != NULL) {
                (*(void (**)(void *))(*(u8 **) o + 4))(o);
            }
        }
    }
    *(u8 **) (p + 264) = NULL;
    s14                = p + 0x100;
    s10                = *(s32 *) (p + 0x104);
    func_02049398(sc, p + 0xfc, &s10, &s14);
    func_0207c9dc(p + 0x24);
    func_02092ef0(p);
    return p;
}
