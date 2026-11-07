typedef struct E {
    unsigned a;
    unsigned b;
    unsigned c;
    unsigned d;
} E;
typedef struct S {
    E *e;
    unsigned n;
} S;
void func_020178ac(S *s) {
    unsigned i;
    for (i = 0; i < s->n; i++) {
        s->e[i].a = i;
    }
}
