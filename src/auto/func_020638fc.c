/* compiler: 1.2/b56 */
typedef struct S {
    int p0;
    int p4;
    int a;
    int b;
    int c;
} S;
extern void func_02063678(int, int);
extern void func_02063070(int, int, int);
int func_020638fc(S *s) {
    int *p = &s->c;
    *p     = *p - 1;
    if (s->c != 0) {
        return 1;
    }
    if (s->a == -1) {
        func_02063678(s->b, 0x7f);
    } else {
        func_02063070(s->a, s->b, 0);
    }
    return 0;
}
