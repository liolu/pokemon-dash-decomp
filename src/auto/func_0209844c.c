/* compiler: 1.2/b56 */
typedef struct S {
    int a;
    int b;
    int cur;
    int max;
} S;
void func_0209844c(S *s) {
    int *c;
    if (s->cur < s->max) {
        c  = &s->cur;
        *c = *c + 1;
    }
}
