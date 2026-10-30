/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02057f54 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_02057f54.c (license: MIT), reused
 * by tools/donor_match.py */
extern int func_0209d6a8(void);
extern struct Node58 *func_0209c1dc(void);
extern int func_0209c78c(void *ctx);
extern void func_0209c7d8(void *ctx);
struct CtxState {
    unsigned short m0;
    unsigned short m2;
    unsigned short m4;
    unsigned short m6;
    void *m8;
    int mc;
    void (*m10)(void *, void *);
};
extern struct CtxState data_020d8454;
extern void **data_020d844c;
extern void (*data_020d8448)(void *, void *);
void func_0209c114(void) {
    void *r6;
    struct Node58 *r5;
    struct CtxState *s = &data_020d8454;
    if (s->m4 == 0) {
        if (func_0209d6a8() != 0x12) {
            goto cont;
        }
    }
    s->m0 = 1;
    return;
cont:
    r6 = data_020d844c[0];
    r5 = func_0209c1dc();
    if (r6 == (void *) r5) {
        return;
    }
    if (r5 == 0) {
        return;
    }
    if (func_0209c78c(r6) != 0) {
        return;
    }
    if (data_020d8448 != 0) {
        data_020d8448(r6, r5);
    }
    if (s->m10 != 0) {
        s->m10(r6, r5);
    }
    data_020d8454.m8 = r5;
    func_0209c7d8(r5);
}
