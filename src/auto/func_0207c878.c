/* compiler: 1.2/b56 */
typedef struct S {
    int p0;
    char q[0x98];
    unsigned char fl;
} S;
extern void func_0207c8e8(S *);
extern int func_0209c318(void *);
extern void func_0209c32c(void *);
void func_0207c878(S *s) {
    unsigned char *p = &s->fl;
    char *q;
    *p = *p | 4;
    if (!(s->fl & 2)) {
        do {
            func_0207c8e8(s);
        } while (!(s->fl & 2));
    }
    if (func_0209c318(s->q) != 0) {
        return;
    }
    q = s->q;
    do {
        func_0209c32c(q);
    } while (func_0209c318(q) == 0);
}
