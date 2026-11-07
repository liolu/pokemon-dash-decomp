/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_0207dfe8(void *, s32);
extern void func_0207e06c(void *, s32, s32);
extern void func_0207d830(void *, s32, s32);
extern void func_02082ffc(s32);
extern void func_02082b74(void *);
extern void func_02081f64(void *);
extern void func_02083194(void *);
extern void func_020833e4(void *);
extern void func_0207f230(void *);
extern void func_0207e750(void *);
extern void func_0207f4a0(void *);
extern u8 data_020d3e6c[];

void func_0204e510(void *arg0) {
    u8 *self = arg0;
    void *t;
    void *o;
    void *u;

    func_0207dfe8(*(void **) (self + 0x128), 0);
    func_0207dfe8(*(void **) (self + 0x124), 0);
    func_0207e06c(*(void **) (self + 0x124), 0, 0);
    func_0207dfe8(*(void **) (self + 0x12C), 0);
    func_0207d830(*(void **) (self + 0x12C), 0, 0);
    func_02082ffc(1);
    t = *(void **) (self + 0x240);
    if (t != NULL) {
        *(void **) t = (void *) data_020d3e6c;
        func_02082b74(t);
        func_02081f64(t);
    }
    t = *(void **) (self + 0x244);
    if (t != NULL) {
        *(void **) t = (void *) data_020d3e6c;
        func_02082b74(t);
        func_02081f64(t);
    }
    t = *(void **) (self + 0x238);
    if (t != NULL) {
        func_02083194(t);
        func_02081f64(t);
    }
    t = *(void **) (self + 0x23C);
    if (t != NULL) {
        func_02083194(t);
        func_02081f64(t);
    }
    t = *(void **) (self + 0x248);
    if (t != NULL) {
        func_020833e4(t);
        func_02081f64(t);
    }
    t = *(void **) (self + 0x24C);
    if (t != NULL) {
        func_020833e4(t);
        func_02081f64(t);
    }
    o = *(void **) (self + 0x12C);
    if (o != NULL) {
        u = *(void **) ((u8 *) o + 0x50);
        if (u != NULL) {
            func_0207f230(u);
            func_02081f64(u);
        }
        func_0207e750(o);
        func_02081f64(o);
    }
    t = *(void **) (self + 0x138);
    if (t == NULL) {
        return;
    }
    func_0207f4a0(t);
    func_02081f64(t);
}
