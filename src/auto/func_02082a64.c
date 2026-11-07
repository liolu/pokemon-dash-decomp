/* compiler: 1.2/sp2p3 */
extern unsigned int data_020d6760[];
typedef struct S {
    int p0;
    int a;
    int b;
    int c;
    unsigned char d;
} S;
void func_02082a64(S *s, int v) {
    unsigned int *q;
    unsigned int t;
    s->c = v;
    if (s->d != 0) {
        t = s->c;
    } else {
        t = 0x200;
    }
    q = (unsigned int *) ((char *) data_020d6760 + (s->a << 10) + (s->b << 3));
    if (t != 0x100) {
        *q = (*q & 0xc1fffcff) | t;
        return;
    }
    *q = (*q & 0xc1fffcff) | t;
}
