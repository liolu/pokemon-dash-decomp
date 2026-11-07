/* compiler: 1.2/sp2p3 */
extern void func_02090afc(void *, void *, void *);
extern int data_020d74e8;
extern char data_020d7504[];
typedef struct L {
    int a;
    int *b;
    char c[8];
} L;
void func_0208f224(int *p, int v) {
    L l;
    int *q = p;
    if (*q != 0) {
        do {
            l.a = *q;
            l.b = q;
            func_02090afc(l.c, data_020d7504, &l.a);
            q += 3;
        } while (*q != 0);
    }
    data_020d74e8 = v;
}
