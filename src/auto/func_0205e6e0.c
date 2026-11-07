/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02060c58(void *p);
void func_02081f64(void *p);
void func_02083194(void *p);
void func_02083714(void *p);
void func_02082b74(void *p);
void func_0202332c(void *p);
void func_020856a8(void *p);
void func_02085908(void);
void func_02081edc(s32 v);
extern u8 data_020d3e6c;
extern u8 data_020d5df8;

void func_0205e6e0(u8 *arg0) {
    void *p;
    s32 i;

    p = *(void **) (arg0 + 0x700);
    if (p != 0) {
        func_02060c58(p);
        func_02081f64(p);
    }
    *(void **) (arg0 + 0x700) = 0;
    p                         = *(void **) (arg0 + 0x180);
    if (p != 0) {
        func_02083194(p);
        func_02081f64(p);
    }
    *(void **) (arg0 + 0x180) = 0;
    p                         = *(void **) (arg0 + 0x214);
    if (p != 0) {
        func_02083714(p);
        func_02081f64(p);
    }
    *(void **) (arg0 + 0x214) = 0;
    for (i = 0; i < 2; i++) {
        p = ((void **) (arg0 + 0x1f0))[i];
        if (p != 0) {
            *(void **) p = &data_020d3e6c;
            func_02082b74(p);
            func_02081f64(p);
        }
        ((void **) (arg0 + 0x1f0))[i] = 0;
    }
    p = *(void **) (arg0 + 0x6f8);
    if (p != 0) {
        func_0202332c(p);
        func_02081f64(p);
    }
    *(void **) (arg0 + 0x6f8) = 0;
    p                         = *(void **) (arg0 + 0x6fc);
    if (p != 0) {
        func_020856a8(p);
        func_02081f64(p);
    }
    *(void **) (arg0 + 0x6fc) = 0;
    func_02085908();
    func_02081edc(*(s32 *) &data_020d5df8);
}
