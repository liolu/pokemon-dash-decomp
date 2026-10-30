/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02071be8 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0207/func_02071be8.c (license: MIT), reused
 * by tools/donor_match.py */
typedef struct Ctx {
    int f0;
    int f4;
    char rest[0x18 - 8];
} Ctx;
typedef struct Src Src;
extern void func_020b4ccc(int handle, Ctx *ctx);
extern void func_020b51a0(void);
extern void func_020b36b0(Src *s, Ctx *ctx);
extern int func_020b3f34(Src *s, Ctx *ctx);
extern unsigned char *func_020b3b88(Src *s, Ctx *ctx, int *out);
extern unsigned char *func_020b389c(unsigned char *p, int *out);
extern unsigned char *func_020b3944(unsigned char *p, int *out);
extern void func_020b4088(Src *s, Ctx *ctx, unsigned char *p);
extern void func_020b3b18(Src *s, int off, int add);
extern void func_020b3594(Src *s, Ctx *ctx, int n);
struct Src {
    int f0;
    char p4[8];
    int fc;
    int f10;
};
void func_020b3a34(struct Src *s) {
    int local0;
    Ctx ctx;
    volatile int blk[3];
    unsigned char *q;
    func_020b4ccc(s->f10, &ctx);
    if (ctx.f4 == 0) {
        func_020b51a0();
    }
    func_020b36b0(s, &ctx);
    if (s->f0 != 0) {
        s->fc = 0;
    } else {
        s->fc = func_020b3f34(s, &ctx);
    }
    q      = func_020b3b88(s, &ctx, &local0);
    blk[0] = q[1] | (q[2] << 8) | (q[3] << 16) | (q[4] << 24);
    func_020b3944(func_020b389c(q + 5, (int *) &blk[1]), (int *) &blk[2]);
    func_020b4088(s, &ctx, q);
    func_020b3b18(s, blk[2], local0);
    func_020b3594(s, &ctx, ctx.f0 + blk[1]);
}
