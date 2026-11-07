/* compiler: 1.2/sp2p3 */
typedef struct A {
    int n0;
    int n1;
    int n2;
    int base;
} A;
typedef struct B {
    int p0;
    int p1;
    int p2;
    int p3;
} B;
void func_0208b74c(B *o, A *s) {
    int e = s->n2;
    int b = s->base;
    int f = s->n0;
    e     = b + e * 4;
    o->p0 = e;
    o->p1 = b;
    o->p2 = e;
    o->p3 = b + f * 4;
}
