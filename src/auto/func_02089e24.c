/* compiler: 1.2/b56 */
typedef struct R {
    int a;
    int rc;
} R;
typedef struct H {
    int x;
    R *r;
} H;
H *func_02089e24(H *h, int v, R **q) {
    R *t;
    int *c;
    h->x = v;
    h->r = *q;
    t    = h->r;
    if (t != 0) {
        c  = &t->rc;
        *c = *c + 1;
    }
    return h;
}
