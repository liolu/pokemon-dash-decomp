/* compiler: 1.2/b56 */
typedef struct S {
    int p0;
    int p4;
    char pad[8];
    unsigned char f;
    char pad2[7];
    unsigned char g;
    char pad3[0x13];
    int v2c;
} S;
extern void func_02075b44(S *);
extern int func_02075eb0(void *, int);
int func_02075ad4(S *s) {
    int k = s->f & 0xf;
    int v;
    unsigned char *p;
    func_02075b44(s);
    s->v2c = func_02075eb0(&s->p4, s->g);
    p      = &s->f;
    *p     = *p | 0x40;
    if (k == 1) {
        v = 3;
    } else {
        v = 4;
    }
    s->f = (s->f & 0xf0) | (v & 0xf);
    if (k == 1) {
        return 3;
    }
    return 4;
}
