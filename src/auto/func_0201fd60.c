/* compiler: 1.2/b56 */
typedef struct S {
    char pad[0x2c];
    int c2c;
    int c30;
    int c34;
} S;
extern void func_0201fa58(S *);
extern void func_0201f7e4(S *, int);
extern void func_0201fd30(S *);
void func_0201fd60(S *s) {
    int *p;
    if (s->c34 > 0) {
        p  = &s->c34;
        *p = *p - 1;
        if (s->c34 == 0) {
            func_0201fa58(s);
            if (s->c2c == 0) {
                func_0201f7e4(s, s->c30);
            }
        }
    }
    if (s->c2c == 0) {
        return;
    }
    func_0201fd30(s);
}
