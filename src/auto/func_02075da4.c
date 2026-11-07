/* compiler: 1.2/b56 */
typedef struct S {
    int p0;
    int a;
    int b;
    unsigned int c;
    unsigned char f;
    char pad[15];
    int v20;
} S;
extern int func_02075e0c(void *);
extern int func_0200d5c0(int);
int func_02075da4(S *s) {
    unsigned char *p;
    if (s->c <= (unsigned int) (s->a - s->b)) {
        return 6;
    }
    s->v20 = func_0200d5c0(func_02075e0c(&s->a) << 12);
    p      = &s->f;
    *p     = *p | 0x20;
    s->f   = (s->f & 0xf0) | 2;
    return 2;
}
